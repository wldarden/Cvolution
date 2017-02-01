//
//  Gene.cpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

//Evolution libraries
#include "Gene.hpp"
#include "../Options.hpp"

//std libraries
#include <stdlib.h>
#include<string>
// #include<vector>

using namespace std;

string Gene::getName(){
    return name;
}

double Gene::getDrift(){
    return drift;
}

double Gene::getValue(){
    return value;
}

void Gene::mutate(){
    double delta = ((rand() % 200 - 100) / 100) * drift; // -100% to 100% of drift
    value += delta;
    drift += delta/DEF_DRIFT_DRIFT; //vary drift by much less
}

string Gene::toString(){
    return "Name: " + name + " Value: " + to_string(value) + " Drift: " + to_string(drift);
}
