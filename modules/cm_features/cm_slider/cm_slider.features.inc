<?php
/**
 * @file
 * cm_slider.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cm_slider_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cm_slider_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0",
      'path' => drupal_get_path('module', 'cm_slider') . '/theme',
      'template path' => drupal_get_path('module', 'cm_slider') . '/theme'
    );
  }
}

/**
 * Implements hook_image_default_styles().
 */
function cm_slider_image_default_styles() {
  $styles = array();

  // Exported image style: cm_slider_image
  $styles['cm_slider_image'] = array(
    'name' => 'cm_slider_image',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '1200',
          'height' => '400',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function cm_slider_node_info() {
  $items = array(
    'cm_slider_item' => array(
      'name' => t('Slider Item'),
      'base' => 'node_content',
      'description' => t('One of a series of items to be displayed in a slider.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
