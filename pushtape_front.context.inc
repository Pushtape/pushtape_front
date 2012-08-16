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
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-releases-block_1' => array(
          'module' => 'views',
          'delta' => 'releases-block_1',
          'region' => 'postscript_first',
          'weight' => '0',
        ),
        'delta_blocks-logo' => array(
          'module' => 'delta_blocks',
          'delta' => 'logo',
          'region' => 'postscript_second',
          'weight' => '0',
        ),
        'views-pushtape_player-block_1' => array(
          'module' => 'views',
          'delta' => 'pushtape_player-block_1',
          'region' => 'postscript_third',
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
