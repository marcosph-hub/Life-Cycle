#pragma once

#include <iostream>
#include <cassert>
//#include "grid.h"

class Grid;
class State {
  protected: //protected
  char value;

  public:
  State();
  State(char new_value);
  
  void setValue(char new_value);
  char getValue();
  
  virtual void neighbors (const Grid& gamegrid, int row, int column) = 0;
  virtual char nextState() = 0;
  friend std::ostream& operator<<(std::ostream &os, State* ext_state);
};

