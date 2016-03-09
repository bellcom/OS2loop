<?php
/**
 * @file
 * Template for a 3 column panel layout.
 *
 * This template provides a very simple "one column" panel display layout.
 *
 * Variables:
 * - $id: An optional CSS id to use for the layout.
 * - $content: An array of content, each item in the array is keyed to one
 *   panel of the layout. This layout supports the following sections:
 *   $content['middle']: The only panel in the layout.
 */
?>
<?php if (!empty($content['alpha']) || !empty($content['beta'])): ?>
  <div class="layout-frontpage-compact">
    <div class="layout--inner">

      <div class="layout-element-alpha">

        <?php if (!empty($content['alpha'])): ?>
          <?php print $content['alpha']; ?>
        <?php endif; ?>

        <div class="alpha-wrapper">

          <?php if (!empty($content['alpha-1'])): ?>
            <div class="layout-element-alpha-1">
              <?php print $content['alpha-1']; ?>
            </div>
          <?php endif; ?>

          <?php if (!empty($content['alpha-2'])): ?>
            <div class="layout-element-alpha-2">
              <?php print $content['alpha-2']; ?>
            </div>
          <?php endif; ?>

        </div>

        <?php if (!empty($content['alpha-3'])): ?>
          <div class="layout-element-alpha-3">
            <?php print $content['alpha-3']; ?>
          </div>
        <?php endif; ?>

      </div>

      <?php if (!empty($content['beta'])): ?>
        <div class="layout-element-beta">
          <?php print $content['beta']; ?>
        </div>
      <?php endif; ?>
    </div>

  </div>
<?php endif; ?>
