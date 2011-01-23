api = 2
core = "6.x"

; Contrib projects 

projects[admin][subdir] = "contrib"
projects[admin][version] = "2.0"

projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "1.5"

projects[adminrole][subdir] = "contrib"
projects[adminrole][version] = "1.3"

projects[advanced_help][subdir] = "contrib"
projects[advanced_help][version] = "1.2"

projects[auto_nodetitle][subdir] = "contrib"
projects[auto_nodetitle][version] = "1.2"

projects[backup_migrate][subdir] = "contrib"
projects[backup_migrate][version] = "2.2"

projects[cache_actions][subdir] = "contrib"
projects[cache_actions][version] = "2.0-beta1"

projects[cck][subdir] = "contrib"
projects[cck][version] = "2.7"

projects[context][subdir] = "contrib"
projects[context][version] = "3.0"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.7"

projects[diff][subdir] = "contrib"
projects[diff][version] = "2.1-alpha3"

projects[features][subdir] = "contrib"
projects[features][version] = "1.0-beta11"

projects[filefield][subdir] = "contrib"
projects[filefield][version] = "3.7"

projects[globalredirect][subdir] = "contrib"
projects[globalredirect][version] = "1.3-alpha1"

projects[google_analytics][subdir] = "contrib"
projects[google_analytics][version] = "2.2"

projects[imageapi][subdir] = "contrib"
projects[imageapi][version] = "1.8"

projects[imagecache][subdir] = "contrib"
projects[imagecache][version] = "2.0-beta10"

projects[imagefield][subdir] = "contrib"
projects[imagefield][version] = "3.7"

projects[install_profile_api][subdir] = "contrib"
projects[install_profile_api][version] = "2.1"

projects[jquery_ui][subdir] = "contrib"
projects[jquery_ui][version] = "1.4"

projects[jquery_update][subdir] = "contrib"
projects[jquery_update][version] = "1.1"

projects[link][subdir] = "contrib"
projects[link][version] = "2.9"

projects[mollom][subdir] = "contrib"
projects[mollom][version] = "1.13"

projects[node_export][subdir] = "contrib"
projects[node_export][version] = "2.21"

projects[nodequeue][subdir] = "contrib"
projects[nodequeue][version] = "2.9"

projects[nodewords][subdir] = "contrib"
projects[nodewords][version] = "1.12-beta9"

projects[page_title][subdir] = "contrib"
projects[page_title][version] = "2.3"

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.7"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.3"

projects[path_redirect][subdir] = "contrib"
projects[path_redirect][version] = "1.0-beta6"

projects[rules][subdir] = "contrib"
projects[rules][version] = "1.2"

projects[scheduler][subdir] = "contrib"
projects[scheduler][version] = "1.7"

projects[search404][subdir] = "contrib"
projects[search404][version] = "1.9"

projects[token][subdir] = "contrib"
projects[token][version] = "1.13"

projects[vertical_tabs][subdir] = "contrib"
projects[vertical_tabs][version] = "1.0-rc1"

projects[views][subdir] = "contrib"
projects[views][version] = "2.11"

projects[views_slideshow][subdir] = "contrib"
projects[views_slideshow][version] = "2.3"

projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][version] = "2.1"

projects[xmlsitemap][subdir] = "contrib"
projects[xmlsitemap][version] = "2.0-beta1"

; Development Modules

projects[devel][subdir] = "development"
projects[devel][version] = "1.22"

projects[coder][subdir] = "development"
projects[coder][version] = "2.0-beta1"

projects[simpletest][subdir] = "development"
projects[simpletest][version] = "2.10"

; Features

projects[mm_rotator][type] = "module"
projects[mm_rotator][download][type] = "git"
projects[mm_rotator][download][url] = "git://github.com/davidtrainer/mm_rotator.git"
projects[mm_rotator][download][branch] = "master"
projects[mm_rotator][subdir] = "cm_features"

; Themes

projects[tao][location] = "http://code.developmentseed.org/fserver"
projects[tao][version] = "3.1"

projects[rubik][location] = "http://code.developmentseed.org/fserver"
projects[rubik][version] = "3.0-beta1"

projects[zen][type] = "theme"
projects[zen][version] = "2.0"

projects[cm_theme][type] = "theme"
projects[cm_theme][download][type] = "git"
projects[cm_theme][download][url] = "git://github.com/davidtrainer/cm_theme.git"
projects[cm_theme][download][branch] = "master"

; Libraries

; CKEditor
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.4/ckeditor_3.4.tar.gz"
libraries[ckeditor][directory_name] = "ckeditor"

; jQuery UI
libraries[jquery_ui][download][type] = "get"
libraries[jquery_ui][download][url] = "http://jquery-ui.googlecode.com/files/jquery-ui-1.7.3.zip"
libraries[jquery_ui][directory_name] = "jquery.ui"
libraries[jquery_ui][destination] = "modules/contrib/jquery_ui"

; Patches

projects[zen][patch][] = "http://drupal.org/files/issues/634552-63-context-conflict.patch"
