api = 2
core = "7.x"

projects[drupal][type] = "core"

; Contrib Projects

projects[admin_menu][subdir] = "contrib"
projects[admin_menu][version] = "3.0-rc1"

projects[advanced_help][subdir] = "contrib"
projects[advanced_help][version] = "1.0-beta1"

projects[auto_nodetitle][subdir] = "contrib"
projects[auto_nodetitle][version] = "1.0"

projects[context][subdir] = "contrib"
projects[context][version] = "3.0-beta1"

projects[ctools][subdir] = "contrib"
projects[ctools][version] = "1.0-beta1"

projects[diff][subdir] = "contrib"
projects[diff][version] = "2.0-beta2"

projects[entity][subdir] = "contrib"
projects[entity][version] = "1.0-beta8"

projects[features][subdir] = "contrib"
projects[features][version] = "1.0-beta2"

projects[filefield_sources][subdir] = "contrib"
projects[filefield_sources][version] = "1.4"

projects[globalredirect][subdir] = "contrib"
projects[globalredirect][version] = "1.3"

projects[google_analytics][subdir] = "contrib"
projects[google_analytics][version] = "1.2"

projects[link][subdir] = "contrib"
projects[link][version] = "1.0-alpha3"

; Waiting for a stable release of location
;projects[location][subdir] = "contrib"
;projects[location][version] = "3.x-dev"

projects[logintoboggan][subdir] = "contrib"
projects[logintoboggan][version] = "1.2"

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

projects[token][subdir] = "contrib"
projects[token][version] = "1.0-beta2"

projects[transliteration][subdir] = "contrib"
projects[transliteration][version] = "3.0-alpha1"

projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][version] = "3.0-alpha2"

projects[xmlsitemap][subdir] = "contrib"
projects[xmlsitemap][version] = "2.0-beta2"

projects[zenophile][subdir] = "contrib"
projects[zenophile][version] = "1.0"

; Development Modules

projects[devel][subdir] = "contrib"
projects[devel][version] = "1.0"

; Themes

projects[zen][type] = "theme"
projects[zen][version] = "3.1"

; Libraries

; ARC2 Library required by RDF 
;libraries[arc][download][type] = get
;libraries[arc][download][url] = http://code.semsol.org/source/arc.tar.gz
;libraries[arc][destination] = modules/rdf/vendor
;libraries[arc][directory_name] = arc