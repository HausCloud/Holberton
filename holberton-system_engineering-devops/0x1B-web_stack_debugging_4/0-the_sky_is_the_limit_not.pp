# Fix nginx server that sets ulimit too low
file { '/etc/default/nginx':
  ensure  => file,
  content => 'ULIMIT="-n 4096"',
  notify  => Service['nginx'],
  }

service { 'nginx':
  ensure => 'running',
  enable => true
  }
