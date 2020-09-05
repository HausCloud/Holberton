#!/usr/bin/node
if (process.argv.length === 2 || isNaN(parseInt(process.argv[2]))) {
  console.log('Missing number of occurences');
} else {
  for (let x = 0; x < process.argv[2]; x++) {
    console.log('C is fun');
  }
}
