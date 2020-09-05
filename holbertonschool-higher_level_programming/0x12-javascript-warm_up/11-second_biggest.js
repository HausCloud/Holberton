#!/usr/bin/node
if (process.argv.length === 2 || process.argv.length === 3) {
  console.log(0);
} else {
  const array = [];
  let max = Number.MIN_VALUE;

  for (let x = 0; x < process.argv.length; x++) {
    array[x] = process.argv[2 + x];
  }
  let secondMax = array[0];
  for (let x = 0; x < process.argv.length; x++) {
    if (array[x] > max) {
      max = array[x];
    }
  }
  for (let x = 1; x < process.argv.length; x++) {
    if (array[x] < max && array[x] > secondMax) {
      secondMax = array[x];
    }
  }
  console.log(secondMax);
}
