
#include "deadstate.h"

void DeadState::neighbors(const Grid& gamegrid, int row, int column) {
  if (gamegrid.getCell(row - 1, column - 1).getState()->getValue() == 'A') stateCounter++;
  if (gamegrid.getCell(row - 1, column).getState()->getValue() == 'A') stateCounter++;
  if (gamegrid.getCell(row, column - 1).getState()->getValue() == 'A') stateCounter++;
  if (gamegrid.getCell(row , column + 1).getState()->getValue() == 'A') stateCounter++;
  if (gamegrid.getCell(row + 1, column - 1).getState()->getValue() == 'A') stateCounter++;
  if (gamegrid.getCell(row + 1, column).getState()->getValue() == 'A') stateCounter++;
  if (gamegrid.getCell(row + 1, column + 1).getState()->getValue() == 'A') stateCounter++;
  if (gamegrid.getCell(row - 1, column + 1).getState()->getValue() == 'A') stateCounter++;
}

char DeadState::nextState() {
  if (stateCounter >= 2 ) {
    return 'H';
  } else {
    return ' ';
  }
}