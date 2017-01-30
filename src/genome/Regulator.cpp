//
//  Regulator.cpp
//
//
//  Created by Will Darden on 1/22/17.
//
//


//Evolution libraries
#include "Regulator.hpp"
#include "../Globals.hpp"

//std libraries
#include<string>
#include<vector>
#include<stdlib.h>

using namespace std;

string Regulator::getName(){
    return name;
}

float Regulator::getDrift(){
    return drift->getValue();
}

float Regulator::getWeight(){
    return weight;
}

void Regulator::mutate(){
    float delta = ((rand() % 200 - 100) / 100) * drift->getValue(); // -100% to 100% of drift
    weight += delta;
    drift->mutate(); //vary drift by much less
}

string Regulator::toString(int style){
    switch(style){
    case(LESS): return "Name: " + name + " Weight: " + to_string(weight) + " Drift: " + to_string(drift->getValue());
    case(FULL):
        string description = this->toString(LESS) + "\n";
        for(Gene* gene:genes){
            description += "\t" + gene->toString() + "\n";
        }
        return description;
    }
    return "ERROR: no description found for given style  in Regulator.cpp";
}
