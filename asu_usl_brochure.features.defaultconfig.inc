<?php
/**
 * @file
 * asu_usl_brochure.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function asu_usl_brochure_defaultconfig_features() {
  return array(
    'asu_usl_brochure' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function asu_usl_brochure_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'asu_service_learning';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_open_framework_settings';
  $strongarm->value = array(
    'toggle_logo' => 0,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 0,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 0,
    'favicon_path' => '',
    'favicon_upload' => '',
    'front_heading_classes' => '',
    'breadcrumb_classes' => '',
    'body_bg_type' => '',
    'body_bg_classes' => '',
    'body_bg_path' => 'public://',
    'body_bg_upload' => '',
    'border_classes' => '',
    'corner_classes' => '',
  );
  $export['theme_open_framework_settings'] = $strongarm;

  return $export;
}
