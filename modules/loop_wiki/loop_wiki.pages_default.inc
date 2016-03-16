<?php
/**
 * @file
 * loop_wiki.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function loop_wiki_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_3da3358a-7881-4816-af51-111c7169743f';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Guidance category',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'guidance_categories' => 'guidance_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'default';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'alpha' => NULL,
      'beta' => NULL,
      'gamma' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Alle IT-vejledninger';
  $display->uuid = '5636937a-971a-4091-8835-d681dd4d3781';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f949eecb-1134-4d25-8c87-a677c7d9b6c2';
    $pane->panel = 'alpha';
    $pane->type = 'views_panes';
    $pane->subtype = 'loop_wiki-list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '20',
      'arguments' => array(
        'field_guidance_category_tid' => '%term:tid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Alle IT-vejledninger i kategorien "%term:name"',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f949eecb-1134-4d25-8c87-a677c7d9b6c2';
    $display->content['new-f949eecb-1134-4d25-8c87-a677c7d9b6c2'] = $pane;
    $display->panels['alpha'][0] = 'new-f949eecb-1134-4d25-8c87-a677c7d9b6c2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_3da3358a-7881-4816-af51-111c7169743f'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function loop_wiki_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dokumentation';
  $page->task = 'page';
  $page->admin_title = 'Dokumentation';
  $page->admin_description = '';
  $page->path = 'dokumentation';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Dokumentation',
    'name' => 'menu-loop-primary-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dokumentation__panel';
  $handler->task = 'page';
  $handler->subtask = 'dokumentation';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Dokumentation',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'default';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'alpha' => NULL,
      'beta' => NULL,
      'gamma' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Alle kategorier';
  $display->uuid = 'fe5dc414-5b2a-4703-a323-5b055d7fae02';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-6b33ce76-8a2c-40a9-af2c-23b7f37e97c8';
    $pane->panel = 'alpha';
    $pane->type = 'views_panes';
    $pane->subtype = 'guidance_categories-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '20',
      'override_title' => 1,
      'override_title_text' => 'Alle kategorier',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6b33ce76-8a2c-40a9-af2c-23b7f37e97c8';
    $display->content['new-6b33ce76-8a2c-40a9-af2c-23b7f37e97c8'] = $pane;
    $display->panels['alpha'][0] = 'new-6b33ce76-8a2c-40a9-af2c-23b7f37e97c8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6b33ce76-8a2c-40a9-af2c-23b7f37e97c8';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dokumentation'] = $page;

  return $pages;

}
