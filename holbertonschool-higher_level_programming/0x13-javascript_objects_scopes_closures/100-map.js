#!/usr/bin/node
const aList = require('./100-data').list;

const newList = aList.map(function (num, index) {
  return num * index;
});

console.log(aList);
console.log(newList);
