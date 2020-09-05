# Puppet manifest to kill a process called killmenow
exec { 'kill a process':
    command => 'pkill killmenow',
    path    => '/usr/bin:/usr/sbin:/bin',
}