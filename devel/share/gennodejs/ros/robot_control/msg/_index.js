
"use strict";

let tactile = require('./tactile.js');
let newtactile = require('./newtactile.js');
let coord = require('./coord.js');
let state = require('./state.js');
let fsrInput = require('./fsrInput.js');
let rigid = require('./rigid.js');
let contact = require('./contact.js');
let accelerometr = require('./accelerometr.js');

module.exports = {
  tactile: tactile,
  newtactile: newtactile,
  coord: coord,
  state: state,
  fsrInput: fsrInput,
  rigid: rigid,
  contact: contact,
  accelerometr: accelerometr,
};
