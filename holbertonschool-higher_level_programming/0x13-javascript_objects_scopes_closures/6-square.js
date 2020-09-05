#!/usr/bin/node
const pSquare = require('./5-square');

class Square extends pSquare {
  charPrint (c) {
    if (c) {
      for (let outerLoop = 0; outerLoop < this.height; outerLoop++) {
        let string = '';
	for (let innerLoop = 0; innerLoop < this.width; innerLoop++) {
	  string = string + c;
        }
        console.log(string);
      }
    } else {
      super.print();
    }
  }
}

module.exports = Square;
