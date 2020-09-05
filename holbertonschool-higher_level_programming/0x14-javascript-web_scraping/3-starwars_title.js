#!/usr/bin/node
const request = require('request');

if (process.argv.length >= 3) {
  request('http://swapi.co/api/films/' + process.argv[2], function (error, response, body) {
    if (!error) {
      const obj = JSON.parse(body);
      for (const key in obj) {
        if (key === 'title') {
          console.log(obj[key]);
        }
      }
    }
  });
}
