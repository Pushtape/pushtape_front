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

  $content['frontpagecontent'] = (object) array(
    'exported_path' => 'front-content',
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
          'value' => 'Check this out. i stay here!',
          'summary' => '',
          'format' => 'filtered_html',
          'safe_value' => '<p>Check this out. i stay here!</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
