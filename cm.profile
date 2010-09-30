<?php

/**
* Return an array of the modules to be enabled when this profile is installed.
*
* @return
*  An array of modules to be enabled.
*/
function cm_profile_modules() {
  return array(
    // Enable required core modules first.
    'block', 'filter', 'node', 'system', 'user',

    // Enable optional core modules next.
    'dblog', 'menu', 'path', 'taxonomy',

    // Then, enable any contributed modules here.
    'admin',
    'admin_menu',
    'adminrole',
    'advanced_help',
    'auto_nodetitle',
    'backup_migrate',

    // cck
    'content',
    'content_copy',
    'nodereference',
    'number',
    'optionwidgets',
    'text',
    'userreference',
    
    // context
    'context',
    'context_contrib',
    'context_ui',

    // ctools
    'bulk_export',
    'ctools',

    'diff',
    'features',
    'filefield',
    'globalredirect',
    'googleanalytics',
    'imageapi',
    'imageapi_gd',
    'imagecache',
    'imagefield',
    'install_profile_api',
    'mollom',

    // nodewords
    'nodewords',
    'nodewords_admin',
    'nodewords_ui',
    'nodewords_basic',
    'nodewords_extra',
    'nodewords_tokens',

    'page_title',
  
    // panels
    'panels',
    'panels_mini',
    'panels_node',

    //'path_redirect', causing problems
    'pathauto',
  
    //rules
    'rules_admin',
    'rules',
    'rules_forms',
    'rules_scheduler',

    'scheduler',
    'search404',
    'token',
    'token_actions',
    'vertical_tabs',

    // views
    'views',
    'views_export',
    'views_slideshow',
    'views_slideshow_singleframe',
    'views_ui',

    'wysiwyg',

    // xmlsitemap
    'xmlsitemap',
    'xmlsitemap_custom',
    'xmlsitemap_engines',
    'xmlsitemap_menu',
    'xmlsitemap_node',
    'xmlsitemap_taxonomy',
  );
}

/**
* Return a description of the profile for the initial installation screen.
*
* @return
*   An array with keys 'name' and 'description' describing this profile.
*/
function cm_profile_details() {
  return array(
    'name' => 'Cm',
    'description' => 'A content management system customized by Minimal Media.',
  );
}

/**
 * Implementation of hook_profile_tasks().
 */
function cm_profile_tasks(&$task, $url) {
  // Enable the Install Profile API.
  install_include(cm_profile_modules());

  _cm_set_content_types();
  _cm_modify_settings();
/*
  _cm_set_vocabularies();
  _cm_set_views();
  _cm_modify_blocks();
  _cm_set_cck_fields();
  _cm_save_nodes();
  _cm_modify_menus();
  _cm_set_permissions();
*/
}


/**
 * Set the content types for this profile.
 */
function _cm_set_content_types() {
  // Define content types
  $types = array (
    array(
      'type' => 'page',
      'name' => st('Page'),
      'module' => 'node',
      'description' => st('A static page.'),
      'custom' => TRUE,
      'modified' => TRUE,
      'locked' => FALSE,
    ),
  );

  // Save the node types.
  foreach ($types as $type) {
    $type = (object) _node_type_set_defaults($type);
    node_type_save($type);
  }
}


/**
 * Modify the default settings of Drupal and contributed modules.
 */
function _cm_modify_settings() {
  // Basic Drupal settings.
//  variable_set('site_frontpage', 'home');

  // Set the default themes.
  install_default_theme('cm_theme');
  install_admin_theme('rubik');

  // Do not show post info for pages.
  $theme_settings = variable_get('theme_settings', array());
  $theme_settings['toggle_node_info_page'] = FALSE;
  variable_set('theme_settings', $theme_settings);
  
  // Turn off the admin toolbar.
  $admin_toolbar_settings = variable_get('admin_toolbar', array());
  $admin_toolbar_settings['blocks']['admin-menu'] = 0;
  $admin_toolbar_settings['blocks']['admin-create'] = 0;
  variable_set('admin_toolbar', $admin_toolbar_settings);
  
  // Enable CKEditor on content types.
  db_query("INSERT INTO {wysiwyg} (format, editor) " .
    "VALUES (%d, '%s')",
    1, 'ckeditor');
  db_query("INSERT INTO {wysiwyg} (format, editor) " .
    "VALUES (%d, '%s')",
    2, 'ckeditor');
}
