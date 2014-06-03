<?php

/**
 * @file
 * template.php
 */

function webcrafttheme_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'wc_ratings_node_form') {
    //  add a wrapper around our title
    //  add a wrapper around the ratings radio button
    $form["title"]["#prefix"] = "<div class='col-sm-3'>";
    $form["title"]["#suffix"] = "</div>";

    array_push($form["field_blend"]["#attributes"]["class"], "col-sm-3");

    $form["field_ratings"]["und"]["#required"] = false;
    $form["field_ratings"]["und"]["#prefix"] = "<div class='pull-left'>";
    $form["field_ratings"]["und"]["#suffix"] = "</div>";
    
    array_push($form["body"]["#attributes"]["class"], "col-sm-3");
 
    $form['actions']['submit']['#value'] = t('Add rating');
  
  }
  

  dsm($form_id);
  dsm($form);
}