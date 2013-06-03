<?php
/**
 * @file
 * asu_usl_brochure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function asu_usl_brochure_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function asu_usl_brochure_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function asu_usl_brochure_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'call_to_action' => array(
      'name' => t('Call to Action'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'featured_student' => array(
      'name' => t('Featured Student'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Student Name'),
      'help' => '',
    ),
    'hero_image' => array(
      'name' => t('Hero Image'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Hero Title'),
      'help' => '',
    ),
    'newsletter' => array(
      'name' => t('Newsletter'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'program' => array(
      'name' => t('Program'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'quote' => array(
      'name' => t('Quote'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Quote Citation'),
      'help' => '',
    ),
  );
  return $items;
}
