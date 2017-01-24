//
//  Genome.cpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

// #include "stdlib.h"
#include "Genome.hpp"
//std libraries
#include<string>
// #include<vector>

using namespace std;

string Genome::getName(){
    return name;
}

// float getDrift(){
//     return drift;
// }
//
// float getValue(){
//     return value;
// }

// void mutate(){
//     float delta = ((rand() % 200 - 100) / 100) * drift; // -100% to 100% of drift
//     value += delta;
//     drift += delta/10; //vary drift by much less
// }

// string toString(){
//     return "Name: " + name + " Value: " + value + " Drift: " + drift;
// }
