//
//  Genome.cpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

// #include "stdlib.h"
#include "Genome.hpp"
#include "../Globals.hpp"
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

string Genome::toString(int style){
    string desc;
    switch(style){
    case(LESS): return "Name: " + name + " Regulators: " + to_string(regulators.size());
    case(MORE): desc = toString(LESS) + "\n";
    }
    return "ERROR: No description found for given style in Genome.cpp";
}
