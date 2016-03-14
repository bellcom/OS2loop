<?php
/**
 * @file
 * faxe_shoutbox.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function faxe_shoutbox_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shoutbox_anonymous_timeout';
  $strongarm->value = '20';
  $export['shoutbox_anonymous_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shoutbox_ascending';
  $strongarm->value = 1;
  $export['shoutbox_ascending'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shoutbox_defaultname';
  $strongarm->value = 1;
  $export['shoutbox_defaultname'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shoutbox_default_message';
  $strongarm->value = 'Indtast besked';
  $export['shoutbox_default_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shoutbox_expire';
  $strongarm->value = '0';
  $export['shoutbox_expire'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shoutbox_max_length';
  $strongarm->value = '150';
  $export['shoutbox_max_length'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shoutbox_profile_name';
  $strongarm->value = 'custom<split>first_name';
  $export['shoutbox_profile_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shoutbox_refresh';
  $strongarm->value = '0';
  $export['shoutbox_refresh'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shoutbox_registered_timeout';
  $strongarm->value = '0';
  $export['shoutbox_registered_timeout'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shoutbox_replace_plural';
  $strongarm->value = 'send';
  $export['shoutbox_replace_plural'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shoutbox_replace_singular';
  $strongarm->value = 'send';
  $export['shoutbox_replace_singular'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shoutbox_restrict_general_shouts';
  $strongarm->value = 1;
  $export['shoutbox_restrict_general_shouts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shoutbox_showamount_block';
  $strongarm->value = '14';
  $export['shoutbox_showamount_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shoutbox_showamount_page';
  $strongarm->value = '30';
  $export['shoutbox_showamount_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shoutbox_submit_type';
  $strongarm->value = 'ajax';
  $export['shoutbox_submit_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shoutbox_time_format';
  $strongarm->value = 'ago';
  $export['shoutbox_time_format'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'shoutbox_widget_type';
  $strongarm->value = 'textfield';
  $export['shoutbox_widget_type'] = $strongarm;

  return $export;
}
