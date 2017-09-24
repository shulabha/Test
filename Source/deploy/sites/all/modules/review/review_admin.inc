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

function review_block_link_callback() {
  ctools_include('ajax');
  ctools_include('modal');

  $build['paragraph'] = array(
    '#prefix' => '<p>',
    '#suffix' => '</p>',
    '#markup' => t('This is a popup'),
  );

    $text = t('Click here');
    $dest = '';
    $alt = t('Please Click here');

    $link = ctools_modal_text_button($text, $dest, $alt);

    $build['popup_link'] = array(
      '#markup' => $link,
    );

    return render($build);
}