<?php

/**
 * @file
 * Admin page callbacks for the Social Mediator module
 */

function social_mediator_admin($form, $form_state, $lang = NULL) {

  $form = array();


  $form['consumer_key'] = array(
    '#type' => 'text',
    '#title' => t('Consumer Key'),
    '#description' => t('Enter your Consumer Key'),
  );

  $form['consumer_secret'] = array(
    '#type' => 'text',
    '#title' => t('Secret Key'),
    '#description' => t('Enter your Secret Key'),
  );

 $form['oauth_access_token'] = array(
    '#type' => 'text',
    '#title' => t('OAuth Access Token'),
    '#description' => t('Enter your OAuth Access Token'),
  );

  $form['oauth_access_token_secret'] = array(
    '#type' => 'text',
    '#title' => t('OAuth Access Token'),
    '#description' => t('Enter your OAuth Access Secret Token'),
  );

  return system_settings_form($form);
}