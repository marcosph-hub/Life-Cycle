#pragma once

#include <iostream>
#include "state.h"
#include "grid.h"


class DeadState: public State {
  private:
  int stateCounter;

  public:
    DeadState(char new_value):State(new_value){};
    void neighbors (const Grid& gamegrid, int row, int column);
    char nextState();
};