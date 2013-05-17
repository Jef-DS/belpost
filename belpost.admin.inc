<?php

/**
 * @file
 * Defines Form for Belpost entries.
 */

/**
 * Form function for belpost editing.
 * 
 * @param array $form
 *   A form array
 * @param array $form_state
 *   A formstate array
 * @param Object $entity
 *   A belpost entity
 * 
 * @return array
 *   A form array
 */
function belpost_form($form, $form_state, $entity = NULL) {
  $form['code'] = array(
    '#title' => t('Postal code'),
    '#description' => t('A Belgian postal code'),
    '#type' => 'textfield',
    '#default_value' => isset($entity->code) ? $entity->code : '',
    '#required' => TRUE,
  );
  $form['city'] = array(
    '#title' => t('City'),
    '#description' => t('A Belgian city'),
    '#type' => 'textfield',
    '#default_value' => isset($entity->city) ? $entity->city : '',
    '#required' => TRUE,
  );
  $form['actions'] = array(
    '#type' => 'actions',
    'submit' => array(
      '#type' => 'submit',
      '#value' => isset($entity->id) ? t('Update') : t('Save'),
    ),
    // Define cancel callback 'belpost_form_cancel' for the cancel button.
    'cancel' => array(
      '#type' => 'button',
      '#value' => t('Cancel'),
      '#executes_submit_callback' => TRUE,
      '#submit' => array('belpost_form_cancel'),
    ),
  );
  return $form;
}

/**
 * Cancel callback for belpost_form.
 * 
 * @param array $form
 *   The form array
 * @param array $form_state
 *   The form_state array
 */
function belpost_form_cancel($form, &$form_state) {
  $form_state['redirect'] = 'admin/belpost';
}

/**
 * Submit callback for belpost_form.
 * 
 * @param array $form
 *   The form array
 * @param array $form_state
 *   The form_state array
 */
function belpost_form_submit($form, &$form_state) {
  $entity = entity_ui_form_submit_build_entity($form, $form_state);
  $entity->save();
  drupal_set_message(t('@name has been saved.', array('@name' => $entity->city)));
  $form_state['redirect'] = 'admin/belpost';
}