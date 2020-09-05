#!/usr/bin/node

let log = 0;
exports.logMe = function (item) {
  if (item) {
    console.log('%d: %s', log, item);
    log += 1;
  }
};
