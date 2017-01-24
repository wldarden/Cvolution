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
#include<vector>

using namespace std;

string Species::getName(){
    return name;
}

//Generate a set of new Lifeforms using the species genome
vector<Lifeform*> Species::seedPop(int n){

}

string Species::toString(int style){
    switch(style){
    case(LESS): return "Name: " + name;
    // case(FULL):
    //     string description = this->toString(LESS) + "\n";
    //     for(Gene* gene:genes){
    //         description += "\t" + gene->toString() + "\n";
    //     }
    //     return description;
    }
    return "ERROR: no Species description found for given style";
}
