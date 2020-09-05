#!/usr/bin/node
const request = require('request');

if (process.argv.length >= 3) {
  let numAppearances = 0;
  request(process.argv[2], function (error, response, body) {
    if (!error) {
      const obj = JSON.parse(body);
      for (const key in obj.results) {
        for (let idx = 0; idx < obj.results[key].characters.length; idx++) {
          if (obj.results[key].characters[idx].endsWith('18/')) {
            numAppearances++;
          }
        }
      }
    }
    console.log(numAppearances);
  });
}
