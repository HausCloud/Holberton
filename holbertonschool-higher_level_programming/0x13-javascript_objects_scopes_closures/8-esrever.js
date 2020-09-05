#!/usr/bin/node

exports.esrever = function (list) {
  const rArray = [list.length];

  for (let idx = list.length - 1, idx2 = 0; idx >= 0; idx--, idx2++) {
    rArray[idx2] = list[idx];
  }

  return rArray;
};
