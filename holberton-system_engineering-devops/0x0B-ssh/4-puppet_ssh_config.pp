# Changes ssh_config
file_line { 'change pass':
ensure  => present,
path    => '/etc/ssh/ssh_config',
line    => 'PasswordAuthentication no',
match   => '^.?.*PasswordAuthentication yes$',
replace => true,
multiple => false,
}

file_line { 'put private key':
ensure             => present,
path               => '/etc/ssh/ssh_config',
line               => 'IdentityFile ~/.ssh/holberton',
match              => '^.*IdentityFile ~/.ssh/holberton$',
multiple           => false,
append_on_no_match => true,
}
