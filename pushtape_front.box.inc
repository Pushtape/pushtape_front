<?php
/**
 * @file
 * wortepublish_feature.box.inc
 */

/**
 * Implements hook_default_box().
 */
function wortepublish_feature_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'box-261ff775';
  $box->plugin_key = 'simple';
  $box->title = 'About';
  $box->description = 'about w-orte';
  $box->options = array(
    'body' => array(
      'value' => 'w/orte will vernachlässigte oder vergessene Aspekte zu Asyl, Migration und Globalisierung ins Zentrum rücken und Hintergründe aufzeigen. w/orte erzählt die Geschichten, die sonst nicht gehört werden. w/orte berichtet über Menschen, die ihre Heimat verlassen und bei Null anfangen mussten.

Die Plattform ist ein offenes und unabhängiges journalistisches Netzwerk für Debatten, Analysen und Berichte aus alternativen Blickwinkeln. Hinweise, Feedback, Unterstützung und Kritik an

redaktion [a] w-orte.net
',
      'format' => 'filtered_html',
    ),
    'additional_classes' => '',
  );
  $export['box-261ff775'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'register_now';
  $box->plugin_key = 'simple';
  $box->title = 'Autor werden';
  $box->description = 'Call to action for new users to participate';
  $box->options = array(
    'body' => array(
      'value' => '<p>ICH WILL MITMACHEN!</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['register_now'] = $box;

  return $export;
}
