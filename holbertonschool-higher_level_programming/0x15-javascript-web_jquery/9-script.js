#!/usr/bin/node

$.getJSON('https://fourtonfish.com/hellosalut/?lang=fr', function (data) {
  $('DIV#hello').append(data['hello'])
});
