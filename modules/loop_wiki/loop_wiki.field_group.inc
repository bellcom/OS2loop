<?php
/**
 * @file
 * loop_wiki.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function loop_wiki_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_1|field_collection_item|field_guide|default';
  $field_group->group_name = 'group_column_1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_guide';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Kolonne',
    'weight' => '6',
    'children' => array(
      0 => 'field_action',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kolonne',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-column-1 field-group-div guide-column-1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_column_1|field_collection_item|field_guide|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_1|field_collection_item|field_guide|form';
  $field_group->group_name = 'group_column_1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Column',
    'weight' => '8',
    'children' => array(
      0 => 'field_perform',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Column',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-column-1 field-group-div guide-column-2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_column_1|field_collection_item|field_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_2|field_collection_item|field_guide|default';
  $field_group->group_name = 'group_column_2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_guide';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Kolonne',
    'weight' => '7',
    'children' => array(
      0 => 'field_perform',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kolonne',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-column-2 field-group-div guide-column-2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_column_2|field_collection_item|field_guide|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_2|field_collection_item|field_guide|form';
  $field_group->group_name = 'group_column_2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Kolonne',
    'weight' => '9',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kolonne',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-column-2 field-group-div guide-column-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_column_2|field_collection_item|field_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_3|field_collection_item|field_guide|default';
  $field_group->group_name = 'group_column_3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_guide';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Kolonne',
    'weight' => '8',
    'children' => array(
      0 => 'field_image',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kolonne',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-column-3 field-group-div guide-column-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_column_3|field_collection_item|field_guide|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_column_3|field_collection_item|field_guide|form';
  $field_group->group_name = 'group_column_3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Kolonne',
    'weight' => '7',
    'children' => array(
      0 => 'field_action',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Kolonne',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-column-3 field-group-div guide-column-1',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_column_3|field_collection_item|field_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_guide|node|loop_wiki|form';
  $field_group->group_name = 'group_guide';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'loop_wiki';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Vejledning',
    'weight' => '47',
    'children' => array(
      0 => 'field_guide',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-guide field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_guide|node|loop_wiki|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|loop_wiki|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'loop_wiki';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '49',
    'children' => array(
      0 => 'field_files',
      1 => 'field_image',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_media|node|loop_wiki|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sections|node|loop_wiki|form';
  $field_group->group_name = 'group_sections';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'loop_wiki';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Afsnit',
    'weight' => '48',
    'children' => array(
      0 => 'field_sections',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-sections field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_sections|node|loop_wiki|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_setup|node|loop_wiki|form';
  $field_group->group_name = 'group_setup';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'loop_wiki';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Setup',
    'weight' => '44',
    'children' => array(
      0 => 'field_guidance_category',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-setup field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_setup|node|loop_wiki|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text|node|loop_wiki|form';
  $field_group->group_name = 'group_text';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'loop_wiki';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_wrapper';
  $field_group->data = array(
    'label' => 'Tekst',
    'weight' => '46',
    'children' => array(
      0 => 'body',
      1 => 'field_intro',
      2 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-text field-group-htab',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $export['group_text|node|loop_wiki|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|field_collection_item|field_guide|default';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_guide';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'group_column_1',
      1 => 'group_column_2',
      2 => 'group_column_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper field-group-div guide-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper|field_collection_item|field_guide|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|field_collection_item|field_guide|form';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_guide';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '0',
    'children' => array(
      0 => 'group_column_1',
      1 => 'group_column_2',
      2 => 'group_column_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Wrapper',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-wrapper field-group-div row guide-container',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_wrapper|field_collection_item|field_guide|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper|node|loop_wiki|form';
  $field_group->group_name = 'group_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'loop_wiki';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Wrapper',
    'weight' => '3',
    'children' => array(
      0 => 'group_guide',
      1 => 'group_media',
      2 => 'group_sections',
      3 => 'group_text',
      4 => 'group_setup',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-wrapper field-group-htabs',
      ),
    ),
  );
  $export['group_wrapper|node|loop_wiki|form'] = $field_group;

  return $export;
}
