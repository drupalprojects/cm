<?php
/**
 * @file
 * cm_media_gallery.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cm_media_gallery_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function cm_media_gallery_node_info() {
  $items = array(
    'media_gallery' => array(
      'name' => t('Media Gallery'),
      'base' => 'node_content',
      'description' => t('A collection of media assets, presented as a gallery in a lightbox.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
