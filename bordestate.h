#pragma once

#include <iostream>
#include "state.h"
#include "grid.h"


class BorderState: public State {
    public:
    BorderState(char new_value):State(new_value){};
    void neighbors (const Grid& gamegrid, int row, int column);
    char nextState();
};