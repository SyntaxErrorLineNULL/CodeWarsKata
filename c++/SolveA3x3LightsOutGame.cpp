#include <iostream>
#include <bitset>
#include <array>
typedef std::bitset<9> state;

state Solve(state input){
    std::array<state, 9> Solve = {0x14E, 0x017, 0x163, 0x059, 0x0BA, 0x134, 0x18D, 0x1D0, 0x0E5};
    state Result = 0;
    for(auto i = 0; i != Solve.size(); i++)
        if(!input[(Solve.size() - 1) - i]) Result ^= Solve[i];
    return Result;
}