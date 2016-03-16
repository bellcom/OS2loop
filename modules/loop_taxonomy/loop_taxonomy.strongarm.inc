<?php
/**
 * @file
 * loop_taxonomy.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function loop_taxonomy_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'page_manager_term_view_disabled';
  $strongarm->value = FALSE;
  $export['page_manager_term_view_disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_keyword_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_keyword_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_profession_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_profession_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_subject_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_subject_pattern'] = $strongarm;

  return $export;
}
