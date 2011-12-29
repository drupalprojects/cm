api = 2
core = "7.x"

projects[drupal][type] = "core"
projects[drupal][version] = "7.8"

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
projects[calendar][version] = "3.0-alpha1"

projects[cck][subdir] = "contrib"
projects[cck][version] = "2.x-dev"

projects[colorbox][subdir] = "contrib"
projects[colorbox][version] = "1.0-beta4"

projects[context][subdir] = "contrib"
projects[context][version] = "3.0-beta2"

projects[cpn][subdir] = "contrib"
projects[cpn][version] = "1.3"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.0-beta1"

projects[date][subdir] = "contrib"
projects[date][version] = "2.0-alpha3"

projects[defaultcontent][subdir] = "contrib"
projects[defaultcontent][version] = "1.0-alpha4"

projects[diff][subdir] = "contrib"
projects[diff][version] = "2.0-beta2"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.0-beta8"

projects[features][subdir] = "contrib"
projects[features][version] = "1.0-beta2"

projects[field_group][subdir] = "contrib"
projects[field_group][version] = "1.0"

projects[filefield_sources][subdir] = "contrib"
projects[filefield_sources][version] = "1.4"

projects[globalredirect][subdir] = "contrib"
projects[globalredirect][version] = "1.3"

projects[google_analytics][subdir] = "contrib"
projects[google_analytics][version] = "1.2"

projects[libraries][subdir] = "contrib"
projects[libraries][version] = "1.0"

projects[link][subdir] = "contrib"
projects[link][version] = "1.0-alpha3"

; Waiting for a stable release of location
;projects[location][subdir] = "contrib"
;projects[location][version] = "3.x-dev"

projects[logintoboggan][subdir] = "contrib"
projects[logintoboggan][version] = "1.2"

projects[media][subdir] = "contrib"
projects[media][version] = "1.0-rc2"

projects[media_browser_plus][subdir] = "contrib"
projects[media_browser_plus][version] = "1.0-beta2"

projects[media_gallery][subdir] = "contrib"
projects[media_gallery][version] = "1.0-beta5"

projects[metatag][subdir] = "contrib"
projects[metatag][version] = "1.0-alpha4"

projects[mollom][subdir] = "contrib"
projects[mollom][version] = "1.0"

projects[nodeblock][subdir] = "contrib"
projects[nodeblock][version] = "1.0"

;projects[opencalais][type] = "module"
;projects[opencalais][download][type] = "git"
;projects[opencalais][download][url] = "https://github.com/phase2/opencalais.git"
;projects[opencalais][download][branch] = "experimental"
;projects[opencalais][subdir] = "contrib"

projects[page_title][subdir] = "contrib"
projects[page_title][version] = "2.4-beta1"

projects[panels][subdir] = "contrib"
projects[panels][version] = "3.0-alpha3"

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

projects[views][subdir] = "contrib"
projects[views][version] = "3.0-beta3"

projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][version] = "3.0-alpha2"

projects[webform][subdir] = "contrib"
projects[webform][version] = "3.15"

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

; Colorbox
libraries[colorbox][download][type] = "get"
libraries[colorbox][download][url] = "http://jacklmoore.com/colorbox/colorbox.zip"
libraries[colorbox][destination] = "libraries"
libraries[colorbox][directory_name] = "colorbox"
