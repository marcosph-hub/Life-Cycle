#include "adultstate.h"
void AdultState::neighbors(const Grid& gamegrid, int row, int column) {
  if (gamegrid.getCell(row - 1, column - 1).getState()->getValue() == 'A') adultCounter++;
  if (gamegrid.getCell(row - 1, column).getState()->getValue() == 'A') adultCounter++;
  if (gamegrid.getCell(row, column - 1).getState()->getValue() == 'A') adultCounter++;
  if (gamegrid.getCell(row , column + 1).getState()->getValue() == 'A') adultCounter++;
  if (gamegrid.getCell(row + 1, column - 1).getState()->getValue() == 'A') adultCounter++;
  if (gamegrid.getCell(row + 1, column).getState()->getValue() == 'A') adultCounter++;
  if (gamegrid.getCell(row + 1, column + 1).getState()->getValue() == 'A') adultCounter++;
  if (gamegrid.getCell(row - 1, column + 1).getState()->getValue() == 'A') adultCounter++;

}

char AdultState::nextState() {
  if (adultCounter >= 1) {
    return 'H';
  } else {
    return ' ';
  }
}