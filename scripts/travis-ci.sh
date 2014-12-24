#!/bin/bash

COMMAND=$1
BUILD_TOP=`dirname $TRAVIS_BUILD_DIR`
EXIT_VALUE=0

##
# SCRIPT COMMANDS
##

# system-install
#
# This is meant to setup the server on Travis-CI so that it can run the tests.
#
system_install() {

  # Install the latest Drush
  header Installing Drush
  composer global require --prefer-source --no-interaction drush/drush:6.*

  # debug
  echo $PATH
  which drush

  .drush/drush dl -y drupalorg_drush-7.x-1.x-dev --destination=$HOME/.drush
  .drush/drush cc drush

  # Build Codebase
  mkdir profiles
  mv cm profiles/
  mkdir drupal
  mv profiles drupal/

  # Build the current branch.
  header Building Cm from current branch
  cd drupal
  pwd
  drush make --yes profiles/cm/drupal-org-core.make --prepare-install
  drush make --yes profiles/cm/scripts/drupal-org.make --no-core --contrib-destination=profiles/cm
  mkdir sites/default/files
  mkdir sites/default/files/private
  mkdir sites/default/files/temp

  # Verify that all the .make files will work on Drupal.org.
  header Verifying .make file
  #don't verify -dev makefile since it has github links
  #verify the release makefile instead
  #drush verify-makefile drupal/profiles/openatrium/drupal-org-dev.make
  drush verify-makefile drupal/profiles/openatrium/drupal-org.make
  find drupal/profiles/openatrium/modules -name \*.make -print0 | xargs -0 -n1 drush verify-makefile

  # Download an old version to test upgrading from.
  if [[ "$UPGRADE" != none ]]; then
    header Downloading Open Atrium $UPGRADE
    drush dl openatrium-$UPGRADE
  fi

  # Setup files
  sudo chmod -R 777 drupal/sites/all

}

# before_tests
#
# Setup Drupal to run the tests.
#
before_tests() {
  UPGRADE_DEMO_VERSION=`echo $UPGRADE | sed -e s/^7.x-//`

  # Do the site install (either the current revision or old for the upgrade).
  header Installing Drupal
  if [[ "$UPGRADE" == none ]]; then
    cd drupal
  else
    cd openatrium-$UPGRADE
    drush dl panopoly_demo-$UPGRADE_DEMO_VERSION
  fi
  drush si openatrium --db-url=mysql://root:@127.0.0.1/drupal --account-name=admin --account-pass=admin --site-mail=admin@example.com --site-name="Cm" --yes
  drush dis -y dblog
  drush vset -y file_private_path "sites/default/files/private"
  drush vset -y file_temporary_path "sites/default/files/temp"
}

# run_tests
#
# Run the tests.
#
run_tests() {
  header Running tests
}

# after_tests
#
# Clean up after the tests.
#
after_tests() {
  header Cleaning up after tests
}

##
# UTILITY FUNCTIONS:
##

# Prints a message about the section of the script.
header() {
  set +xv
  echo
  echo "** $@"
  echo
  set -xv
}

# Sets the exit level to error.
set_error() {
  EXIT_VALUE=1
}

# Runs a command and sets an error if it fails.
run_test() {
  if ! $@; then
    set_error
  fi
}

# Runs a command showing all the lines executed
run_command() {
  set -xv
  $@
  set +xv
}

# Wait for a specific port to respond to connections.
wait_for_port() {
  local port=$1
  while echo | telnet localhost $port 2>&1 | grep -qe 'Connection refused'; do
    echo "Connection refused on port $port. Waiting 5 seconds..."
    sleep 5
  done
}

##
# SCRIPT MAIN:
##

# Capture all errors and set our overall exit value.
trap 'set_error' ERR

# We want to always start from the same directory:
cd $BUILD_TOP

case $COMMAND in
  system-install)
    run_command system_install
    ;;

  drupal-install)
    run_command drupal_install
    ;;

  before-tests)
    run_command before_tests
    ;;

  run-tests)
    run_command run_tests
    ;;

  after-tests)
    run_command after_tests
    ;;
esac

exit $EXIT_VALUE
