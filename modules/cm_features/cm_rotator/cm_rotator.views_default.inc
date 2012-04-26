<?php
/**
 * @file
 * cm_rotator.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cm_rotator_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'rotator';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Rotator';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_rotator_image' => 0,
    'title' => 0,
    'field_rotator_link' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['type'] = 'views_slideshow_pager_fields';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['views_slideshow_pager_fields_fields'] = array(
    'field_rotator_image' => 0,
    'title' => 0,
    'field_rotator_link' => 0,
    'body' => 0,
  );
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['enable'] = 1;
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'rotator' => 'rotator',
  );
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_rotator_image']['id'] = 'field_rotator_image';
  $handler->display->display_options['fields']['field_rotator_image']['table'] = 'field_data_field_rotator_image';
  $handler->display->display_options['fields']['field_rotator_image']['field'] = 'field_rotator_image';
  $handler->display->display_options['fields']['field_rotator_image']['label'] = '';
  $handler->display->display_options['fields']['field_rotator_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotator_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rotator_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_rotator_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_rotator_link']['id'] = 'field_rotator_link';
  $handler->display->display_options['fields']['field_rotator_link']['table'] = 'field_data_field_rotator_link';
  $handler->display->display_options['fields']['field_rotator_link']['field'] = 'field_rotator_link';
  $handler->display->display_options['fields']['field_rotator_link']['label'] = '';
  $handler->display->display_options['fields']['field_rotator_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotator_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_rotator_link']['type'] = 'plain';
  $handler->display->display_options['fields']['field_rotator_link']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="rotator-transparency"></div>
<div class="rotator-content">
<h2><a href="[field_rotator_link]">[title]</a></h2>
[body-value]
</div>
';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'rotator_item' => 'rotator_item',
  );

  /* Display: 700x400 Rotator Block */
  $handler = $view->new_display('block', '700x400 Rotator Block', 'block');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'rotator-700x400';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_rotator_image']['id'] = 'field_rotator_image';
  $handler->display->display_options['fields']['field_rotator_image']['table'] = 'field_data_field_rotator_image';
  $handler->display->display_options['fields']['field_rotator_image']['field'] = 'field_rotator_image';
  $handler->display->display_options['fields']['field_rotator_image']['label'] = '';
  $handler->display->display_options['fields']['field_rotator_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotator_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rotator_image']['settings'] = array(
    'image_style' => 'rotator_700x400',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_rotator_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_rotator_link']['id'] = 'field_rotator_link';
  $handler->display->display_options['fields']['field_rotator_link']['table'] = 'field_data_field_rotator_link';
  $handler->display->display_options['fields']['field_rotator_link']['field'] = 'field_rotator_link';
  $handler->display->display_options['fields']['field_rotator_link']['label'] = '';
  $handler->display->display_options['fields']['field_rotator_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotator_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_rotator_link']['type'] = 'plain';
  $handler->display->display_options['fields']['field_rotator_link']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="rotator-transparency"></div>
<div class="rotator-content">
<h2><a href="[field_rotator_link]">[title]</a></h2>
<p>[body-value]</p>
</div>
';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;

  /* Display: 960x400 Rotator Block */
  $handler = $view->new_display('block', '960x400 Rotator Block', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'rotator-960x400';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_rotator_image']['id'] = 'field_rotator_image';
  $handler->display->display_options['fields']['field_rotator_image']['table'] = 'field_data_field_rotator_image';
  $handler->display->display_options['fields']['field_rotator_image']['field'] = 'field_rotator_image';
  $handler->display->display_options['fields']['field_rotator_image']['label'] = '';
  $handler->display->display_options['fields']['field_rotator_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotator_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rotator_image']['settings'] = array(
    'image_style' => 'rotator_960x400',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_rotator_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_rotator_link']['id'] = 'field_rotator_link';
  $handler->display->display_options['fields']['field_rotator_link']['table'] = 'field_data_field_rotator_link';
  $handler->display->display_options['fields']['field_rotator_link']['field'] = 'field_rotator_link';
  $handler->display->display_options['fields']['field_rotator_link']['label'] = '';
  $handler->display->display_options['fields']['field_rotator_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotator_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_rotator_link']['type'] = 'plain';
  $handler->display->display_options['fields']['field_rotator_link']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="rotator-transparency"></div>
<div class="rotator-content">
<h2><a href="[field_rotator_link]">[title]</a></h2>
<p>[body-value]</p>
</div>
';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;

  /* Display: 1000x495 Rotator Block */
  $handler = $view->new_display('block', '1000x495 Rotator Block', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'rotator-1000x495';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_rotator_image']['id'] = 'field_rotator_image';
  $handler->display->display_options['fields']['field_rotator_image']['table'] = 'field_data_field_rotator_image';
  $handler->display->display_options['fields']['field_rotator_image']['field'] = 'field_rotator_image';
  $handler->display->display_options['fields']['field_rotator_image']['label'] = '';
  $handler->display->display_options['fields']['field_rotator_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotator_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rotator_image']['settings'] = array(
    'image_style' => 'rotator_1000x495',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_rotator_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_rotator_link']['id'] = 'field_rotator_link';
  $handler->display->display_options['fields']['field_rotator_link']['table'] = 'field_data_field_rotator_link';
  $handler->display->display_options['fields']['field_rotator_link']['field'] = 'field_rotator_link';
  $handler->display->display_options['fields']['field_rotator_link']['label'] = '';
  $handler->display->display_options['fields']['field_rotator_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotator_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_rotator_link']['type'] = 'plain';
  $handler->display->display_options['fields']['field_rotator_link']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="rotator-transparency"></div>
<div class="rotator-content">
<h2><a href="[field_rotator_link]">[title]</a></h2>
<p>[body-value]</p>
</div>
';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;

  /* Display: 1200x595 Rotator Block */
  $handler = $view->new_display('block', '1200x595 Rotator Block', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'rotator-1200x595';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_rotator_image']['id'] = 'field_rotator_image';
  $handler->display->display_options['fields']['field_rotator_image']['table'] = 'field_data_field_rotator_image';
  $handler->display->display_options['fields']['field_rotator_image']['field'] = 'field_rotator_image';
  $handler->display->display_options['fields']['field_rotator_image']['label'] = '';
  $handler->display->display_options['fields']['field_rotator_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotator_image']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_rotator_image']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_rotator_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rotator_image']['settings'] = array(
    'image_style' => 'rotator_1200x595',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_rotator_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_rotator_link']['id'] = 'field_rotator_link';
  $handler->display->display_options['fields']['field_rotator_link']['table'] = 'field_data_field_rotator_link';
  $handler->display->display_options['fields']['field_rotator_link']['field'] = 'field_rotator_link';
  $handler->display->display_options['fields']['field_rotator_link']['label'] = '';
  $handler->display->display_options['fields']['field_rotator_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_rotator_link']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_rotator_link']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_rotator_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_rotator_link']['type'] = 'plain';
  $handler->display->display_options['fields']['field_rotator_link']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="rotator-transparency"></div>
<div class="rotator-content">
<h2><a href="[field_rotator_link]">[title]</a></h2>
<p>[body-value]</p>
</div>
';
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  $export['rotator'] = $view;

  return $export;
}
