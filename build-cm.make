api = 2
core = "7.x"

; Include Drupal core makefile
includes[] = drupal-org-core.make

; Cm Platform

projects[cm][type] = "profile"
projects[cm][download][type] = "git"
projects[cm][download][url] = "http://git.drupal.org/project/cm.git"

projects[cm][download][tag] = "7.x-0.36"

