<?php
/**
 * @file
 * mez_search.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mez_search_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer custom search'.
  $permissions['administer custom search'] = array(
    'name' => 'administer custom search',
    'roles' => array(),
    'module' => 'custom_search',
  );

  // Exported permission: 'administer custom search blocks'.
  $permissions['administer custom search blocks'] = array(
    'name' => 'administer custom search blocks',
    'roles' => array(),
    'module' => 'custom_search_blocks',
  );

  // Exported permission: 'administer search'.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(),
    'module' => 'search',
  );

  // Exported permission: 'search content'.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use advanced search'.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: 'use custom search'.
  $permissions['use custom search'] = array(
    'name' => 'use custom search',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'custom_search',
  );

  // Exported permission: 'use custom search blocks'.
  $permissions['use custom search blocks'] = array(
    'name' => 'use custom search blocks',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'custom_search_blocks',
  );

  return $permissions;
}