#!/usr/bin/node
const request = require('request');

if (process.argv.length >= 3) {
  request(process.argv[2], function (error, response, body) {
    if (!error) {
      console.log('code: %s', response.statusCode);
    }
  });
}
