<?php

/**
 * @file
 * 
 */

$plugin = array(
  'title' => t('Europeana Search Widget'),
  'category' => t('Ting'),
);

/**
 * Callback function to supply a list of content types.
 */
function europeana_search_search_content_type_content_types() {
  $types = array(
    'europeana_search_widget' => array(
      'title' => t('Europeana Search Widget'),
      'description' => t('The Search Widget.'),
    ),
  );

  return $types;
}

/**
 * Return the pane contents.
 */
function europeana_search_search_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();

  switch ($subtype) {

    case 'europeana_search_widget':
        
      $block->content = variable_get('europeana_search_code', '');
      
      break;
  }

  return $block;
}

/**
 * Return the pane titles.
 */
function europeana_search_search_content_type_admin_title($subtype, $conf, $context) {
  switch($subtype) {
    case 'europeana_search_widget':
      return t('“@s”: Europeana Search Widget', array('@s' => $context->identifier));
  }
}

/**
 * Returns an edit form for the content type.
 *
 * We're not actually doing anything here, but we need to have this hook
 * for this content type to work.
 */
function europeana_search_search_content_type_edit_form(&$form, &$form_state) {
  return $form;
}

