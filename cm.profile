<?php

/**
 * Implement hook_install().
 *
 * Perform actions to set up the site for this profile.
 */
function cm_install() {
  include_once DRUPAL_ROOT . '/core/profiles/standard/standard.install';
  standard_install();
}
