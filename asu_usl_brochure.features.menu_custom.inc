<?php
/**
 * @file
 * asu_usl_brochure.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function asu_usl_brochure_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The Main menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-sidebar.
  $menus['menu-sidebar'] = array(
    'menu_name' => 'menu-sidebar',
    'title' => 'Sidebar',
    'description' => NULL,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Sidebar');
  t('The Main menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
