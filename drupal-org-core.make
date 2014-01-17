api = 2
core = 7.x

projects[drupal][type] = "core"
projects[drupal][version]= "7.26"

; Fix [node:summary] token: https://drupal.org/node/1300920
projects[drupal][patch][] = "https://drupal.org/files/drupal-1300920-126.patch"

