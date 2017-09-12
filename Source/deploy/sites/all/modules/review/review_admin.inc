<?php
/**
 * @file
 * News Configuration form.
 */

/**
 * Configuration form callback.
 *
 * @ingroup form.
 */
function review_configuration_form($form, &$form_state) {
  $form['review_popup_current_duration'] = array(
    '#required' => '1',
    '#description' => t('The number of seconds after which review popup will appear to user.'),
    '#weight' => '1',
    '#type' => 'textfield',
    '#title' => t('Current duration (seconds):'),
    '#default_value' => variable_get('review_popup_current_duration'),
  );

  // Form submit.
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
    '#submit' => array(
      'review_configuration_form_submit',
    ),
    '#weight' => 100,
  );


  return $form;
}