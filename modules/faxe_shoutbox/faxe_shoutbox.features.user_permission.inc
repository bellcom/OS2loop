<?php
/**
 * @file
 * faxe_shoutbox.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function faxe_shoutbox_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access shoutbox'.
  $permissions['access shoutbox'] = array(
    'name' => 'access shoutbox',
    'roles' => array(),
    'module' => 'shoutbox',
  );

  // Exported permission: 'administer shoutbox'.
  $permissions['administer shoutbox'] = array(
    'name' => 'administer shoutbox',
    'roles' => array(),
    'module' => 'shoutbox',
  );

  // Exported permission: 'delete own shouts'.
  $permissions['delete own shouts'] = array(
    'name' => 'delete own shouts',
    'roles' => array(),
    'module' => 'shoutbox',
  );

  // Exported permission: 'edit own shouts'.
  $permissions['edit own shouts'] = array(
    'name' => 'edit own shouts',
    'roles' => array(),
    'module' => 'shoutbox',
  );

  // Exported permission: 'moderate shoutbox'.
  $permissions['moderate shoutbox'] = array(
    'name' => 'moderate shoutbox',
    'roles' => array(),
    'module' => 'shoutbox',
  );

  // Exported permission: 'post shouts'.
  $permissions['post shouts'] = array(
    'name' => 'post shouts',
    'roles' => array(),
    'module' => 'shoutbox',
  );

  // Exported permission: 'post shouts without approval'.
  $permissions['post shouts without approval'] = array(
    'name' => 'post shouts without approval',
    'roles' => array(),
    'module' => 'shoutbox',
  );

  return $permissions;
}
