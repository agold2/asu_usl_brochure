<?php
/**
 * @file
 * asu_usl_brochure.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function asu_usl_brochure_taxonomy_default_vocabularies() {
  return array(
    'hero_audience' => array(
      'name' => 'Hero Audience',
      'machine_name' => 'hero_audience',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'program_audience' => array(
      'name' => 'Program Audience',
      'machine_name' => 'program_audience',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
