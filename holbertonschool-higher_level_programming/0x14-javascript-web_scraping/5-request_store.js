#!/usr/bin/node

const request = require('request');
const fs = require('fs');

if (process.argv.length >= 4) {
  request(process.argv[2]).pipe(fs.createWriteStream(process.argv[3]));
}
