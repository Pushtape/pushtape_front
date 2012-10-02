<?php
/**
 * @file
 * pushtape_front.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pushtape_front_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
    if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function wortepublish_feature_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function pushtape_front_feature_image_default_styles() {
  $styles = array();

  // Exported image style: worteteaser.
  $styles['worteteaser'] = array(
    'name' => 'worteteaser',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '280',
          'height' => '120',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}