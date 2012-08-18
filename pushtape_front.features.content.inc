<?php
/**
 * @file
 * pushtape_front.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function pushtape_front_content_defaults() {
  $content = array();

  $content['frontpage'] = (object) array(
    'exported_path' => 'front',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/frontpage',
      'router_path' => 'node/%',
      'link_title' => 'Front',
      'options' => array(),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '0',
      'identifier' => 'main-menu:node-name/frontpage',
    ),
    'title' => 'Front',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1345308701',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'frontpage',
    'body' => array(),
  );

return $content;
}
