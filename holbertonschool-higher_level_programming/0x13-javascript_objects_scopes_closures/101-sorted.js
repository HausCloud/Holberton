#!/usr/bin/node
const aDict = require('./101-data').dict;

const someDict = {};
const array = [];

for (const key in aDict) {
  array.push(aDict[key]);
}

const mySet = new Set(array);
const myArr = new Array(...mySet);

for (let idx = 0; idx < myArr.length; idx++) {
  const arr = [];
  for (const key in aDict) {
    if (myArr[idx] === aDict[key]) {
      arr.push(key);
    }
  }
  someDict[idx + 1] = arr;
}

console.log(someDict);
