#pragma once

#include <iostream>
#include <cassert>
#include "state.h"
#include "bordestate.h"
#include "adultstate.h"
#include "deadstate.h"
#include "pupastate.h"
#include "larvastate.h"
#include "eggstate.h"


class Grid;
class Cell {
  private:
  State* state;
  char form;
  int XPosition;
  int YPosition;



  public:
  Cell();
  Cell(State* new_state,int XPos, int YPos);

  void setState(State* new_state);
  void setForm(char new_form);
  void setXPosition(int newXPos);
  void setYPosition(int newYPos);
  void setAliveNeighbors(int extAliveNeighbors);

  State* getState();
  char getForm();
  int getXPosition();
  int getYPosition();
  int getAliveNeighbors();
  int getEggCounter();
  int getLarvaCounter();
  int getAdultCounter();

  State* charToState(char stateValue);
  void neighbours(const Grid& gamegrid);
  void updateCell();
  friend std::ostream& operator<<(std::ostream &os, Cell ext_cell);

};