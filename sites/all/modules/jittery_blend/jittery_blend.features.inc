<?php
/**
 * @file
 * jittery_blend.features.inc
 */

/**
 * Implements hook_node_info().
 */
function jittery_blend_node_info() {
  $items = array(
    'jittery_blend' => array(
      'name' => t('Blend'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'wc_ratings' => array(
      'name' => t('Ratings'),
      'base' => 'node_content',
      'description' => t('Ratings content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
