// ####################################################################################################################
// 
// Code part of CarCluster project by Andrej Rolih. See .ino file more details
// 
// ####################################################################################################################

#include "SimhubGame.h"

SimhubGame::SimhubGame(GameState& game): Game(game) {
}

void SimhubGame::begin() {
}

void SimhubGame::decodeSerialData(JsonDocument& doc) {

  gameState.rpm = doc["rpm"];

  int simGear = doc["gea"];

  if (simGear > 0) {

    gameState.gear = GearState_Auto_D;
    gameState.gearIndex = simGear;

  }
  else if (simGear == 0) {

    gameState.gear = GearState_Auto_N;
    gameState.gearIndex = 0;

  }
  else if (simGear == -1) {

    gameState.gear = GearState_Auto_R;
    gameState.gearIndex = 0;

  }

  gameState.speed = doc["spe"];
  gameState.leftTurningIndicator = doc["lft"];
  gameState.rightTurningIndicator = doc["rit"];
  gameState.coolantTemperature = doc["oit"];
  gameState.doorOpen = (doc["pau"] != 0 || doc["run"] == 0);
  gameState.fuelQuantity = doc["fue"];
  gameState.handbrake = doc["hnb"];
  gameState.absLight = doc["abs"];
  gameState.offroadLight = doc["tra"];
}
