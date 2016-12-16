<!-- Begin - outer wrapper -->
<div class="outer-wrapper">

    <!-- Begin - sidebar left -->
    <div class="sidebar sidebar-left">

        <!-- Begin - inner wrapper -->
        <div class="sidebar-inner-wrapper">

            <!-- Begin - logo -->
            <div class="sidebar-logo">
                <a href="<?php print $front_page; ?>" class="sidebar-logo-link">
                    <img src="<?php print $path_img . '/logo-sidebar-wide.png'; ?>" class="sidebar-logo-image sidebar-logo-image-wide" alt="<?php print $site_name . t(' logo'); ?>" />
                    <img src="<?php print $path_img . '/logo-sidebar-narrow.png'; ?>" class="sidebar-logo-image sidebar-logo-image-narrow" alt="<?php print $site_name . t(' logo'); ?>" />
                </a>
            </div>
            <!-- End - logo -->

          <?php if (isset($sidebar_primary)): ?>
              <!-- Begin - navigation -->
            <?php print render($sidebar_primary); ?>
              <!-- End - navigation -->
          <?php endif; ?>

          <?php if (isset($sidebar_secondary)): ?>
              <!-- Begin - navigation -->
            <?php print render($sidebar_secondary); ?>
              <!-- End - navigation -->
          <?php endif; ?>

        </div>
        <!-- End - inner wrapper -->

    </div>
    <!-- End - sidebar left -->

    <!-- Begin - inner wrapper -->
    <div class="inner-wrapper" role="document">

        <!-- Begin - simple navigation -->
        <nav class="simple-navigation">

            <!-- Begin - button list -->
            <ul class="simple-navigation-list simple-navigation-list-left">

                <!-- Begin - button -->
                <li class="simple-navigation-button">
                    <a href="#" data-sidebar-toggle="left">
                        <span class="fa icon fa-bars"></span> </a>
                </li>
                <!-- End - button -->

            </ul>
            <!-- End - button list -->

            <!-- Begin - logo -->
            <a href="<?php print $front_page; ?>" class="simple-navigation-logo-link">
                <img src="<?php print $path_img . '/logo-simple-navigation.png'; ?>" class="simple-navigation-logo-image" alt="<?php print t('intranet.fredericia.dk logo'); ?>" />
            </a>
            <!-- End - logo -->

        </nav>
        <!-- End - simple navigation -->

        <!-- Begin - content -->
        <div class="content">

            <?php if (isset($page['pagetop'])): ?>
              <div class="section">
                <div class="layout-frontpage">
                    <?php print render($page['pagetop']); ?>
                </div>
              </div>
            <?php endif; ?>

            <?php if (isset($search)): ?>
              <div class="typeahead-block">
                <div class="typeahead-block--wrapper">
                  <?php print render($search['content']); ?>
                </div>
              </div>
            <?php endif; ?>

            <?php if ($breadcrumb): ?>
              <div id="breadcrumb"><?php print $breadcrumb; ?></div>
            <?php endif; ?>

            <?php if (user_is_anonymous()): ?>
              <div class="layout-no-wrapper">
                <div class="layout--inner">
                  <?php if ($messages): ?>
                    <?php print $messages; ?>
                  <?php endif; ?>
                  <?php print render($page['content']); ?>
                </div>
              </div>
            <?php elseif (isset($no_panel)): ?>
              <div class="<?php print $layout_class;?>">
                <div class="layout--inner">
                  <?php print render($page['header']); ?>
                  <?php if ($messages): ?>
                    <?php print $messages; ?>
                  <?php endif; ?>
                  <?php if (isset($loop_user_my_content)): ?>
                    <div class="layout-element-alpha">
                      <?php if ($tabs): ?>
                        <aside class="block-user-links">
                          <div class="block-module--inner">
                            <h2 class="block-module--user-links-header"><?php print t('My account'); ?></h2>
                            <?php print render($tabs); ?>
                          </div>
                        </aside>
                        <?php print render($loop_user_my_content['content']); ?>
                        <?php if (isset($user_completion_block)): ?>
                          <?php print render($user_completion_block['content']); ?>
                        <?php endif; ?>
                      <?php endif; ?>
                    </div>
                  <div class="layout-element-beta">
                    <h1><?php print t('User edit'); ?></h1>
                    <?php if ($action_links): ?><ul class="action-links"><?php print render($action_links); ?></ul><?php endif; ?>
                    <?php print render($page['content']); ?>
                  </div>
                  <?php else: ?>
                    <?php print render($page['content']); ?>
                  <?php endif; ?>
                </div>
              </div>
            <?php else: ?>
              <?php if ($messages): ?>
                <?php print $messages; ?>
              <?php endif; ?>
              <?php print render($page['content']); ?>
            <?php endif;?>

        </div>
        <!-- End - content -->

        <footer class="footer">
            <div class="section">
                <div class="footer-container">
                    <div class="footer-logo">
                        <img src="<?php print $path_img; ?>/logo-footer.png" alt="">
                    </div>

                    <div class="footer-content">
                        <p>Intranettet</p>
                        <p>Center for HR, Økonomi & IT</p>
                        <p>IT & Digitalisering</p>
                    </div>
                </div>

              <?php print render($page['footer']); ?>
            </div>
        </footer>

    </div>
    <!-- End - inner wrapper -->

</div>
<!-- End - outer wrapper -->
