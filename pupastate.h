#pragma once

#include <iostream>
#include "state.h"
#include "grid.h"

class PupaState: public State {
  private:
  int larvaCounter;
  int otherStateCounter;
  
  public:

    PupaState(char new_value):State(new_value){};
    void neighbors (const Grid& gamegrid, int row, int column);
    void neighborComprobation(char stateValue);
    char nextState();
};