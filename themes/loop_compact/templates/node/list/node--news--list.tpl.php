<!-- node--news--list.tpl.php -->
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> node-list node-list-news"<?php print $attributes; ?>>
  <?php if (isset($content['field_origin_url'])): ?>
    <!-- Begin - title -->
    <div class="node-list-heading">
      <?php print render($content['field_origin_url']); ?>
    </div>
    <!-- End - title -->
  <?php endif; ?>

  <div class="node-list-created-at">
    <?php print $created_at_short; ?>
  </div>

</div>
