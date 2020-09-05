#!/usr/bin/node
function factorialRecurse (x) {
  if (x === 0) {
    return 1;
  }
  return x * factorialRecurse(x - 1);
}

if (process.argv.length === 2) {
  console.log(1);
} else if (isNaN(process.argv[2])) {
  console.log(1);
} else {
  console.log(factorialRecurse(parseInt(process.argv[2])));
}
