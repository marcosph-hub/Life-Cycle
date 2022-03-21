
#include "larvastate.h"
void LarvaState::neighbors(const Grid& gamegrid, int row, int column) {
  neighborComprobation(gamegrid.getCell(row - 1, column - 1).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row - 1, column).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row, column - 1).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row , column + 1).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row + 1, column - 1).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row + 1, column).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row + 1, column + 1).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row - 1, column + 1).getState()->getValue());

}

void LarvaState::neighborComprobation (char stateValue) {
  switch (stateValue) {
    case 'L': {
                larvaCounter++;
                break;
              }

    case 'E': {
                eggCounter++;
                break;
              }

    case 'P': {
                pupaCounter++;
                break;
              }

    case 'A': {
                adultCounter++;
                break;
              }
  }
}

char LarvaState::nextState() {
  if (larvaCounter > (eggCounter + pupaCounter + adultCounter)) {
    return ' ';
  } else {
    return 'P';
  }
}