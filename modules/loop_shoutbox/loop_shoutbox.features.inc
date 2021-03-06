<?php
/**
 * @file
 * loop_shoutbox.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function loop_shoutbox_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function loop_shoutbox_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function loop_shoutbox_node_info() {
  $items = array(
    'shoutbox' => array(
      'name' => t('Shoutbox'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Headline'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
