#include "cell.h"
#include "grid.h"
#define RR "\e[1;31m"
#define NC "\e[0m"
#define GRN "\e[0;92m"
#define BLK "\e[40m"

Cell::Cell() {/*
  
  State* defaultState;
  defaultState = new DeadState(' ');
  XPosition = 0;
  YPosition = 0;
  aliveNeighbors = 0;*/
}

Cell::Cell(State* new_state, int XPos, int YPos) {/*
  state = new_state;
  XPosition = XPos;
  YPosition = YPosition;*/
}

void Cell::setState(State* new_state) {/*
  state = new_state;*/
}

void Cell::setForm(char new_form) {/*
  form = new_form;*/
}

void Cell::setXPosition(int newXPos) {/*
  XPosition = newXPos;*/
}

void Cell::setYPosition(int newYPos) {/*
  YPosition = newYPos;*/
}

void Cell::setAliveNeighbors(int extAliveNeighbors) {/*
  aliveNeighbors = extAliveNeighbors;*/
}

int Cell::getXPosition() {
  return XPosition;
}

int Cell::getYPosition() {
  return YPosition;
}

State* Cell::getState() {
  return state;
}

char Cell::getForm() {
  return form;
}


void Cell::updateCell() {/*
  setState(charToState(getState()->nextState()));*/
}

void Cell::neighbours(const Grid& gamegrid) {/*
  getState()->neighbors(gamegrid, XPosition, YPosition);*/
}
/*
State* Cell::charToState(char stateValue) {
  State* newState;
  switch (stateValue) {
    case ' ': {
                newState = new DeadState(stateValue);
                break;
              }
    case 'A': {
                newState = new AdultState(stateValue);
                break;
              }
    case 'P': {
                newState = new PupaState(stateValue);
                break;
              }
    case 'L': {
                newState = new LarvaState(stateValue);
                break;
              }
    case 'E': {
                newState = new EggState(stateValue);
                break;
              }
  }
  return newState;
}
*/
std::ostream&operator<<(std::ostream &os, Cell ext_cell) {/*

 if(ext_cell.getState()->getValue() == 'X') {
   std::cout << BLK << "▓" << NC;
 } else { 
   std::cout << ext_cell.getState()->getValue() << NC;
 }*/
 return os;
}
