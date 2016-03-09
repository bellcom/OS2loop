<!-- node--link-collection--list.tpl.php -->
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> node-list node-list-link-collection"<?php print $attributes; ?>>
  <?php if (isset($content['field_url'])): ?>
    <!-- Begin - link -->
    <div class="node-list-link-collection-link">
      <?php print render($content['field_url']); ?>
    </div>
    <!-- End - link -->
  <?php endif; ?>

</div>
