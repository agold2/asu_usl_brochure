<?php
/**
 * @file
 * asu_usl_brochure.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function asu_usl_brochure_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Community Partners',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => '6a89651a-05c4-459d-84fe-1d8318bd0dc8',
    'vocabulary_machine_name' => 'program_audience',
  );
  $terms[] = array(
    'name' => 'Programs',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '765af27b-d757-43d3-b20d-c90e2b72de47',
    'vocabulary_machine_name' => 'hero_audience',
  );
  $terms[] = array(
    'name' => 'Faculty/Schedulers',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => '844df68b-88ad-4c16-bd03-f66c1b417fc1',
    'vocabulary_machine_name' => 'program_audience',
  );
  $terms[] = array(
    'name' => 'Students',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 1,
    'uuid' => 'cae35792-9b26-43c3-a922-7f9742ad3a93',
    'vocabulary_machine_name' => 'hero_audience',
  );
  $terms[] = array(
    'name' => 'Students',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 0,
    'uuid' => 'da8fa131-c4c1-4613-9125-08a1ba12b101',
    'vocabulary_machine_name' => 'program_audience',
  );
  $terms[] = array(
    'name' => 'Community Partners',
    'description' => '',
    'format' => 'plain_text',
    'weight' => 2,
    'uuid' => 'e3fec3da-1f4a-4f07-bf78-1128bb2c1b65',
    'vocabulary_machine_name' => 'hero_audience',
  );
  return $terms;
}
