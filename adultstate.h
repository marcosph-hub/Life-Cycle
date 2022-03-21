#pragma once

#include <iostream>
#include "grid.h"
#include "state.h"

class AdultState: public State {
  private:
  int adultCounter;
  int otherStateCounter;
  
  public:
    AdultState(char new_value):State(new_value){};
    void neighbors (const Grid& gamegrid, int row, int column);
    char nextState();
};