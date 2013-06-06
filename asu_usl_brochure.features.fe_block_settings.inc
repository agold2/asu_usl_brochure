<?php
/**
 * @file
 * asu_usl_brochure.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function asu_usl_brochure_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['asu_brand-asu_brand_header'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'asu_brand_header',
    'module' => 'asu_brand',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'global_header',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -11,
      ),
      'open_framework' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-sidebar'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-sidebar',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'main_sidebar',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -8,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-user-account'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-user-account',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'global_account',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => 0,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu_block-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'main_sidebar',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -11,
      ),
      'open_framework' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => 'Navigation',
    'visibility' => 0,
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'main_body',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -17,
      ),
      'open_framework' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'global_menu',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -10,
      ),
      'open_framework' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['views-call_to_action-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'call_to_action-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'main_body',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -7,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-featured_student-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'featured_student-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/102',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'main_body',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -9,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-hero_slideshow-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'hero_slideshow-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'hero_slideshow',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -22,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-hero_slideshow-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'hero_slideshow-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/2',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'hero_slideshow_interior',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -21,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-hero_slideshow-block_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'hero_slideshow-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'hero_slideshow_pager',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => 0,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-hero_slideshow-block_4'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'hero_slideshow-block_4',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/3',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'hero_slideshow_interior',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -20,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-hero_slideshow-block_5'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'hero_slideshow-block_5',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/4',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'hero_slideshow_interior',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -19,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-news-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'news-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'news',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'main_body',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -11,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-newsletters-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'newsletters-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'news/newsletters',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'main_body',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -10,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-programs-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'programs-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/2',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'main_body',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -16,
      ),
      'open_framework' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-programs-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'programs-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/3',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'main_body',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -15,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-programs-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'programs-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/4',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'main_body',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -14,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-programs-block_3'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'programs-block_3',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/5',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'main_body',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -13,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-service_learning_courses-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'service_learning_courses-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'node/19',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'main_body',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -12,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-students_making_an_impact-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'students_making_an_impact-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'featured_students',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -9,
      ),
      'open_framework' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => 'Students Making an Impact',
    'visibility' => 1,
  );

  $export['views-view_call_to_action-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'view_call_to_action-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>
user*
admin*',
    'roles' => array(),
    'themes' => array(
      'asu_service_learning' => array(
        'region' => 'main_body',
        'status' => 1,
        'theme' => 'asu_service_learning',
        'weight' => -8,
      ),
      'open_framework' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'open_framework',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
