<?php
/**
 * @file
 * cmm_articles.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function cmm_articles_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:article:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'article';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '453fa643-b078-49fb-b1ad-e1c1b0ac9673';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5caa2e13-ee99-494a-b9dd-79ef3691210f';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5caa2e13-ee99-494a-b9dd-79ef3691210f';
    $display->content['new-5caa2e13-ee99-494a-b9dd-79ef3691210f'] = $pane;
    $display->panels['center'][0] = 'new-5caa2e13-ee99-494a-b9dd-79ef3691210f';
    $pane = new stdClass();
    $pane->pid = 'new-6dcb74c2-fa88-4850-a70d-cd590e2beddc';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6dcb74c2-fa88-4850-a70d-cd590e2beddc';
    $display->content['new-6dcb74c2-fa88-4850-a70d-cd590e2beddc'] = $pane;
    $display->panels['center'][1] = 'new-6dcb74c2-fa88-4850-a70d-cd590e2beddc';
    $pane = new stdClass();
    $pane->pid = 'new-21c448a5-73d8-4c92-91d7-a02fe78bf96e';
    $pane->panel = 'center';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'hidden',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '21c448a5-73d8-4c92-91d7-a02fe78bf96e';
    $display->content['new-21c448a5-73d8-4c92-91d7-a02fe78bf96e'] = $pane;
    $display->panels['center'][2] = 'new-21c448a5-73d8-4c92-91d7-a02fe78bf96e';
    $pane = new stdClass();
    $pane->pid = 'new-62cad97d-8831-4c94-8816-27a1da622dc3';
    $pane->panel = 'center';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => FALSE,
      'override_title_text' => '',
      'build_mode' => 'page_manager',
      'identifier' => '',
      'link' => TRUE,
      'context' => 'panelizer',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array(
      'css_class' => 'link-wrapper',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '62cad97d-8831-4c94-8816-27a1da622dc3';
    $display->content['new-62cad97d-8831-4c94-8816-27a1da622dc3'] = $pane;
    $display->panels['center'][3] = 'new-62cad97d-8831-4c94-8816-27a1da622dc3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-62cad97d-8831-4c94-8816-27a1da622dc3';
  $panelizer->display = $display;
  $export['node:article:default'] = $panelizer;

  return $export;
}
