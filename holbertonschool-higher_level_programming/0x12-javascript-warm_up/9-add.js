#!/usr/bin/node
function add (a, b) {
  console.log(parseInt(a) + parseInt(b));
}
if (process.argv.length === 2) {
  console.log(NaN);
} else if (process.argv.length === 3) {
  console.log(NaN);
} else {
  add(process.argv[2], process.argv[3]);
}
