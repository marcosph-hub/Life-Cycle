
#include "pupastate.h"
void PupaState::neighbors(const Grid& gamegrid, int row, int column) {
  neighborComprobation(gamegrid.getCell(row - 1, column - 1).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row - 1, column).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row, column - 1).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row , column + 1).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row + 1, column - 1).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row + 1, column).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row + 1, column + 1).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row - 1, column + 1).getState()->getValue());

}

void PupaState::neighborComprobation (char stateValue) {
  switch (stateValue) {
    case 'L': {
                larvaCounter++;
                break;
              }

    case 'E': {
                otherStateCounter++;
                break;
              }

    case 'P': {
                otherStateCounter++;
                break;
              }

    case 'A': {
                otherStateCounter++;
                break;
              }
    case ' ': {
                otherStateCounter++;
                break;
              }
  }
}

char PupaState::nextState() {
  if (larvaCounter > otherStateCounter) {
    return ' ';
  } else {
    return 'A';
  }
}