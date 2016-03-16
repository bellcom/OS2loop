<?php
/**
 * @file
 * loop_wiki.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function loop_wiki_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-loop-primary-menu_dokumentation:dokumentation.
  $menu_links['menu-loop-primary-menu_dokumentation:dokumentation'] = array(
    'menu_name' => 'menu-loop-primary-menu',
    'link_path' => 'dokumentation',
    'router_path' => 'dokumentation',
    'link_title' => 'Dokumentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-loop-primary-menu_dokumentation:dokumentation',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => 0,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Dokumentation');

  return $menu_links;
}
