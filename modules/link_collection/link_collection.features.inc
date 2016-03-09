<?php
/**
 * @file
 * link_collection.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function link_collection_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function link_collection_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function link_collection_node_info() {
  $items = array(
    'link_collection' => array(
      'name' => t('Link collection'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Tekst på link'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
