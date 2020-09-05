#!/usr/bin/node

class Rectangle {
  constructor (w, h) {
    if (w > 0 && h > 0) {
      this.width = w;
      this.height = h;
    }
  }

  print () {
    for (let outerLoop = 0; outerLoop < this.height; outerLoop++) {
      let string = '';
      for (let innerLoop = 0; innerLoop < this.width; innerLoop++) {
        string = string + 'X';
      }
      console.log(string);
    }
  }
}

module.exports = Rectangle;
