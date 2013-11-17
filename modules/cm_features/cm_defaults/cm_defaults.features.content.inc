<?php
/**
 * @file
 * cm_defaults.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function cm_defaults_content_defaults() {
$content = array();
$content['contact'] = (object)array(
  'exported_path' => 'contact',
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/contact',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'identifier' => 'main-menu:node-name/contact',
  ),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'progressbar_bar' => 0,
    'progressbar_page_number' => 0,
    'progressbar_percent' => 0,
    'progressbar_pagebreak_labels' => 0,
    'progressbar_include_confirmation' => 0,
    'progressbar_label_first' => NULL,
    'progressbar_label_confirmation' => NULL,
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      0 => array(
        'pid' => 0,
        'form_key' => 'your_name',
        'name' => 'Your Name',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 0,
        'page_num' => 1,
      ),
      1 => array(
        'pid' => 0,
        'form_key' => 'your_email_address',
        'name' => 'Your Email Address',
        'type' => 'email',
        'value' => '%useremail',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 1,
        'page_num' => 1,
      ),
      2 => array(
        'pid' => 0,
        'form_key' => 'message',
        'name' => 'Message',
        'type' => 'textarea',
        'value' => '',
        'extra' => array(
          'title_display' => 0,
          'private' => 0,
          'resizable' => 1,
          'disabled' => 0,
          'conditional_operator' => '=',
          'cols' => '',
          'rows' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
          'placeholder' => '',
          'analysis' => FALSE,
        ),
        'required' => 0,
        'weight' => 2,
        'page_num' => 1,
      ),
    ),
    'conditionals' => array(),
  ),
  'title' => 'Contact Us',
  'status' => 1,
  'promote' => 1,
  'sticky' => 0,
  'type' => 'webform',
  'language' => 'und',
  'created' => 1365703464,
  'comment' => 1,
  'translate' => 0,
  'machine_name' => 'contact',
);
return $content;
}