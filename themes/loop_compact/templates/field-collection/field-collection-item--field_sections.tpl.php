<!-- Begin - accordion -->
<section class="loop-accordion <?php echo $classes; ?>"<?php echo $attributes; ?>>

  <?php if (isset($content['field_title'])): ?>
    <!-- Begin - title -->
    <div class="loop-accordion-heading">
      <div class="loop-accordion-heading-title">
        <?php echo render($content['field_title']); ?>
      </div>
    </div>
    <!-- End - title -->
  <?php endif; ?>

  <?php if (isset($content['field_text'])): ?>
    <!-- Begin - body -->
    <div class="loop-accordion-body">
      <?php echo render($content['field_text']); ?>
    </div>
    <!-- End - body -->
  <?php endif; ?>

</section>
<!-- End - accordion -->