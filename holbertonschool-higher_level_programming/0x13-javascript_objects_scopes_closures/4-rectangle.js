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

  rotate () {
    const temp = this.height;
    this.height = this.width;
    this.width = temp;
  }

  double () {
    this.height = this.height * 2;
    this.width = this.width * 2;
  }
}

module.exports = Rectangle;
