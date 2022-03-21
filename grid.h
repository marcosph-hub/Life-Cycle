#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>
#include <vector>

#include "cell.h"
//class Cell;
class Grid {
  private:
  Cell **gamegrid;
  int row;
  int col;
  int generations;
  int currentGeneration;
  const std::vector<char> letters = {'H','L','P','A'};

  public:
  Grid();
  Grid(int extRow, int extCol, int extGenerations);

  int getRow();
  int getColumn();
  int getGenerations();
  int getCurrentGeneration();

  void setCurrentGeneration(int newGeneration);

  State* charToState(char stateValue);
  void nextGeneration();
  void theLifeGame();
  void PrintGrid();
  void InitGrid();
  void RandomGrid(int aliveCells);
  Cell& getCell(int extRow, int extCol) const;
};
