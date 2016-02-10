# Loop Changelog

## Loop v1.3.0

* Install PPS module (panels pane suggestions) for easier theming.
* Rename all $green% SCSS variables to $brand%
* Added loop_compact theme - changes (no overrides made) is located inside sass/compact-additions folder. The file structure has been kept.

## Loop v1.2.0

* Code clean-up and upgrade of Drupal and contrib modules
  * All code is now consolidated into a single repository (https://github.com/os2loop/profile/)
* Optional display of breadcrumb
* The "Log out" button can be hidden depending on how the user has signed in (regular login or via SAML)
* Configurable theme
  * Header background color
  * Term background color
  * Keyword background color
* "Send to a friend": Send a question to another Loop user
* New content type "Instructions"
* "Profession" is optional on user profile
* Optional use of rich text (wysiwyg) editor in posts and comments
