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
    'exported_path' => 'front-content',
    'link' => array(
      'menu_name' => 'main-menu',
      'link_path' => 'node-name/frontpage',
      'router_path' => 'node/%',
      'link_title' => 'Home',
      'options' => array(),
      'module' => 'menu',
      'hidden' => '0',
      'external' => '0',
      'has_children' => '0',
      'expanded' => '0',
      'weight' => '0',
      'identifier' => 'main-menu:node-name/frontpage',
    ),
    'title' => 'Front content',
    'status' => '1',
    'promote' => '1',
    'sticky' => '1',
    'type' => 'page',
    'language' => 'und',
    'created' => '1345308701',
    'comment' => '1',
    'translate' => '0',
    'machine_name' => 'frontpage',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Check this out. You made it
this is great,
remove this message?',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Check this out. You made it<br />
this is great,<br />
remove this message?</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
