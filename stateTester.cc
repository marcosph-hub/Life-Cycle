#include <iostream>
#include "state.h"
#include "bordestate.h"

int main() {
  State* statetest;
  statetest = new BorderState('X');
  std::cout << "->" << statetest->getValue() << std::endl;
}