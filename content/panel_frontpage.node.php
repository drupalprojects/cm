array(
  'nid' => '14',
  'type' => 'panel',
  'language' => '',
  'uid' => '1',
  'status' => '1',
  'created' => '1292046323',
  'changed' => '1292046323',
  'comment' => '0',
  'promote' => '0',
  'moderate' => '0',
  'sticky' => '0',
  'tnid' => '0',
  'translate' => '0',
  'vid' => '25',
  'revision_uid' => '1',
  'title' => 'frontpage',
  'body' => '<p>stub page</p>',
  'teaser' => '<p>stub page</p>',
  'log' => '',
  'revision_timestamp' => '1292046323',
  'format' => '2',
  'name' => 'admin',
  'picture' => '',
  'data' => 'a:1:{s:13:\"form_build_id\";s:37:\"form-4d44350a98a4a028cff6eb8b979ec0ba\";}',
  'panels_node' => array(
    'nid' => '14',
    'css_id' => '',
    'did' => '1',
    'pipeline' => 'standard',
  ),
  'path' => 'content/frontpage',
  'last_comment_timestamp' => '1292046323',
  'last_comment_name' => NULL,
  'comment_count' => '0',
  'taxonomy' => array(),
  'files' => array(),
  'cpn' => FALSE,
  'page_title' => FALSE,
  'nodewords' => array(
    'metatags' => array(),
  ),
  'menu' => array(
    'link_title' => '',
    'mlid' => 0,
    'plid' => 0,
    'menu_name' => 'primary-links',
    'weight' => 0,
    'options' => array(),
    'module' => 'menu',
    'expanded' => 0,
    'hidden' => 0,
    'has_children' => 0,
    'customized' => 0,
    'parent_depth_limit' => 8,
  ),
  'export_display' => '$display = new panels_display;
$display->layout = \'twocol_stacked\';
$display->layout_settings = array();
$display->panel_settings = array(
  \'style_settings\' => array(
    \'default\' => NULL,
    \'top\' => NULL,
    \'left\' => NULL,
    \'right\' => NULL,
    \'bottom\' => NULL,
  ),
);
$display->cache = array();
$display->title = \'\';
$display->content = array();
$display->panels = array();
  $pane = new stdClass;
  $pane->pid = \'new-1\';
  $pane->panel = \'left\';
  $pane->type = \'node\';
  $pane->subtype = \'node\';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    \'nid\' => \'1\',
    \'links\' => 1,
    \'leave_node_title\' => 0,
    \'identifier\' => \'\',
    \'build_mode\' => \'teaser\',
    \'link_node_title\' => 0,
    \'override_title\' => 0,
    \'override_title_text\' => \'\',
  );
  $pane->cache = array();
  $pane->style = array(
    \'settings\' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $display->content[\'new-1\'] = $pane;
  $display->panels[\'left\'][0] = \'new-1\';
  $pane = new stdClass;
  $pane->pid = \'new-2\';
  $pane->panel = \'top\';
  $pane->type = \'block\';
  $pane->subtype = \'views-Rotator-block_1\';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    \'override_title\' => 1,
    \'override_title_text\' => \'\',
  );
  $pane->cache = array();
  $pane->style = array(
    \'settings\' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $display->content[\'new-2\'] = $pane;
  $display->panels[\'top\'][0] = \'new-2\';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = \'0\';
',
  '#_export_node_encode_object' => '1',
)
