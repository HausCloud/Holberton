#!/usr/bin/env node
const readline = require('readline');

let heart = {suit:'Hearts', face:'', value:0}, diamond = {suit:'Diamonds', face:'', value:0},
spade = {suit:'Spades', face:'', value:0}, club = {suit:'Clubs', face:'', value:0}

let user = {
  name: '',
  card1: 0, card2: 0,
  card3: 0, card4: 0,
  card5: 0
}

let deck = []
let face_arr = ['2', '3', '4', '5', '6', '7', '8', '9', '10', 'Jack', 'Queen', 'King', 'Ace']

/* Random number generator */
function rand_num(min, max) {
  return parseInt(Math.random() * (max - min) + min);
}

/* Card constructor */
function constructor(obj, face) {
  obj.face = face

  if (parseInt(face)) {
    obj.value = parseInt(face)
  } else if (face === 'Ace') {
    obj.value = 11
  } else {
    obj.value = 10
  }

  return obj
}

/* Silly copy object function */
function copy(obj) {
  var cp = {};

  for (var o in obj) {
    cp[o] = obj[o];
  }

  return cp
}

/* Point calculator */
function point_counter(obj) {
  let total = 0
  let num_of_aces = 0

  for (var key in obj) {
    if (obj.hasOwnProperty(key)) {
      for (var x in obj[key]) {
      if (x === 'value') {
        total += obj[key][x]
	} else if (x === 'face' && obj[key][x] === 'Ace') {
	      num_of_aces += 1
	      }
      }
    }
  }
  while (num_of_aces != 0 && total >= 22) {
    total -= 10
    num_of_aces -= 1
  }

    return total
}

/* Gives a card to the player */
function add_card(obj) {
  if (obj.card3 != 0 && obj.card4 != 0 && obj.card5 != 0) {
    return 1
  }

  if (obj.card3 == 0) {
    obj.card3 = deck[rand_num(0, 52)]
    console.log('You\'re dealt a %s of %s', obj.card3.face, obj.card3.suit)
    if (point_counter(obj) >= 22) {
      return -1
    }
  } else if (obj.card4 == 0) {
    obj.card4 = deck[rand_num(0, 52)]
    console.log('You\'re dealt a %s of %s', obj.card4.face, obj.card4.suit)
    if (point_counter(obj) >= 22) {
      return -1
    }
  } else if (obj.card5 == 0) {
    obj.card5 = deck[rand_num(0, 52)]
    console.log('You\'re dealt a %s of %s', obj.card5.face, obj.card5.suit)
    if (point_counter(obj) >= 22) {
      return -1
    }
  }

  return 0
}

/* Checks if an integer array has duplicates */
function check_dups(integer_arr){
  return new Set(integer_arr).size !== integer_arr.length
}

/* Determines the winner(s) */
function end_game(list_players) {
  let list_totals = [point_counter(list_players[0]), point_counter(list_players[1]), point_counter(list_players[2]), point_counter(list_players[3]), point_counter(list_players[4])]
  let max = list_totals.reduce(function(a, b) {
    return Math.max(a, b)
    })
  let only_max = check_dups(list_totals)
  /*Checks to see if dealer did not bust and is the highest hand, dealer wins */ 
  if (only_max === true && list_totals[4] <= 21 && list_totals[4] === max) {
    console.log('The dealer devilishly smiles and reveals ..')
    for (var key in list_players[4]) {
      if (key != 'name' && list_players[4][key] != 0) {
        console.log('A %s of %s.', list_players[4][key].face, list_players[4][key].suit)
      }
    }
    console.log('He swipes your soul')
    /* If dealer busts, everyone <= 21 wins */
  } else if (list_totals[4] > 21) {
      for (let idx = 0; idx < 4; idx++) {
        if (list_totals[idx] <= 21) {
	    console.log()
          console.log('%s won! They reveal ..', list_players[idx].name)
	    console.log()
        }
	for (var key in list_players[idx]) {
	    if (key != 'name' && list_players[idx][key] != 0) {
	          console.log('A %s of %s.', list_players[idx][key].face, list_players[idx][key].suit)
	        }
	  }
      }
    /* If players are <= 21 and beat the dealer, they win */  
  } else {
    for (let idx = 0; idx < 4; idx++) {
      if (list_totals[idx] <= 21 && list_totals[idx] > list_totals[4]) {
	console.log()
        console.log('%s won! They reveal ..', list_players[idx].name)
	console.log()
	for (var key in list_players[idx]) {
	    if (key != 'name' && list_players[idx][key] != 0) {
	          console.log('A %s of %s.', list_players[idx][key].face, list_players[idx][key].suit)
	        }
	  }
	console.log()
      }
    }
  }
}

/* Deck creation */
for (let idx = 0; idx < 13; idx += 1) {
  deck.push(copy(constructor(heart, face_arr[idx])))
}
for (let idx = 0; idx < 13; idx += 1) {
  deck.push(copy(constructor(diamond, face_arr[idx])))
}
for (let idx = 0; idx < 13; idx += 1) {
  deck.push(copy(constructor(spade, face_arr[idx])))
}
for (let idx = 0; idx < 13; idx += 1) {
  deck.push(copy(constructor(club, face_arr[idx])))
}

/* Create each "player" and set their names */
let Bot1 = copy(user)
Bot1.name = 'Bot 1'
let Bot2 = copy(user)
Bot2.name = 'Bot 2'
let Bot3 = copy(user)
Bot3.name = 'Bot 3'
let Dealer = copy(user)
Dealer.name = 'dealer'
let player = copy(user)
player.name = 'player'

/* Create array of players */
let all_players = [Bot1, Bot2, Bot3, player, Dealer]

// Give everyone initial cards
for (let idx = 0; idx < 5; idx++) {
  all_players[idx].card1 = deck[rand_num(0, 52)]
  all_players[idx].card2 = deck[rand_num(0, 52)]
}


/* Give bots and dealer more cards if their total is less than 16 */
for (let idx = 0; idx < 5; idx++) {
  if (idx === 3) {
    idx++;
  }
  if (point_counter(all_players[idx]) <= 16) {
    all_players[idx].card3 = deck[rand_num(0, 52)]
  }
  if (point_counter(all_players[idx]) <= 16) {
    all_players[idx].card4 = deck[rand_num(0, 52)]
  }
  if (point_counter(all_players[idx]) <= 16) {
    all_players[idx].card5 = deck[rand_num(0, 52)]
  }
}

console.log('You\'re dealt a %s of %s and a %s of %s', player.card1.face, player.card1.suit, player.card2.face, player.card2.suit)
console.log('The dealer reveals a %s of %s', Dealer.card1.face, Dealer.card1.suit)

/* Initiate readline */
var rl = readline.createInterface(process.stdin, process.stdout);
rl.setPrompt('\nThe dealer asks: Do you wish to hit or stay?\n')
rl.prompt()

/* Take user input whether to hit or stay */
rl.on('line', function (line) {
  if (line.toLowerCase() === 'stay' || line.toLowerCase() === 'yeet') {
    console.log()
    console.log()
    end_game(all_players)
    rl.close();
  } else if (line.toLowerCase() === 'hit' || line.toLowerCase() === 'im gucci') {
    let x = add_card(player)
    if (x === -1) {
      console.log('Ouch, you busted!')
      console.log()
      console.log()
      end_game(all_players)
      rl.close()
    }
    if (x === 1) {
      console.log()
      console.log()
      end_game(all_players)
      rl.close()
    }
  } else if (line.toLowerCase() === 'hit me') {
    console.log()
    console.log('You end up in the hospital')
    console.log()
    rl.close()
  }

  rl.prompt()
}).on('close',function(){
  process.exit(0);
});
