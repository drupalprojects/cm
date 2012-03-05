api = 2
core = "7.x"

projects[drupal][type] = "core"
projects[drupal][version] = "7.12"

; http://drupal.org/node/1220602
; projects[drupal][patches][] = "http://drupal.org/files/issues/forum_upgrade.patch"

; Contrib Projects

projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc1"

projects[advanced_help][subdir] = "contrib"
projects[advanced_help][version] = "1.0"

projects[auto_nodetitle][subdir] = "contrib"
projects[auto_nodetitle][version] = "1.0"

projects[backup_migrate][subdir] = "contrib"
projects[backup_migrate][version] = "2.1"

projects[calendar][subdir] = "contrib"
projects[calendar][version] = "3.0"

projects[cck][subdir] = "contrib"
projects[cck][version] = "2.x-dev"

projects[colorbox][subdir] = "contrib"
projects[colorbox][version] = "1.2"

projects[context][subdir] = "contrib"
projects[context][version] = "3.0-beta2"

projects[cpn][subdir] = "contrib"
projects[cpn][version] = "1.4"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.0-beta1"

projects[date][subdir] = "contrib"
projects[date][version] = "2.2"

projects[defaultcontent][subdir] = "contrib"
projects[defaultcontent][version] = "1.0-alpha4"

projects[diff][subdir] = "contrib"
projects[diff][version] = "2.0-beta2"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.0-beta8"

projects[fbconnect][subdir] = "contrib"
projects[fbconnect][download][type] = "git"
projects[fbconnect][download][revision] = "7c1d439e717d7219b4907796781be76775b5ad82"

projects[features][subdir] = "contrib"
projects[features][version] = "1.0-beta6"

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.0"

projects[file_entity][subdir] = "contrib"
projects[file_entity][version] = "2.0-unstable2"

projects[filefield_sources][subdir] = "contrib"
projects[filefield_sources][version] = "1.4"

projects[globalredirect][subdir] = "contrib"
projects[globalredirect][version] = "1.3"

projects[google_analytics][subdir] = "contrib"
projects[google_analytics][version] = "1.2"

projects[imce][subdir] = "contrib"
projects[imce][version] = "1.5"

projects[imce_wysiwyg][subdir] = "contrib"
projects[imce_wysiwyg][version] = "1.0"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "2.0-alpha2"

projects[link][subdir] = "contrib"
projects[link][version] = "1.0-alpha3"

; Waiting for a stable release of location
;projects[location][subdir] = "contrib"
;projects[location][version] = "3.x-dev"

projects[logintoboggan][subdir] = "contrib"
projects[logintoboggan][version] = "1.2"

projects[media][subdir] = "contrib"
projects[media][version] = "2.0-unstable3"

projects[media_browser_plus][subdir] = "contrib"
projects[media_browser_plus][version] = "1.0-beta3"

projects[media_gallery][subdir] = "contrib"
projects[media_gallery][version] = "1.0-beta7"

projects[metatag][subdir] = "contrib"
projects[metatag][version] = "1.0-alpha4"

projects[mollom][subdir] = "contrib"
projects[mollom][version] = "1.0"

projects[nodeblock][subdir] = "contrib"
projects[nodeblock][version] = "1.0"

projects[nodequeue][subdir] = "contrib"
projects[nodequeue][version] = "2.0-beta1"

projects[nice_menus][subdir] = "contrib"
projects[nice_menus][version] = "2.0"

;projects[opencalais][type] = "module"
;projects[opencalais][download][type] = "git"
;projects[opencalais][download][url] = "https://github.com/phase2/opencalais.git"
;projects[opencalais][download][branch] = "experimental"
;projects[opencalais][subdir] = "contrib"

projects[page_title][subdir] = "contrib"
projects[page_title][version] = "2.5"

projects[panelizer][subdir] = "contrib"
projects[panelizer][version] = "2.0-rc1"

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.0"

projects[pathauto][subdir] = "contrib"
projects[pathauto][version] = "1.0-beta1"

projects[plupload][subdir] = "contrib"
projects[plupload][version] = "1.0-beta3"

projects[redirect][subdir] = "contrib"
projects[redirect][version] = "1.0-beta3"

projects[references][subdir] = "contrib"
projects[references][version] = "2.0-beta3"

projects[rules][subdir] = "contrib"
projects[rules][version] = "2.0-beta1"

projects[scheduler][subdir] = "contrib"
projects[scheduler][version] = "1.0"

projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = "2.0-beta2"

projects[styles][subdir] = "contrib"
projects[styles][version] = "2.0-alpha8"

projects[token][subdir] = "contrib"
projects[token][version] = "1.0-beta2"

projects[transliteration][subdir] = "contrib"
projects[transliteration][version] = "3.0-alpha1"

projects[twitter_pull][subdir] = "contrib"
projects[twitter_pull][version] = "1.0-rc1"

projects[views][subdir] = "contrib"
projects[views][version] = "3.3"

projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][version] = "3.0-beta3"

projects[views_slideshow][subdir] = "contrib"
projects[views_slideshow][version] = "3.0"

projects[webform][subdir] = "contrib"
projects[webform][version] = "3.15"

projects[wysiwyg][subdir] = "contrib"
projects[wysiwyg][version] = "2.1"

projects[xmlsitemap][subdir] = "contrib"
projects[xmlsitemap][version] = "2.0-beta2"

projects[zenophile][subdir] = "contrib"
projects[zenophile][version] = "1.0"

; Development Modules

projects[devel][subdir] = "contrib"
projects[devel][version] = "1.0"

; Features

projects[mm_defaults][type] = "module"
projects[mm_defaults][download][type] = "git"
projects[mm_defaults][download][url] = "git://github.com/minimalmedia/mm_defaults.git"
projects[mm_defaults][download][branch] = "7.x-dev"
projects[mm_defaults][subdir] = "cm_features"

projects[mm_events_calendar][type] = "module"
projects[mm_events_calendar][download][type] = "git"
projects[mm_events_calendar][download][url] = "git://github.com/minimalmedia/mm_events_calendar.git"
projects[mm_events_calendar][download][branch] = "7.x-dev"
projects[mm_events_calendar][subdir] = "cm_features"

projects[mm_image][type] = "module"
projects[mm_image][download][type] = "git"
projects[mm_image][download][url] = "git://github.com/minimalmedia/mm_image.git"
projects[mm_image][download][branch] = "7.x-dev"
projects[mm_image][subdir] = "cm_features"

projects[mm_rotator][type] = "module"
projects[mm_rotator][download][type] = "git"
projects[mm_rotator][download][url] = "git://github.com/minimalmedia/mm_rotator.git"
projects[mm_rotator][download][branch] = "7.x-dev"
projects[mm_rotator][subdir] = "cm_features"

; Themes

projects[tao][type] = "theme"
projects[tao][version] = "3.0-beta3"

projects[rubik][type] = "theme"
projects[rubik][version] = "4.0-beta5"

projects[zen][type] = "theme"
projects[zen][version] = "3.1"

projects[cm_theme][type] = "theme"
projects[cm_theme][download][type] = "git"
projects[cm_theme][download][url] = "git://github.com/minimalmedia/cm_theme.git"
projects[cm_theme][download][branch] = "7.x-dev"

; Libraries

; ARC2 Library required by RDF 
;libraries[arc][download][type] = get
;libraries[arc][download][url] = http://code.semsol.org/source/arc.tar.gz
;libraries[arc][destination] = modules/rdf/vendor
;libraries[arc][directory_name] = arc

; CKEditor

libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%203.5/ckeditor_3.5.tar.gz"
libraries[ckeditor][destination] = "libraries"
libraries[ckeditor][directory_name] = "ckeditor"

; Colorbox

libraries[colorbox][download][type] = "get"
libraries[colorbox][download][url] = "http://jacklmoore.com/colorbox/colorbox.zip"
libraries[colorbox][destination] = "libraries"
libraries[colorbox][directory_name] = "colorbox"

; Cycle Plugin

libraries[cycle][download][type] = "get"
libraries[cycle][download][url] = "https://raw.github.com/malsup/cycle/8704578d7364ef0f24fe4927215a32a20b7eb11c/jquery.cycle.all.js"
libraries[cycle][destination] = "libraries"
libraries[cycle][directory_name] = "jquery.cycle"

; Facebook PHP SDK
libraries[facebook-php-sdk][download][type] = "get"
libraries[facebook-php-sdk][download][url] = "https://github.com/facebook/facebook-php-sdk/tarball/v3.1.1"
libraries[facebook-php-sdk][destination] = "libraries"
libraries[facebook-php-sdk][directory_name] = "facebook-php-sdk"

; Patches

; Exportable WYSIWYG Profiles
projects[wysiwyg][patch][] = "http://drupal.org/files/0001-feature.inc-from-624018-211.patch"

; Fbconnect: Cannot detect Facebook PHP SDK: http://drupal.org/node/1318946
projects[fbconnect][patch][] = "http://drupal.org/files/facebook-library-not-found-1318946-27.patch"

; Fbconnect: Undefined index: email in fbconnect_register_page() http://drupal.org/node/1324150
projects[fbconnect][patch][] = "http://drupal.org/files/fbconnect-register_require_email-1324150-8.patch"


