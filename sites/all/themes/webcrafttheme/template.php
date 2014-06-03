<?php

/**
 * @file
 * template.php
 */

function webcrafttheme_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'wc_ratings_node_form') {
    $form['field_ratings']['und']['#title'] = 'Clever phrase';
    $form['field_ratings']['und']['#required'] = false;
    $form['field_ratings']['und']['#prefix'] = "<div class='col-sm-2'>";
    $form['field_ratings']['und']['#suffix'] = "</div>";
    //add wrapper around title
    //add wrapper around ratings radio buttons
  }
  dsm($form_id);
  dsm($form);
}