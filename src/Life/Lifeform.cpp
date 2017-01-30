//
//  Lifeform.cpp
//
//
//  Created by Will Darden on 1/22/17.
//
//


#include "Lifeform.hpp"

//Evolution classes
#include "../Globals.hpp"
//std libraries
#include <stdlib.h>
#include<string>
// #include<vector>

using namespace std;

Lifeform* Lifeform::reproduce(){
    return new Lifeform();
}
void Lifeform::grow(){

}
void Lifeform::eat(){

}
void Lifeform::react(){

}

void Lifeform::update(){
    age++;
}

string Lifeform::toString(int style){
    switch(style){
    case(LESS): return "Name: " + name + " Mass: " + to_string(mass) + "(kg) water: " + to_string(water) + " energy: " + to_string(energy);
    // case(FULL ):
    //     string description = this->toString("basic") + "\n";
    //     for(Gene* gene:genes){
    //         description += "\t" + gene->toString() + "\n";
    //     }
    //     return description;
    }
    return "ERROR: No description for given style in Lifeform toString method.";
}
