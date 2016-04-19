api = 2
core = 7.x

projects[drupal][type] = "core"
projects[drupal][version]= "7.43"

; Fix anonymous user file uploads: https://www.drupal.org/node/2678822#comment-10926613
projects[drupal][patch][] = "https://drupal.org/files/issues/drupal-n2678822-22.patch"
