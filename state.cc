#include "state.h"
#include "grid.h"

State::State() {
  value = ' ';
}

State::State(char new_value) {
  value = new_value;
}

void State::setValue(char new_value) {
  value = new_value;
}

char State::getValue() {
  return value;
}

std::ostream& operator<<(std::ostream &os, State* ext_state) {
  //os << ext_state->getValue();
  return os;
}