<?php

/**
 * Implementation of hook_default_page_manager_pages().
 */
function europeana_search_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'europeana_search_page';
  $page->task = 'page';
  $page->admin_title = 'Europeana Search Widget';
  $page->admin_description = 'Provides page to holde the search widget.';
  $page->path = 'europeana/search';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Europeana',
    'name' => 'primary-links',
    'weight' => '50',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_europeana_search_page_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'europeana_search_page';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display;
  $display->layout = 'twocol_left_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = 'Søg: %keys:html_safe';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'left';
    $pane->type = 'search';
    $pane->subtype = 'europeana_search_widget';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['left'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Gå på opdagelse i Europas kultursamlinger',
      'body' => '<br/>
<p>Europeana er en database for europæisk kulturarv. Både professionelle og privatpersoner fra hele Europa bidrager til det massive arkiv .</p>

<p>Det er meget nemt at søge i Europeanas millioner af emner.</p>

<p>Bestem hvem, hvad, hvor eller hvilken tid, du ønsker at søge og skriv ordene i Europeanas søgefelt.</p>

<p>Læs mere om Europeana her: <a href="http://www.europeana.eu/portal/">http://www.europeana.eu/portal/</a></p>
<p><a href="http://www.europeana.eu/portal/"><img src="http://www.europeana.eu/portal/sp/img/europeana-logo-da.png"></a></p>',
      'format' => '3',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['right'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['europeana_search_page'] = $page;

 return $pages;

}
