<?php
/**
 * @file
 * loop_news.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function loop_news_taxonomy_default_vocabularies() {
  return array(
    'news_types' => array(
      'name' => 'News types',
      'machine_name' => 'news_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
