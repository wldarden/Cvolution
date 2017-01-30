//
//  Species.cpp
//
//
//  Created by Will Darden on 1/22/17.
//
//


#include "Species.hpp"
#include "../Globals.hpp"

//std libraries
// #include <stdlib.h>
#include<string>
#include<list>

using namespace std;

string Species::getName(){
    return name;
}

Lifeform* Species::builder(){
    return new Lifeform();
}

//Generate a set of new Lifeforms using the species genome
void Species::seedPop(int n){
    for(int i = 0; i < n ;i++){
        addLifeform(builder());
    }
}

void Species::addLifeform(Lifeform* l){
    population++;
    lifeforms.push_back(l);
}

string Species::toString(int style){
    string description = "";
    switch(style){
    case(LESS): return "Name: " + name + " Population: " + to_string(population);
    case(MORE):
        description = this->toString(LESS) + "\n";
        for(Lifeform* l:lifeforms){
            description += "\t" + l->toString(LESS) + "\n";
        }
        return description;
    // case(FULL):
    //     string description = this->toString(LESS) + "\n";
    //     for(Gene* gene:genes){
    //         description += "\t" + gene->toString() + "\n";
    //     }
    //     return description;
    }
    return "ERROR: no Species description found for given style";
}
