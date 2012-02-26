<?php

/**
 * Implements hook_form_FORM_ID_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function cm_form_install_configure_form_alter(&$form, $form_state) {
  // Pre-populate the site name with the server name.
  $form['site_information']['site_name']['#default_value'] = $_SERVER['SERVER_NAME'];
}

function cm_install_tasks() {
  return array(
    'cm_initialize_content_types' => array(
      'display_name' => st('Initialize Content Types'),
      'type' => 'normal',
    ),
    'cm_initialize_taxonomy_terms' => array(
      'display_name' => st('Initialize Taxonomy Terms'),
      'type' => 'normal',
    ),
    'cm_initialize_themes' => array(
      'display_name' => st('Initialize Themes'),
      'type' => 'normal',
    ),
    'cm_finish' => array(
      'display_name' => st('Apply Configuration'),
      'display' => TRUE,
      'type' => 'batch',
    ),
  );
}

/**
 * Initialize default content types.
 */
function cm_initialize_content_types() {
  node_type_delete('page');
}

/**
 * Initialize default taxonomy terms.
 */
function cm_initialize_taxonomy_terms() {
  // _cm_create_taxonomy_term($vid, $name, $tid)

  _cm_create_taxonomy_term(1, 'Sample Content', 1);
  _cm_create_taxonomy_term(1, 'Documentation', 2);
  _cm_create_taxonomy_term(1, 'Getting Started', 3);
  _cm_create_taxonomy_term(1, 'Customization', 4);
}

/**
 * Initialize default theme and admin theme.
 */
function cm_initialize_themes() {
  // Set the default and admin themes
  variable_set("theme_default", "cm_theme");
  //variable_set("admin_theme", "rubik");
  variable_set("node_admin_theme", '1');
  theme_enable(array("cm_theme"));
}

/**
 * Perform tasks after all modules have been enabled.
 */
function cm_finish() {
  module_list(TRUE);
  drupal_flush_all_caches();
  return array();
}

function _cm_create_taxonomy_term($vid, $name, $tid) {
  $term = new stdClass();
  $term->name = $name;
  $term->vid = $vid;
  taxonomy_term_save($term);
  return $term->tid;
}


