# Fix config file wp-settings
exec {'Replace line':
  command  => 'sed -ri "s,phpp,php," /var/www/html/wp-settings.php',
  provider => shell,
}