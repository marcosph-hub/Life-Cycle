
#include "eggstate.h"
void EggState::neighbors(const Grid& gamegrid, int row, int column) {
  neighborComprobation(gamegrid.getCell(row - 1, column - 1).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row - 1, column).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row, column - 1).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row , column + 1).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row + 1, column - 1).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row + 1, column).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row + 1, column + 1).getState()->getValue());
  neighborComprobation(gamegrid.getCell(row - 1, column + 1).getState()->getValue());

}

void EggState::neighborComprobation (char stateValue) {
  switch (stateValue) {
    case 'L': {
                larvaCounter++;
                break;
              }

    case 'E': {
                eggCounter++;
                break;
              }
  }
}

char EggState::nextState() {
  if (larvaCounter > eggCounter) {
    return ' ';
  } else {
    return 'L';
  }
}