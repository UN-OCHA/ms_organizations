<?php
/**
 * @file
 * ms_organizations.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ms_organizations_taxonomy_default_vocabularies() {
  return array(
    'ms_organization' => array(
      'name' => 'Organization',
      'machine_name' => 'ms_organization',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
