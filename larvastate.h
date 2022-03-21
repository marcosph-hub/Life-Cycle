#pragma once

#include <iostream>
#include "state.h"
#include "grid.h"

class LarvaState: public State {
  private:
  int larvaCounter;
  int eggCounter;
  int pupaCounter;
  int adultCounter;
  
  public:
    LarvaState(char new_value):State(new_value){};
    void neighbors (const Grid& gamegrid, int row, int column);
    void neighborComprobation(char stateValue);
    char nextState();
};