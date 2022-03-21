#pragma once

#include <iostream>
#include "state.h"
#include "grid.h"

class EggState: public State {
  private:
  int larvaCounter;
  int eggCounter;
  
  public:
    EggState(char new_value):State(new_value){};
    void neighbors (const Grid& gamegrid, int row, int column);
    char nextState();
    void neighborComprobation(char stateValue);

};