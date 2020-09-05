#!/usr/bin/env bash
# Set up server for web_static deployment
apt-get update
command -v nginx >/dev/null 2>&1 || apt-get -y install nginx
if [ -d /data/ ]; then :; else mkdir /data/; fi
if [ -d /data/web_static/ ]; then :; else mkdir /data/web_static/; fi
if [ -d /data/web_static/releases/ ]; then :; else mkdir /data/web_static/releases; fi
if [ -d /data/web_static/shared/ ]; then :; else mkdir /data/web_static/shared; fi
if [ -d /data/web_static/releases/test/ ]; then :; else mkdir /data/web_static/releases/test/; fi
path=/data/web_static/releases/test/index.html
symcheck=/data/web_static/current
replace="listen [::]:80 default_server ipv6only=on;\n\n\tlocation /hbnb_static {\n\t\talias /data/web_static/current/;\n\t}\n\n"
touch "$path" && echo -e "<!doctype html>\n\n<head>\n<title>Some title</title>\n</head>\n<body>\n<h1>Some page</h1>\n</body>\n</html>" > "$path"
if [ -L "$symcheck" ]; then unlink "$symcheck" && ln -s /data/web_static/releases/test/ "$symcheck"; else ln -s /data/web_static/releases/test/ "$symcheck"; fi
chown -R ubuntu:ubuntu /data/
sed -i -E "s,listen \[::]:80.+;,$replace," /etc/nginx/sites-enabled/default
service nginx restart
