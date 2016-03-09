<?php
/**
 * @file
 * news_feed.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function news_feed_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'news_import';
  $feeds_importer->config = array(
    'name' => 'News - import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
        'auto_scheme' => 'http://www.faxekommune.dk/rss.xml',
        'accept_invalid_cert' => 1,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'description',
            'target' => 'body:summary',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Blank source 1',
            'target' => 'field_news_type',
            'term_search' => '1',
            'autocreate' => 0,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'url',
            'target' => 'field_origin_url:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'title',
            'target' => 'field_origin_url:title',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'news',
        'language' => 'da',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['news_import'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'news_intranet_import';
  $feeds_importer->config = array(
    'name' => 'News - intranet - import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => 0,
        'use_pubsubhubbub' => 0,
        'designated_hub' => '',
        'request_timeout' => '',
        'auto_scheme' => 'https://intrax2.faxekommune.dk/rss.xml',
        'accept_invalid_cert' => 1,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'description',
            'target' => 'body:summary',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'timestamp',
            'target' => 'created',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Blank source 1',
            'target' => 'field_news_type',
            'term_search' => '1',
            'autocreate' => 0,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'url',
            'target' => 'field_origin_url:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'guid',
            'target' => 'guid',
            'unique' => 1,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'title',
            'target' => 'field_origin_url:title',
            'unique' => FALSE,
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'news',
        'language' => 'da',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['news_intranet_import'] = $feeds_importer;

  return $export;
}
