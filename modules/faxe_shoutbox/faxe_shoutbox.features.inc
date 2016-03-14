<?php
/**
 * @file
 * faxe_shoutbox.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function faxe_shoutbox_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
