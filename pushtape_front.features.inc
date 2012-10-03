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
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
