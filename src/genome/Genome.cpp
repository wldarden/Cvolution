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

void Genome::mutate(){
    for(Regulator* r:regulators){
        r->mutate();
    }
}

// string toString(){
//     return "Name: " + name + " Value: " + value + " Drift: " + drift;
// }
