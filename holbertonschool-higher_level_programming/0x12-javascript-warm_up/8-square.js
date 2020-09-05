#!/usr/bin/node
if (process.argv.length === 2) {
  console.log('Missing size');
} else if (isNaN(parseInt(process.argv[2]))) {
  console.log('Missing size');
} else {
  let string = '';
  for (let x = 0; x < process.argv[2]; x++) {
    string = string + 'X';
  }
  for (let x = 0; x < process.argv[2]; x++) {
    console.log(string);
  }
}
