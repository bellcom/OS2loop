<?php
/**
 * @file
 * loop_wiki.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function loop_wiki_taxonomy_default_vocabularies() {
  return array(
    'guidance_categories' => array(
      'name' => 'Guidance categories',
      'machine_name' => 'guidance_categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
