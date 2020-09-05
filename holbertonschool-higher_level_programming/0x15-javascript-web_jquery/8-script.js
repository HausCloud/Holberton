#!/usr/bin/node

$.getJSON('https://swapi.co/api/films/?format=json', function (data) {
  for (const item in data['results']) {
    $('UL#list_movies').append('<li>' + data['results'][item]['title'] + '</li>')
  }
});
