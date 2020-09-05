#!/usr/bin/node

exports.converter = function (base) {
  return function (n) {
    if (typeof n === 'string') {
      return parseInt(n, base);
    } else {
      return n.toString(base);
    }
  };
};
