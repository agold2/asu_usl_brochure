<?php
/**
 * @file
 * asu_usl_brochure.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function asu_usl_brochure_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'call_to_action';
  $view->description = '';
  $view->tag = 'quote';
  $view->base_table = 'node';
  $view->human_name = 'Quotes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_quote_relation_node']['id'] = 'reverse_field_quote_relation_node';
  $handler->display->display_options['relationships']['reverse_field_quote_relation_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_quote_relation_node']['field'] = 'reverse_field_quote_relation_node';
  $handler->display->display_options['relationships']['reverse_field_quote_relation_node']['label'] = 'Quote Relationship';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<span class="edit">[edit_node]</span>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<blockquote class="quote">
	<p>[body]&rdquo; [edit_node]</p>
	<cite>&ndash; [title]</cite>
</blockquote>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Quote Relationship (field_quote_relation) */
  $handler->display->display_options['arguments']['field_quote_relation_target_id']['id'] = 'field_quote_relation_target_id';
  $handler->display->display_options['arguments']['field_quote_relation_target_id']['table'] = 'field_data_field_quote_relation';
  $handler->display->display_options['arguments']['field_quote_relation_target_id']['field'] = 'field_quote_relation_target_id';
  $handler->display->display_options['arguments']['field_quote_relation_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_quote_relation_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_quote_relation_target_id']['default_argument_options']['code'] = '$node = menu_get_object();

if ( ! empty($node->field_quote_relation) ) {
    return $node->field_quote_relation[\'und\'][0][\'target_id\'];
}';
  $handler->display->display_options['arguments']['field_quote_relation_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_quote_relation_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_quote_relation_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_quote_relation_target_id']['specify_validation'] = TRUE;
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
    'quote' => 'quote',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['call_to_action'] = $view;

  $view = new view();
  $view->name = 'featured_student';
  $view->description = '';
  $view->tag = 'news students';
  $view->base_table = 'node';
  $view->human_name = 'Students Making an Impact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Student Organization */
  $handler->display->display_options['fields']['field_student_organization']['id'] = 'field_student_organization';
  $handler->display->display_options['fields']['field_student_organization']['table'] = 'field_data_field_student_organization';
  $handler->display->display_options['fields']['field_student_organization']['field'] = 'field_student_organization';
  $handler->display->display_options['fields']['field_student_organization']['label'] = '';
  $handler->display->display_options['fields']['field_student_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_student_organization']['element_default_classes'] = FALSE;
  /* Field: Content: Student Photo */
  $handler->display->display_options['fields']['field_student_photo']['id'] = 'field_student_photo';
  $handler->display->display_options['fields']['field_student_photo']['table'] = 'field_data_field_student_photo';
  $handler->display->display_options['fields']['field_student_photo']['field'] = 'field_student_photo';
  $handler->display->display_options['fields']['field_student_photo']['label'] = '';
  $handler->display->display_options['fields']['field_student_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_student_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_student_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_student_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'btn btn-small btn-primary';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="row-fluid media-object">
	<div class="span4">
		[field_student_photo]	
	</div>
	
	<div class="span8">
		<h3 class="media-title remove-margin-bottom">[title]</h3>
		<p><em>[field_student_organization]</em></p>

		<p>[body]</p>
		
		<p>[view_node]</p>

		[edit_node]
	</div>
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '256',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'featured_student' => 'featured_student',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'View: Students Making an Impact';
  $export['featured_student'] = $view;

  $view = new view();
  $view->name = 'hero_slideshow';
  $view->description = '';
  $view->tag = 'hero slider slideshow';
  $view->base_table = 'node';
  $view->human_name = 'Hero Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'hero-cycle';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Hero Audience (field_hero_audience) */
  $handler->display->display_options['relationships']['field_hero_audience_tid']['id'] = 'field_hero_audience_tid';
  $handler->display->display_options['relationships']['field_hero_audience_tid']['table'] = 'field_data_field_hero_audience';
  $handler->display->display_options['relationships']['field_hero_audience_tid']['field'] = 'field_hero_audience_tid';
  /* Field: Content: Hero Image */
  $handler->display->display_options['fields']['field_hero_image']['id'] = 'field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['table'] = 'field_data_field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['field'] = 'field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['label'] = '';
  $handler->display->display_options['fields']['field_hero_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Hero Button Text */
  $handler->display->display_options['fields']['field_hero_button_text']['id'] = 'field_hero_button_text';
  $handler->display->display_options['fields']['field_hero_button_text']['table'] = 'field_data_field_hero_button_text';
  $handler->display->display_options['fields']['field_hero_button_text']['field'] = 'field_hero_button_text';
  $handler->display->display_options['fields']['field_hero_button_text']['label'] = '';
  $handler->display->display_options['fields']['field_hero_button_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_button_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hero_button_text']['alter']['text'] = '[field_hero_button_text] <i class="sprite-icon sprite-arrow sprite-arrow-right"></i>';
  $handler->display->display_options['fields']['field_hero_button_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_button_text']['element_default_classes'] = FALSE;
  /* Field: Content: Hero Button Link */
  $handler->display->display_options['fields']['field_hero_button_link']['id'] = 'field_hero_button_link';
  $handler->display->display_options['fields']['field_hero_button_link']['table'] = 'field_data_field_hero_button_link';
  $handler->display->display_options['fields']['field_hero_button_link']['field'] = 'field_hero_button_link';
  $handler->display->display_options['fields']['field_hero_button_link']['label'] = '';
  $handler->display->display_options['fields']['field_hero_button_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_button_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_button_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_button_link']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Hero Button Link Page */
  $handler->display->display_options['fields']['field_hero_button_link_page']['id'] = 'field_hero_button_link_page';
  $handler->display->display_options['fields']['field_hero_button_link_page']['table'] = 'field_data_field_hero_button_link_page';
  $handler->display->display_options['fields']['field_hero_button_link_page']['field'] = 'field_hero_button_link_page';
  $handler->display->display_options['fields']['field_hero_button_link_page']['label'] = '';
  $handler->display->display_options['fields']['field_hero_button_link_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_button_link_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_button_link_page']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="hero-slide">
	[field_hero_image]

	<h1 class="hero-headline">[title]</h1>
	<a href="[field_hero_button_link_page]" class="hero-action">[field_hero_button_text]</a>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
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
    'hero_image' => 'hero_image',
  );

  /* Display: Home */
  $handler = $view->new_display('block', 'Home', 'block_1');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'hero-cycle';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Hero Image */
  $handler->display->display_options['fields']['field_hero_image']['id'] = 'field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['table'] = 'field_data_field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['field'] = 'field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['label'] = '';
  $handler->display->display_options['fields']['field_hero_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Hero Button Text */
  $handler->display->display_options['fields']['field_hero_button_text']['id'] = 'field_hero_button_text';
  $handler->display->display_options['fields']['field_hero_button_text']['table'] = 'field_data_field_hero_button_text';
  $handler->display->display_options['fields']['field_hero_button_text']['field'] = 'field_hero_button_text';
  $handler->display->display_options['fields']['field_hero_button_text']['label'] = '';
  $handler->display->display_options['fields']['field_hero_button_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_button_text']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hero_button_text']['alter']['text'] = '[field_hero_button_text] <i class="sprite-icon sprite-arrow sprite-arrow-right"></i>';
  $handler->display->display_options['fields']['field_hero_button_text']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_button_text']['element_default_classes'] = FALSE;
  /* Field: Content: Hero Button Link */
  $handler->display->display_options['fields']['field_hero_button_link']['id'] = 'field_hero_button_link';
  $handler->display->display_options['fields']['field_hero_button_link']['table'] = 'field_data_field_hero_button_link';
  $handler->display->display_options['fields']['field_hero_button_link']['field'] = 'field_hero_button_link';
  $handler->display->display_options['fields']['field_hero_button_link']['label'] = '';
  $handler->display->display_options['fields']['field_hero_button_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_button_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_button_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_button_link']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Hero Button Link Page */
  $handler->display->display_options['fields']['field_hero_button_link_page']['id'] = 'field_hero_button_link_page';
  $handler->display->display_options['fields']['field_hero_button_link_page']['table'] = 'field_data_field_hero_button_link_page';
  $handler->display->display_options['fields']['field_hero_button_link_page']['field'] = 'field_hero_button_link_page';
  $handler->display->display_options['fields']['field_hero_button_link_page']['label'] = '';
  $handler->display->display_options['fields']['field_hero_button_link_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_button_link_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_button_link_page']['element_default_classes'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="hero-slide">
	[field_hero_image]

	<h1 class="hero-headline">[title]</h1>
	<a href="[field_hero_button_link_page]" class="hero-action">[field_hero_button_text]</a>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'hero_image' => 'hero_image',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Home Pager */
  $handler = $view->new_display('block', 'Home Pager', 'block_3');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'hero-pager';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Hero Pager Heading */
  $handler->display->display_options['fields']['field_hero_pager_heading']['id'] = 'field_hero_pager_heading';
  $handler->display->display_options['fields']['field_hero_pager_heading']['table'] = 'field_data_field_hero_pager_heading';
  $handler->display->display_options['fields']['field_hero_pager_heading']['field'] = 'field_hero_pager_heading';
  $handler->display->display_options['fields']['field_hero_pager_heading']['label'] = '';
  $handler->display->display_options['fields']['field_hero_pager_heading']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_pager_heading']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_pager_heading']['element_default_classes'] = FALSE;
  /* Field: Content: Hero Button Link */
  $handler->display->display_options['fields']['field_hero_button_link']['id'] = 'field_hero_button_link';
  $handler->display->display_options['fields']['field_hero_button_link']['table'] = 'field_data_field_hero_button_link';
  $handler->display->display_options['fields']['field_hero_button_link']['field'] = 'field_hero_button_link';
  $handler->display->display_options['fields']['field_hero_button_link']['label'] = '';
  $handler->display->display_options['fields']['field_hero_button_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_button_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_button_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_button_link']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Hero Button Link Page */
  $handler->display->display_options['fields']['field_hero_button_link_page']['id'] = 'field_hero_button_link_page';
  $handler->display->display_options['fields']['field_hero_button_link_page']['table'] = 'field_data_field_hero_button_link_page';
  $handler->display->display_options['fields']['field_hero_button_link_page']['field'] = 'field_hero_button_link_page';
  $handler->display->display_options['fields']['field_hero_button_link_page']['label'] = '';
  $handler->display->display_options['fields']['field_hero_button_link_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_button_link_page']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_button_link_page']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Field: Content: Hero Pager Description */
  $handler->display->display_options['fields']['field_hero_pager_description']['id'] = 'field_hero_pager_description';
  $handler->display->display_options['fields']['field_hero_pager_description']['table'] = 'field_data_field_hero_pager_description';
  $handler->display->display_options['fields']['field_hero_pager_description']['field'] = 'field_hero_pager_description';
  $handler->display->display_options['fields']['field_hero_pager_description']['label'] = '';
  $handler->display->display_options['fields']['field_hero_pager_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_hero_pager_description']['alter']['text'] = '<div class="span4 text-center">
	<h4 class="maroon">[field_hero_pager_heading]</h4>
	
	<p>[field_hero_pager_description] [edit_node]</p>

	<a href="[field_hero_button_link_page]" class="btn btn-medium btn-primary">Learn More</a>
</div>';
  $handler->display->display_options['fields']['field_hero_pager_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_pager_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'hero_image' => 'hero_image',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Interior - Programs */
  $handler = $view->new_display('block', 'Interior - Programs', 'block_2');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'hero-cycle';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Hero Audience (field_hero_audience) */
  $handler->display->display_options['relationships']['field_hero_audience_tid']['id'] = 'field_hero_audience_tid';
  $handler->display->display_options['relationships']['field_hero_audience_tid']['table'] = 'field_data_field_hero_audience';
  $handler->display->display_options['relationships']['field_hero_audience_tid']['field'] = 'field_hero_audience_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Hero Image */
  $handler->display->display_options['fields']['field_hero_image']['id'] = 'field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['table'] = 'field_data_field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['field'] = 'field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['label'] = '';
  $handler->display->display_options['fields']['field_hero_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="hero-slide">
	[field_hero_image]

	<h1 class="hero-headline">[title]</h1>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'hero_image' => 'hero_image',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Hero Audience (field_hero_audience) */
  $handler->display->display_options['filters']['field_hero_audience_tid']['id'] = 'field_hero_audience_tid';
  $handler->display->display_options['filters']['field_hero_audience_tid']['table'] = 'field_data_field_hero_audience';
  $handler->display->display_options['filters']['field_hero_audience_tid']['field'] = 'field_hero_audience_tid';
  $handler->display->display_options['filters']['field_hero_audience_tid']['value'] = array(
    4 => '4',
  );
  $handler->display->display_options['filters']['field_hero_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_hero_audience_tid']['vocabulary'] = 'hero_audience';
  $handler->display->display_options['filters']['field_hero_audience_tid']['hierarchy'] = 1;

  /* Display: Interior - Students */
  $handler = $view->new_display('block', 'Interior - Students', 'block_4');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'hero-cycle';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Hero Audience (field_hero_audience) */
  $handler->display->display_options['relationships']['field_hero_audience_tid']['id'] = 'field_hero_audience_tid';
  $handler->display->display_options['relationships']['field_hero_audience_tid']['table'] = 'field_data_field_hero_audience';
  $handler->display->display_options['relationships']['field_hero_audience_tid']['field'] = 'field_hero_audience_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Hero Image */
  $handler->display->display_options['fields']['field_hero_image']['id'] = 'field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['table'] = 'field_data_field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['field'] = 'field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['label'] = '';
  $handler->display->display_options['fields']['field_hero_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="hero-slide">
	[field_hero_image]

	<h1 class="hero-headline">[title]</h1>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'hero_image' => 'hero_image',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Hero Audience (field_hero_audience) */
  $handler->display->display_options['filters']['field_hero_audience_tid']['id'] = 'field_hero_audience_tid';
  $handler->display->display_options['filters']['field_hero_audience_tid']['table'] = 'field_data_field_hero_audience';
  $handler->display->display_options['filters']['field_hero_audience_tid']['field'] = 'field_hero_audience_tid';
  $handler->display->display_options['filters']['field_hero_audience_tid']['value'] = array(
    5 => '5',
  );
  $handler->display->display_options['filters']['field_hero_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_hero_audience_tid']['vocabulary'] = 'hero_audience';
  $handler->display->display_options['filters']['field_hero_audience_tid']['hierarchy'] = 1;

  /* Display: Interior - Community Partners */
  $handler = $view->new_display('block', 'Interior - Community Partners', 'block_5');
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'hero-cycle';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Hero Audience (field_hero_audience) */
  $handler->display->display_options['relationships']['field_hero_audience_tid']['id'] = 'field_hero_audience_tid';
  $handler->display->display_options['relationships']['field_hero_audience_tid']['table'] = 'field_data_field_hero_audience';
  $handler->display->display_options['relationships']['field_hero_audience_tid']['field'] = 'field_hero_audience_tid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Hero Image */
  $handler->display->display_options['fields']['field_hero_image']['id'] = 'field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['table'] = 'field_data_field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['field'] = 'field_hero_image';
  $handler->display->display_options['fields']['field_hero_image']['label'] = '';
  $handler->display->display_options['fields']['field_hero_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_hero_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_hero_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_hero_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<div class="hero-slide">
	[field_hero_image]

	<h1 class="hero-headline">[title]</h1>
</div>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'hero_image' => 'hero_image',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Hero Audience (field_hero_audience) */
  $handler->display->display_options['filters']['field_hero_audience_tid']['id'] = 'field_hero_audience_tid';
  $handler->display->display_options['filters']['field_hero_audience_tid']['table'] = 'field_data_field_hero_audience';
  $handler->display->display_options['filters']['field_hero_audience_tid']['field'] = 'field_hero_audience_tid';
  $handler->display->display_options['filters']['field_hero_audience_tid']['value'] = array(
    6 => '6',
  );
  $handler->display->display_options['filters']['field_hero_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_hero_audience_tid']['vocabulary'] = 'hero_audience';
  $handler->display->display_options['filters']['field_hero_audience_tid']['hierarchy'] = 1;
  $export['hero_slideshow'] = $view;

  $view = new view();
  $view->name = 'news';
  $view->description = '';
  $view->tag = 'news';
  $view->base_table = 'node';
  $view->human_name = 'News Articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['created']['alter']['text'] = '<p><strong>[created]</strong></p>';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'F j, Y';
  $handler->display->display_options['fields']['created']['timezone'] = 'America/Phoenix';
  /* Field: Content: Course Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'btn btn-small btn-primary';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="row-fluid media-object">
	<div class="span4">
		[field_image]	
	</div>
	
	<div class="span8">
		<h3 class="media-title">[title]</h3>
		[created]

		[body]
		
		<p>[view_node]</p>

		[edit_node]
	</div>
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '256',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'article' => 'article',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['news'] = $view;

  $view = new view();
  $view->name = 'newsletters';
  $view->description = '';
  $view->tag = 'newsletters';
  $view->base_table = 'node';
  $view->human_name = 'Newsletters';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'btn btn-small btn-primary';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Read More';
  /* Field: Content: Newsletter Image */
  $handler->display->display_options['fields']['field_newsletter_image']['id'] = 'field_newsletter_image';
  $handler->display->display_options['fields']['field_newsletter_image']['table'] = 'field_data_field_newsletter_image';
  $handler->display->display_options['fields']['field_newsletter_image']['field'] = 'field_newsletter_image';
  $handler->display->display_options['fields']['field_newsletter_image']['label'] = '';
  $handler->display->display_options['fields']['field_newsletter_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_newsletter_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_newsletter_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_newsletter_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_newsletter_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="row-fluid media-object">
	<div class="span4">
		[field_newsletter_image]
	</div>
	
	<div class="span8">
		<h3 class="media-title">[title]</h3>
		[body]
		
		<p>[view_node]</p>

		[edit_node]
	</div>
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '256',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'newsletter' => 'newsletter',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['newsletters'] = $view;

  $view = new view();
  $view->name = 'programs';
  $view->description = '';
  $view->tag = 'programs';
  $view->base_table = 'node';
  $view->human_name = 'Programs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3 class="media-title">[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'btn btn-small btn-primary';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Program Details';
  /* Field: Content: Program Image */
  $handler->display->display_options['fields']['field_program_image']['id'] = 'field_program_image';
  $handler->display->display_options['fields']['field_program_image']['table'] = 'field_data_field_program_image';
  $handler->display->display_options['fields']['field_program_image']['field'] = 'field_program_image';
  $handler->display->display_options['fields']['field_program_image']['label'] = '';
  $handler->display->display_options['fields']['field_program_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_program_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_program_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_program_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Program Summary */
  $handler->display->display_options['fields']['field_program_summary']['id'] = 'field_program_summary';
  $handler->display->display_options['fields']['field_program_summary']['table'] = 'field_data_field_program_summary';
  $handler->display->display_options['fields']['field_program_summary']['field'] = 'field_program_summary';
  $handler->display->display_options['fields']['field_program_summary']['label'] = '';
  $handler->display->display_options['fields']['field_program_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_program_summary']['alter']['text'] = '<div class="row-fluid media-object">
	<div class="span4">
		[field_program_image]	
	</div>
	
	<div class="span8">
		<h3 class="media-title">[title]</h3>

		[field_program_summary]
		
		<p>[view_node]</p>

		[edit_node]
	</div>
</div>';
  $handler->display->display_options['fields']['field_program_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_summary']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
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
    'program' => 'program',
  );

  /* Display: All Programs */
  $handler = $view->new_display('block', 'All Programs', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3 class="media-title">[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'btn btn-small btn-primary';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Program Details';
  /* Field: Content: Program Image */
  $handler->display->display_options['fields']['field_program_image']['id'] = 'field_program_image';
  $handler->display->display_options['fields']['field_program_image']['table'] = 'field_data_field_program_image';
  $handler->display->display_options['fields']['field_program_image']['field'] = 'field_program_image';
  $handler->display->display_options['fields']['field_program_image']['label'] = '';
  $handler->display->display_options['fields']['field_program_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_program_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_program_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Program Summary */
  $handler->display->display_options['fields']['field_program_summary']['id'] = 'field_program_summary';
  $handler->display->display_options['fields']['field_program_summary']['table'] = 'field_data_field_program_summary';
  $handler->display->display_options['fields']['field_program_summary']['field'] = 'field_program_summary';
  $handler->display->display_options['fields']['field_program_summary']['label'] = '';
  $handler->display->display_options['fields']['field_program_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_program_summary']['alter']['text'] = '<div class="row-fluid media-object">
	<div class="span4">
		[field_program_image]	
	</div>
	
	<div class="span8">
		<h3 class="media-title">[title]</h3>

		<p>[field_program_summary]</p>
		
		<p>[view_node]</p>

		[edit_node]
	</div>
</div>';
  $handler->display->display_options['fields']['field_program_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_summary']['element_default_classes'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'program' => 'program',
  );
  $handler->display->display_options['block_description'] = 'View: Programs';

  /* Display: Programs (For Students) */
  $handler = $view->new_display('block', 'Programs (For Students)', 'block_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3 class="media-title">[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Field: Content: Program Image - For Students */
  $handler->display->display_options['fields']['field_program_image_students']['id'] = 'field_program_image_students';
  $handler->display->display_options['fields']['field_program_image_students']['table'] = 'field_data_field_program_image_students';
  $handler->display->display_options['fields']['field_program_image_students']['field'] = 'field_program_image_students';
  $handler->display->display_options['fields']['field_program_image_students']['label'] = '';
  $handler->display->display_options['fields']['field_program_image_students']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_program_image_students']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_image_students']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_program_image_students']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Program Page - For Students */
  $handler->display->display_options['fields']['field_program_page_students']['id'] = 'field_program_page_students';
  $handler->display->display_options['fields']['field_program_page_students']['table'] = 'field_data_field_program_page_students';
  $handler->display->display_options['fields']['field_program_page_students']['field'] = 'field_program_page_students';
  $handler->display->display_options['fields']['field_program_page_students']['label'] = '';
  $handler->display->display_options['fields']['field_program_page_students']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_program_page_students']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_program_page_students']['alter']['text'] = 'Learn More';
  $handler->display->display_options['fields']['field_program_page_students']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_program_page_students']['alter']['path'] = '[field_program_page_students]';
  $handler->display->display_options['fields']['field_program_page_students']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_program_page_students']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_program_page_students']['alter']['link_class'] = 'btn btn-small btn-primary';
  $handler->display->display_options['fields']['field_program_page_students']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_page_students']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Program Relation - For Students */
  $handler->display->display_options['fields']['field_program_relation_students']['id'] = 'field_program_relation_students';
  $handler->display->display_options['fields']['field_program_relation_students']['table'] = 'field_data_field_program_relation_students';
  $handler->display->display_options['fields']['field_program_relation_students']['field'] = 'field_program_relation_students';
  $handler->display->display_options['fields']['field_program_relation_students']['label'] = '';
  $handler->display->display_options['fields']['field_program_relation_students']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_program_relation_students']['alter']['link_class'] = 'btn btn-small btn-primary';
  $handler->display->display_options['fields']['field_program_relation_students']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_relation_students']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_program_relation_students']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Program Link - Students */
  $handler->display->display_options['fields']['field_program_link_students']['id'] = 'field_program_link_students';
  $handler->display->display_options['fields']['field_program_link_students']['table'] = 'field_data_field_program_link_students';
  $handler->display->display_options['fields']['field_program_link_students']['field'] = 'field_program_link_students';
  $handler->display->display_options['fields']['field_program_link_students']['label'] = '';
  $handler->display->display_options['fields']['field_program_link_students']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_program_link_students']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_link_students']['element_default_classes'] = FALSE;
  /* Field: Content: Program Summary - For Students */
  $handler->display->display_options['fields']['field_program_summary_students']['id'] = 'field_program_summary_students';
  $handler->display->display_options['fields']['field_program_summary_students']['table'] = 'field_data_field_program_summary_students';
  $handler->display->display_options['fields']['field_program_summary_students']['field'] = 'field_program_summary_students';
  $handler->display->display_options['fields']['field_program_summary_students']['label'] = '';
  $handler->display->display_options['fields']['field_program_summary_students']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_program_summary_students']['alter']['text'] = '<div class="row-fluid media-object">
	<div class="span4">
		[field_program_image_students]	
	</div>
	
	<div class="span8">
		<h3 class="media-title">[title]</h3>

		<p>[field_program_summary_students]</p>
		
		<p class="hide">[field_program_page_students]</p>
		<p class="hide btn btn-small btn-primary add-margin-bottom">[field_program_relation_students]</p>

		<p class="btn btn-primary btn-small add-margin-bottom"><a href="[field_program_link_students]">Learn More</a></p>
		
		<p>[edit_node]</p>
	</div>
</div>';
  $handler->display->display_options['fields']['field_program_summary_students']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'program' => 'program',
  );
  /* Filter criterion: Content: Program Audience (field_program_audience) */
  $handler->display->display_options['filters']['field_program_audience_tid']['id'] = 'field_program_audience_tid';
  $handler->display->display_options['filters']['field_program_audience_tid']['table'] = 'field_data_field_program_audience';
  $handler->display->display_options['filters']['field_program_audience_tid']['field'] = 'field_program_audience_tid';
  $handler->display->display_options['filters']['field_program_audience_tid']['value'] = array(
    7 => '7',
  );
  $handler->display->display_options['filters']['field_program_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_program_audience_tid']['vocabulary'] = 'program_audience';
  $handler->display->display_options['filters']['field_program_audience_tid']['hierarchy'] = 1;
  $handler->display->display_options['block_description'] = 'View: Programs (For Students)';

  /* Display: Programs (For Partners) */
  $handler = $view->new_display('block', 'Programs (For Partners)', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3 class="media-title">[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Field: Content: Program Image - For Students */
  $handler->display->display_options['fields']['field_program_image_students']['id'] = 'field_program_image_students';
  $handler->display->display_options['fields']['field_program_image_students']['table'] = 'field_data_field_program_image_students';
  $handler->display->display_options['fields']['field_program_image_students']['field'] = 'field_program_image_students';
  $handler->display->display_options['fields']['field_program_image_students']['label'] = '';
  $handler->display->display_options['fields']['field_program_image_students']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_program_image_students']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_image_students']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_program_image_students']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Program Page - For Students */
  $handler->display->display_options['fields']['field_program_page_students']['id'] = 'field_program_page_students';
  $handler->display->display_options['fields']['field_program_page_students']['table'] = 'field_data_field_program_page_students';
  $handler->display->display_options['fields']['field_program_page_students']['field'] = 'field_program_page_students';
  $handler->display->display_options['fields']['field_program_page_students']['label'] = '';
  $handler->display->display_options['fields']['field_program_page_students']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_program_page_students']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_program_page_students']['alter']['text'] = 'Learn More';
  $handler->display->display_options['fields']['field_program_page_students']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_program_page_students']['alter']['path'] = '[field_program_page_students]';
  $handler->display->display_options['fields']['field_program_page_students']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_program_page_students']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_program_page_students']['alter']['link_class'] = 'btn btn-small btn-primary';
  $handler->display->display_options['fields']['field_program_page_students']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_page_students']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Program Link - Partners */
  $handler->display->display_options['fields']['field_program_link_partners']['id'] = 'field_program_link_partners';
  $handler->display->display_options['fields']['field_program_link_partners']['table'] = 'field_data_field_program_link_partners';
  $handler->display->display_options['fields']['field_program_link_partners']['field'] = 'field_program_link_partners';
  $handler->display->display_options['fields']['field_program_link_partners']['label'] = '';
  $handler->display->display_options['fields']['field_program_link_partners']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_program_link_partners']['element_label_colon'] = FALSE;
  /* Field: Content: Program Summary - For Students */
  $handler->display->display_options['fields']['field_program_summary_students']['id'] = 'field_program_summary_students';
  $handler->display->display_options['fields']['field_program_summary_students']['table'] = 'field_data_field_program_summary_students';
  $handler->display->display_options['fields']['field_program_summary_students']['field'] = 'field_program_summary_students';
  $handler->display->display_options['fields']['field_program_summary_students']['label'] = '';
  $handler->display->display_options['fields']['field_program_summary_students']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_program_summary_students']['alter']['text'] = '<div class="row-fluid media-object">
	<div class="span4">
		[field_program_image_students]	
	</div>
	
	<div class="span8">
		<h3 class="media-title">[title]</h3>

		<p>[field_program_summary_students]</p>
		
		<p class="hide">[field_program_page_students]</p>

		<p class="btn btn-primary btn-small add-margin-bottom"><a href="[field_program_link_partners]">Learn More</a></p>
		
		<p>[edit_node]</p>
	</div>
</div>';
  $handler->display->display_options['fields']['field_program_summary_students']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'program' => 'program',
  );
  /* Filter criterion: Content: Program Audience (field_program_audience) */
  $handler->display->display_options['filters']['field_program_audience_tid']['id'] = 'field_program_audience_tid';
  $handler->display->display_options['filters']['field_program_audience_tid']['table'] = 'field_data_field_program_audience';
  $handler->display->display_options['filters']['field_program_audience_tid']['field'] = 'field_program_audience_tid';
  $handler->display->display_options['filters']['field_program_audience_tid']['value'] = array(
    8 => '8',
  );
  $handler->display->display_options['filters']['field_program_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_program_audience_tid']['vocabulary'] = 'program_audience';
  $handler->display->display_options['filters']['field_program_audience_tid']['hierarchy'] = 1;
  $handler->display->display_options['block_description'] = 'View: Programs (For Partners)';

  /* Display: Programs (For Faculty) */
  $handler = $view->new_display('block', 'Programs (For Faculty)', 'block_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3 class="media-title">[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = FALSE;
  /* Field: Content: Program Image - For Faculty */
  $handler->display->display_options['fields']['field_program_image_faculty']['id'] = 'field_program_image_faculty';
  $handler->display->display_options['fields']['field_program_image_faculty']['table'] = 'field_data_field_program_image_faculty';
  $handler->display->display_options['fields']['field_program_image_faculty']['field'] = 'field_program_image_faculty';
  $handler->display->display_options['fields']['field_program_image_faculty']['label'] = '';
  $handler->display->display_options['fields']['field_program_image_faculty']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_program_image_faculty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_image_faculty']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_program_image_faculty']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Program Page - For Faculty */
  $handler->display->display_options['fields']['field_program_page_faculty']['id'] = 'field_program_page_faculty';
  $handler->display->display_options['fields']['field_program_page_faculty']['table'] = 'field_data_field_program_page_faculty';
  $handler->display->display_options['fields']['field_program_page_faculty']['field'] = 'field_program_page_faculty';
  $handler->display->display_options['fields']['field_program_page_faculty']['label'] = '';
  $handler->display->display_options['fields']['field_program_page_faculty']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_program_page_faculty']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_program_page_faculty']['alter']['text'] = 'Learn More';
  $handler->display->display_options['fields']['field_program_page_faculty']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_program_page_faculty']['alter']['path'] = '[field_program_page_faculty]';
  $handler->display->display_options['fields']['field_program_page_faculty']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_program_page_faculty']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_program_page_faculty']['alter']['link_class'] = 'btn btn-small btn-primary';
  $handler->display->display_options['fields']['field_program_page_faculty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_program_page_faculty']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_program_page_faculty']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Program Link - Faculty */
  $handler->display->display_options['fields']['field_program_link_faculty']['id'] = 'field_program_link_faculty';
  $handler->display->display_options['fields']['field_program_link_faculty']['table'] = 'field_data_field_program_link_faculty';
  $handler->display->display_options['fields']['field_program_link_faculty']['field'] = 'field_program_link_faculty';
  $handler->display->display_options['fields']['field_program_link_faculty']['label'] = '';
  $handler->display->display_options['fields']['field_program_link_faculty']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_program_link_faculty']['element_label_colon'] = FALSE;
  /* Field: Content: Program Summary - For Faculty */
  $handler->display->display_options['fields']['field_program_summary_faculty']['id'] = 'field_program_summary_faculty';
  $handler->display->display_options['fields']['field_program_summary_faculty']['table'] = 'field_data_field_program_summary_faculty';
  $handler->display->display_options['fields']['field_program_summary_faculty']['field'] = 'field_program_summary_faculty';
  $handler->display->display_options['fields']['field_program_summary_faculty']['label'] = '';
  $handler->display->display_options['fields']['field_program_summary_faculty']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_program_summary_faculty']['alter']['text'] = '<div class="row-fluid media-object">
	<div class="span4">
		[field_program_image_faculty]
	</div>
	
	<div class="span8">
		<h3 class="media-title">[title]</h3>

		<p>[field_program_summary_faculty]</p>
		
		<p class="hide">[field_program_page_faculty]</p>

		<p class="btn btn-primary btn-small add-margin-bottom"><a href="[field_program_link_faculty]">Learn More</a></p>

		<p>[edit_node]</p>
	</div>
</div>';
  $handler->display->display_options['fields']['field_program_summary_faculty']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'program' => 'program',
  );
  /* Filter criterion: Content: Program Audience (field_program_audience) */
  $handler->display->display_options['filters']['field_program_audience_tid']['id'] = 'field_program_audience_tid';
  $handler->display->display_options['filters']['field_program_audience_tid']['table'] = 'field_data_field_program_audience';
  $handler->display->display_options['filters']['field_program_audience_tid']['field'] = 'field_program_audience_tid';
  $handler->display->display_options['filters']['field_program_audience_tid']['value'] = array(
    9 => '9',
  );
  $handler->display->display_options['filters']['field_program_audience_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_program_audience_tid']['vocabulary'] = 'program_audience';
  $handler->display->display_options['filters']['field_program_audience_tid']['hierarchy'] = 1;
  $handler->display->display_options['block_description'] = 'View: Programs (For Faculty)';
  $export['programs'] = $view;

  $view = new view();
  $view->name = 'service_learning_courses';
  $view->description = '';
  $view->tag = 'courses';
  $view->base_table = 'node';
  $view->human_name = 'Service Learning Courses';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'row-fluid media-object';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Course Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'btn btn-small btn-primary';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Course Schedule';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'course' => 'course',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Course Featured Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['view_node']['alter']['link_class'] = 'btn btn-small btn-primary';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'View Course Schedule';
  /* Field: Content: Course Syllabus */
  $handler->display->display_options['fields']['field_course_syllabus']['id'] = 'field_course_syllabus';
  $handler->display->display_options['fields']['field_course_syllabus']['table'] = 'field_data_field_course_syllabus';
  $handler->display->display_options['fields']['field_course_syllabus']['field'] = 'field_course_syllabus';
  $handler->display->display_options['fields']['field_course_syllabus']['label'] = '';
  $handler->display->display_options['fields']['field_course_syllabus']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_syllabus']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_course_syllabus']['alter']['text'] = '<li><a href="[field_course_syllabus]" target="_blank">See syllabus for details</a></li>';
  $handler->display->display_options['fields']['field_course_syllabus']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_syllabus']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_course_syllabus']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_course_syllabus']['type'] = 'file_url_plain';
  /* Field: Content: Course Schedule Link */
  $handler->display->display_options['fields']['field_course_schedule_link']['id'] = 'field_course_schedule_link';
  $handler->display->display_options['fields']['field_course_schedule_link']['table'] = 'field_data_field_course_schedule_link';
  $handler->display->display_options['fields']['field_course_schedule_link']['field'] = 'field_course_schedule_link';
  $handler->display->display_options['fields']['field_course_schedule_link']['label'] = '';
  $handler->display->display_options['fields']['field_course_schedule_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_schedule_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_schedule_link']['element_default_classes'] = FALSE;
  /* Field: Content: Course Description */
  $handler->display->display_options['fields']['field_course_description']['id'] = 'field_course_description';
  $handler->display->display_options['fields']['field_course_description']['table'] = 'field_data_field_course_description';
  $handler->display->display_options['fields']['field_course_description']['field'] = 'field_course_description';
  $handler->display->display_options['fields']['field_course_description']['label'] = '';
  $handler->display->display_options['fields']['field_course_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_course_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_course_description']['alter']['text'] = '<p>[field_course_description]<p>';
  $handler->display->display_options['fields']['field_course_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_description']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Course Summary */
  $handler->display->display_options['fields']['field_course_summary']['id'] = 'field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['table'] = 'field_data_field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['field'] = 'field_course_summary';
  $handler->display->display_options['fields']['field_course_summary']['label'] = '';
  $handler->display->display_options['fields']['field_course_summary']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_course_summary']['alter']['text'] = '<div class="span4">
	[field_image]

	<p><strong>Summary:</strong></p>

	<ul>
		[field_course_summary-value]
		[field_course_syllabus]
	</ul>
</div>

<div class="span8">
	<h3 class="media-title maroon">[title]</h3>

	[field_course_description]

	<p><a href="[field_course_schedule_link]" class="btn btn-small btn-primary" target="_blank">View Course Schedule</a></p>

	[edit_node]
</div>';
  $handler->display->display_options['fields']['field_course_summary']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_course_summary']['element_default_classes'] = FALSE;
  $export['service_learning_courses'] = $view;

  $view = new view();
  $view->name = 'students_making_an_impact';
  $view->description = '';
  $view->tag = 'featured students';
  $view->base_table = 'node';
  $view->human_name = 'Featured Students';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Students Making an Impact';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['row_class'] = 'span4';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'thumbnails';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Student Photo */
  $handler->display->display_options['fields']['field_student_photo']['id'] = 'field_student_photo';
  $handler->display->display_options['fields']['field_student_photo']['table'] = 'field_data_field_student_photo';
  $handler->display->display_options['fields']['field_student_photo']['field'] = 'field_student_photo';
  $handler->display->display_options['fields']['field_student_photo']['label'] = '';
  $handler->display->display_options['fields']['field_student_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_student_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_student_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_student_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => 'content',
  );
  /* Field: Content: Student Organization */
  $handler->display->display_options['fields']['field_student_organization']['id'] = 'field_student_organization';
  $handler->display->display_options['fields']['field_student_organization']['table'] = 'field_data_field_student_organization';
  $handler->display->display_options['fields']['field_student_organization']['field'] = 'field_student_organization';
  $handler->display->display_options['fields']['field_student_organization']['label'] = '';
  $handler->display->display_options['fields']['field_student_organization']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_student_organization']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_student_organization']['element_default_classes'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['view_node']['text'] = 'Continue Reading';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="thumbnail">
	[field_student_photo]

	<div class="caption">
		<h3>[title]</h3>
		<em>[field_student_organization] </em>

		<div class="caption-summary">
			<p>[body-summary] [edit_node]</p>
		</div>

		[view_node]
	</div>
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '256',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'featured_student' => 'featured_student',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['filters']['promote']['group'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['block_description'] = 'View: Featured Students';
  $export['students_making_an_impact'] = $view;

  $view = new view();
  $view->name = 'view_call_to_action';
  $view->description = '';
  $view->tag = 'call-to-action';
  $view->base_table = 'node';
  $view->human_name = 'Call to Action';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_call_to_action_relation_node']['id'] = 'reverse_field_call_to_action_relation_node';
  $handler->display->display_options['relationships']['reverse_field_call_to_action_relation_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_call_to_action_relation_node']['field'] = 'reverse_field_call_to_action_relation_node';
  $handler->display->display_options['relationships']['reverse_field_call_to_action_relation_node']['label'] = 'Call to Action Relationship';
  /* Field: Content: Call to Action Link */
  $handler->display->display_options['fields']['field_call_to_action_link']['id'] = 'field_call_to_action_link';
  $handler->display->display_options['fields']['field_call_to_action_link']['table'] = 'field_data_field_call_to_action_link';
  $handler->display->display_options['fields']['field_call_to_action_link']['field'] = 'field_call_to_action_link';
  $handler->display->display_options['fields']['field_call_to_action_link']['label'] = '';
  $handler->display->display_options['fields']['field_call_to_action_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_call_to_action_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_call_to_action_link']['alter']['text'] = 'Learn More';
  $handler->display->display_options['fields']['field_call_to_action_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_call_to_action_link']['alter']['path'] = '[field_call_to_action_link]';
  $handler->display->display_options['fields']['field_call_to_action_link']['alter']['replace_spaces'] = TRUE;
  $handler->display->display_options['fields']['field_call_to_action_link']['alter']['path_case'] = 'lower';
  $handler->display->display_options['fields']['field_call_to_action_link']['alter']['link_class'] = 'btn btn-small pull-right';
  $handler->display->display_options['fields']['field_call_to_action_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_call_to_action_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_call_to_action_link']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Call to Action URL */
  $handler->display->display_options['fields']['field_call_to_action_url']['id'] = 'field_call_to_action_url';
  $handler->display->display_options['fields']['field_call_to_action_url']['table'] = 'field_data_field_call_to_action_url';
  $handler->display->display_options['fields']['field_call_to_action_url']['field'] = 'field_call_to_action_url';
  $handler->display->display_options['fields']['field_call_to_action_url']['label'] = '';
  $handler->display->display_options['fields']['field_call_to_action_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_call_to_action_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_call_to_action_url']['element_default_classes'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<span class="edit">[edit_node]</span>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['text'] = '<div class="hero-unit">
	<a href="[field_call_to_action_url]" class="btn btn-small pull-right">Learn More</a>

	[body]

	[edit_node]
</div>';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Call to Action Relationship (field_call_to_action_relation) */
  $handler->display->display_options['arguments']['field_call_to_action_relation_target_id']['id'] = 'field_call_to_action_relation_target_id';
  $handler->display->display_options['arguments']['field_call_to_action_relation_target_id']['table'] = 'field_data_field_call_to_action_relation';
  $handler->display->display_options['arguments']['field_call_to_action_relation_target_id']['field'] = 'field_call_to_action_relation_target_id';
  $handler->display->display_options['arguments']['field_call_to_action_relation_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_call_to_action_relation_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_call_to_action_relation_target_id']['default_argument_options']['code'] = '$node = menu_get_object();

if ( ! empty($node->field_call_to_action_relation) ) {
    return $node->field_call_to_action_relation[\'und\'][0][\'target_id\'];
}';
  $handler->display->display_options['arguments']['field_call_to_action_relation_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_call_to_action_relation_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_call_to_action_relation_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_call_to_action_relation_target_id']['specify_validation'] = TRUE;
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
    'call_to_action' => 'call_to_action',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['view_call_to_action'] = $view;

  return $export;
}
