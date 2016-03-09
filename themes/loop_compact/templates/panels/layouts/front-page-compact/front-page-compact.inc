<?php
/**
 * @file
 * Implementation of hook_panels_layouts().
 */

$plugin = array(
  'title' => t('Frontpage compact'),
  'category' => t('Loop custom'),
  'icon' => 'default.png',
  'theme' => 'default',
  'regions' => array(
    'alpha' => t('Alpha'),
    'alpha-1' => t('Alpha 1'),
    'alpha-2' => t('Alpha 2'),
    'alpha-3' => t('Alpha 3'),
    'beta' => t('Beta'),
  ),
);
