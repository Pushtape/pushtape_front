<?php
/**
 * @file
 * pushtape_front.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pushtape_front_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'frontpage';
  $context->description = '';
  $context->tag = 'pushtape';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
        'front' => 'front',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'delta_blocks-branding' => array(
          'module' => 'delta_blocks',
          'delta' => 'branding',
          'region' => 'branding',
          'weight' => '-10',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'menu',
          'weight' => '-10',
        ),
        'views-releases-block_1' => array(
          'module' => 'views',
          'delta' => 'releases-block_1',
          'region' => 'sidebar_first',
          'weight' => '0',
        ),
        'views-pushtape_events-block_1' => array(
          'module' => 'views',
          'delta' => 'pushtape_events-block_1',
          'region' => 'sidebar_second',
          'weight' => '0',
        ),
        'delta_blocks-logo' => array(
          'module' => 'delta_blocks',
          'delta' => 'logo',
          'region' => 'postscript_second',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pushtape');
  $export['frontpage'] = $context;

  return $export;
}
