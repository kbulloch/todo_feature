<?php
/**
 * @file
 * todo.features.inc
 */

/**
 * Implements hook_views_api().
 */
function todo_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function todo_node_info() {
  $items = array(
    'todo_task' => array(
      'name' => t('Task'),
      'base' => 'node_content',
      'description' => t('Task to be added to the To Do list.'),
      'has_title' => '1',
      'title_label' => t('Task'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
