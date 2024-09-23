
"use strict";

let RestartController = require('./RestartController.js')
let StopController = require('./StopController.js')
let SetComplianceSlope = require('./SetComplianceSlope.js')
let SetComplianceMargin = require('./SetComplianceMargin.js')
let SetTorqueLimit = require('./SetTorqueLimit.js')
let StartController = require('./StartController.js')
let TorqueEnable = require('./TorqueEnable.js')
let SetSpeed = require('./SetSpeed.js')
let SetCompliancePunch = require('./SetCompliancePunch.js')

module.exports = {
  RestartController: RestartController,
  StopController: StopController,
  SetComplianceSlope: SetComplianceSlope,
  SetComplianceMargin: SetComplianceMargin,
  SetTorqueLimit: SetTorqueLimit,
  StartController: StartController,
  TorqueEnable: TorqueEnable,
  SetSpeed: SetSpeed,
  SetCompliancePunch: SetCompliancePunch,
};
