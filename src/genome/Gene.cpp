//
//  Gene.cpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

//Evolution libraries
#include "Gene.hpp"

//std libraries
#include <stdlib.h>
#include<string>
// #include<vector>

using namespace std;

string Gene::getName(){
    return name;
}

float Gene::getDrift(){
    return drift;
}

float Gene::getValue(){
    return value;
}

void Gene::mutate(){
    float delta = ((rand() % 200 - 100) / 100) * drift; // -100% to 100% of drift
    value += delta;
    drift += delta/10; //vary drift by much less
}

string Gene::toString(){
    return "Name: " + name + " Value: " + to_string(value) + " Drift: " + to_string(drift);
}
