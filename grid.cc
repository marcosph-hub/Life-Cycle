#include "grid.h"
#include "bordestate.h"

Grid::Grid() {
  row = 28;
  col = 48;
  generations = 400;
  currentGeneration = 0;

  gamegrid = new Cell *[row];
  for (int row_iterator = 0; row_iterator < row; ++row_iterator){
    gamegrid[row_iterator] =  new Cell [col];
  }
}

Grid::Grid(int extRow, int extCol, int extGenerations) {
  srand(time(NULL));
  row =  extRow + 2;
  col = extCol + 2;
  generations = extGenerations;
  currentGeneration = 0;

  gamegrid = new Cell *[row];
  for (int row_iterator = 0; row_iterator < row; ++row_iterator){
    gamegrid[row_iterator] =  new Cell [col];
  }
}

Cell& Grid::getCell(int extRow, int extCol) const{
  return gamegrid[extRow][extCol];
}

int Grid::getCurrentGeneration() {
  return currentGeneration;
}

int Grid::getGenerations() {
  return generations;
}

void Grid::setCurrentGeneration(int newGeneration) {
  currentGeneration = newGeneration;
}

void Grid::nextGeneration() {
  setCurrentGeneration(getCurrentGeneration() + 1);
}


void Grid::InitGrid() {
  for (int row_iterator = 0; row_iterator < row; ++row_iterator) {
    for (int col_iterator = 0; col_iterator < col; ++col_iterator) {
      if((col_iterator == 0) || (col_iterator == col - 1)) {
        State* borderState;
        borderState = new BorderState('X');
        gamegrid[row_iterator][col_iterator].setState(borderState);
      } else if ((row_iterator == 0) && (col_iterator != 0)) {
          State* borderState;
          borderState = new BorderState('X');
          gamegrid[row_iterator][col_iterator].setState(borderState);
      } else if ((row_iterator == row - 1) && (col_iterator != col -1 )) {
          State* borderState;
          borderState = new BorderState('X');
          gamegrid[row_iterator][col_iterator].setState(borderState);
      } else {
          gamegrid[row_iterator][col_iterator].setXPosition(row_iterator);
          gamegrid[row_iterator][col_iterator].setYPosition(col_iterator);
      }
    }
  }
} 

void Grid::PrintGrid() {
  std::cout << "Generation:" << currentGeneration << std::endl;
  for (int row_iterator = 0; row_iterator < row; ++row_iterator) {
    for (int col_iterator = 0; col_iterator < col; ++col_iterator) {
      std::cout << gamegrid[row_iterator][col_iterator];
    }
    std::cout << std::endl;
  }
}

void Grid::RandomGrid(int aliveCells) {
  for (int iterator = 0; iterator < aliveCells; ++iterator) {
    //int randStateChar = rand() % letters.size();
    State* newState;
    //(letters[randStateChar]);
    //newState = new charToState(randStateChar);
    newState = new AdultState('A');
    int randrow = rand() % (row - 2) + 1;
    int randcol = rand() % (col - 2) + 1;
    gamegrid[randrow][randcol].setState(newState);
  } 
}

void Grid::theLifeGame() {
  while (getCurrentGeneration() < getGenerations()) {

    for (int row_iterator = 1; row_iterator < row - 1; ++row_iterator ) {
      for (int col_iterator = 1; col_iterator < col - 1; ++col_iterator) {
        //int aliveNeighbors = getCell(row_iterator, col_iterator).neighbours(*this);
        //getCell(row_iterator, col_iterator).setAliveNeighbors(aliveNeighbors);
      }
    }

    for (int row_iterator = 1; row_iterator < row - 1; ++row_iterator ) {
      for (int col_iterator = 1; col_iterator < col - 1; ++col_iterator) {
        //getCell(row_iterator, col_iterator).updateCell();
      }
    }
    nextGeneration();
    usleep(100000);
    system("clear");
    PrintGrid();
  }
}

State* Cell::charToState(char stateValue) {
   State* newState;
   newState = new AdultState(stateValue); //mal
  switch (stateValue) {
    case ' ': {
                State* newState;
                newState = new DeadState(stateValue);
                return newState;
                break;
              }
    case 'A': {
                State* newState;
                newState = new AdultState(stateValue);
                return newState;
                break;
              }
    case 'P': {
                State* newState;
                newState = new PupaState(stateValue);
                return newState;
                break;
              }
    case 'L': {
                State* newState;
                newState = new LarvaState(stateValue);
                return newState;
                break;
              }
    case 'E': {
                State* newState;
                newState = new EggState(stateValue);  
                return newState;
                break;
              }
  }
  return newState;
}
