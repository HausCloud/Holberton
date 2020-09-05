#!/usr/bin/node

exports.nbOccurences = function (list, searchElement) {
  let occurences = 0;

  for (let idx = 0; idx < list.length; idx++) {
    if (Array.isArray(list[idx])) {
      for (let idx2 = 0; idx2 < list[idx2].length; idx2++) {
        if (list[idx][idx2] === searchElement) {
	  occurences += 1;
        }
      }
    } else {
      if (list[idx] === searchElement) {
        occurences += 1;
      }
    }
  }

  return occurences;
};
