<?php
/**
 * @file
 * stanford_image.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function stanford_image_field_default_fields() {
  $fields = array();

  // Exported field: 'field_collection_item-field_s_image_info-field_s_image_caption'.
  $fields['field_collection_item-field_s_image_info-field_s_image_caption'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_s_image_caption',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_s_image_info',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Optionally enter information to appear as a caption for this image. This text may be trimmed to 180 characters.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'stanford_12_col_banner' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'stanford_4_col_header' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'stanford_6_col_banner' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '3',
        ),
        'stanford_8_col_banner' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => '180',
          ),
          'type' => 'text_trimmed',
          'weight' => '2',
        ),
        'stanford_9_col_banner' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'stanford_large_scaled' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'stanford_large_square' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
        'stanford_med_profile' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'stanford_medium_square' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'stanford_small_square' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'stanford_thumbnail_square' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'test' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_s_image_caption',
      'label' => 'Caption',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'content_editor_text_format' => 'content_editor_text_format',
            'ds_code' => 0,
            'filtered_html' => 0,
            'full_html' => 0,
            'plain_text' => 0,
          ),
          'allowed_formats_toggle' => 1,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'content_editor_text_format' => array(
                'weight' => '-10',
              ),
              'ds_code' => array(
                'weight' => '12',
              ),
              'filtered_html' => array(
                'weight' => '0',
              ),
              'full_html' => array(
                'weight' => '1',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
            ),
          ),
        ),
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '2',
        ),
        'type' => 'text_textarea',
        'weight' => '35',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_s_image_info-field_s_image_credits'.
  $fields['field_collection_item-field_s_image_info-field_s_image_credits'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_s_image_credits',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'field_s_image_info',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Enter the photographer or organization credits.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'stanford_12_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'stanford_4_col_header' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'stanford_6_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'stanford_8_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'stanford_9_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'stanford_large_scaled' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'stanford_large_square' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '8',
        ),
        'stanford_med_profile' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'stanford_medium_square' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'stanford_small_square' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'stanford_thumbnail_square' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'test' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_s_image_credits',
      'label' => 'Credits',
      'required' => 0,
      'settings' => array(
        'better_formats' => array(
          'allowed_formats' => array(
            'content_editor_text_format' => 'content_editor_text_format',
            'ds_code' => 0,
            'filtered_html' => 0,
            'full_html' => 0,
            'plain_text' => 0,
          ),
          'allowed_formats_toggle' => 1,
          'default_order_toggle' => 0,
          'default_order_wrapper' => array(
            'formats' => array(
              'content_editor_text_format' => array(
                'weight' => '-10',
              ),
              'ds_code' => array(
                'weight' => '12',
              ),
              'filtered_html' => array(
                'weight' => '0',
              ),
              'full_html' => array(
                'weight' => '1',
              ),
              'plain_text' => array(
                'weight' => '10',
              ),
            ),
          ),
        ),
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '2',
        ),
        'type' => 'text_textarea',
        'weight' => '33',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_s_image_info-field_s_image_image'.
  $fields['field_collection_item-field_s_image_info-field_s_image_image'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_s_image_image',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'field_s_image_info',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '6',
        ),
        'stanford_12_col_banner' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '6',
        ),
        'stanford_4_col_header' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'file',
            'image_style' => '4-col-header',
          ),
          'type' => 'image',
          'weight' => '6',
        ),
        'stanford_6_col_banner' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '6-col-banner',
          ),
          'type' => 'image',
          'weight' => '1',
        ),
        'stanford_8_col_banner' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '8-col-banner',
          ),
          'type' => 'image',
          'weight' => '1',
        ),
        'stanford_9_col_banner' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '9-col-banner',
          ),
          'type' => 'image',
          'weight' => '6',
        ),
        'stanford_large_scaled' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'file',
            'image_style' => 'large-scaled',
          ),
          'type' => 'image',
          'weight' => '1',
        ),
        'stanford_large_square' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'large-square',
          ),
          'type' => 'image',
          'weight' => '6',
        ),
        'stanford_med_profile' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'med-profile',
          ),
          'type' => 'image',
          'weight' => '6',
        ),
        'stanford_medium_square' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'file',
            'image_style' => 'med-square',
          ),
          'type' => 'image',
          'weight' => '6',
        ),
        'stanford_small_square' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'file',
            'image_style' => 'sm-square',
          ),
          'type' => 'image',
          'weight' => '6',
        ),
        'stanford_thumbnail_square' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'file',
            'image_style' => 'thmb-square',
          ),
          'type' => 'image',
          'weight' => '1',
        ),
        'test' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'med-profile',
          ),
          'type' => 'image',
          'weight' => '6',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_s_image_image',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '1200x1200',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'image',
        'settings' => array(
          'insert' => 0,
          'insert_class' => '',
          'insert_default' => 'auto',
          'insert_styles' => array(
            'auto' => 'auto',
            'image' => 0,
            'image_12-col-banner' => 0,
            'image_3-col-header' => 0,
            'image_3-col-well-header' => 0,
            'image_3-col-well-profile' => 0,
            'image_4-col-header' => 0,
            'image_6-col-banner' => 0,
            'image_6-col-header' => 0,
            'image_6-col-header-short' => 0,
            'image_8-col-banner' => 0,
            'image_9-col-banner' => 0,
            'image_icon' => 0,
            'image_large' => 0,
            'image_large-landscape' => 0,
            'image_large-profile' => 0,
            'image_large-scaled' => 0,
            'image_large-square' => 0,
            'image_med-landscape' => 0,
            'image_med-landscape-scaled' => 0,
            'image_med-profile' => 0,
            'image_med-profile-scaled' => 0,
            'image_med-square' => 0,
            'image_medium' => 0,
            'image_sm-landscape' => 0,
            'image_sm-square' => 0,
            'image_thmb-landscape' => 0,
            'image_thmb-profile' => 0,
            'image_thmb-square' => 0,
            'image_thumbnail' => 0,
            'link' => 0,
          ),
          'insert_width' => '',
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'image_image',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'field_collection_item-field_s_image_info-field_s_image_source_info'.
  $fields['field_collection_item-field_s_image_info-field_s_image_source_info'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_s_image_source_info',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '0',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'field_s_image_info',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Enter the original name, if changed, and other information to aid in finding the original image.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'stanford_12_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'stanford_4_col_header' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'stanford_6_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'stanford_8_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'stanford_9_col_banner' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'stanford_large_scaled' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'stanford_large_square' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'stanford_med_profile' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'stanford_medium_square' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'stanford_small_square' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'stanford_thumbnail_square' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'test' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'field_collection_item',
      'field_name' => 'field_s_image_source_info',
      'label' => 'Source Info',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '34',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Caption');
  t('Credits');
  t('Enter the original name, if changed, and other information to aid in finding the original image.');
  t('Enter the photographer or organization credits.');
  t('Image');
  t('Optionally enter information to appear as a caption for this image. This text may be trimmed to 180 characters.');
  t('Source Info');

  return $fields;
}
