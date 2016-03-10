<!-- node--list.tpl.php -->
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> node-list"<?php print $attributes; ?>>

  <div class="node-list-heading">
    <a href="<?php print $node_url; ?>" class="node-list-title"><?php print $title; ?></a>
  </div>

  <div class="node-list-created-at">
    <?php print $created_at_short; ?>
  </div>

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    print render($content);
    //xdebug_break();
  ?>
</div>
