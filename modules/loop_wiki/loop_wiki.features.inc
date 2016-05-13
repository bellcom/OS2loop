<?php
/**
 * @file
 * loop_wiki.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function loop_wiki_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function loop_wiki_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function loop_wiki_node_info() {
  $items = array(
    'loop_wiki' => array(
      'name' => t('Dokumentation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Overskrift'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
