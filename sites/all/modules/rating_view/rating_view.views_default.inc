<?php
/**
 * @file
 * rating_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function rating_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ratings';
  $view->description = 'The ratings';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ratings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ratings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Blend */
  $handler->display->display_options['fields']['field_blend']['id'] = 'field_blend';
  $handler->display->display_options['fields']['field_blend']['table'] = 'field_data_field_blend';
  $handler->display->display_options['fields']['field_blend']['field'] = 'field_blend';
  $handler->display->display_options['fields']['field_blend']['label'] = '';
  $handler->display->display_options['fields']['field_blend']['element_label_colon'] = FALSE;
  /* Field: Content: Ratings */
  $handler->display->display_options['fields']['field_ratings']['id'] = 'field_ratings';
  $handler->display->display_options['fields']['field_ratings']['table'] = 'field_data_field_ratings';
  $handler->display->display_options['fields']['field_ratings']['field'] = 'field_ratings';
  $handler->display->display_options['fields']['field_ratings']['label'] = '';
  $handler->display->display_options['fields']['field_ratings']['element_label_colon'] = FALSE;
  /* Field: Content: Comment */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'wc_ratings' => 'wc_ratings',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'ratings';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Ratings';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $export['ratings'] = $view;

  return $export;
}
