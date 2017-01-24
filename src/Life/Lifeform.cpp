//
//  Lifeform.cpp
//
//
//  Created by Will Darden on 1/22/17.
//
//


#include "Lifeform.hpp"

//std libraries
#include <stdlib.h>
#include<string>
// #include<vector>

using namespace std;

string Lifeform::getName(){
    return name;
}

float Lifeform::getWeight(){
    return weight;
}

// string toString(string style){
//     switch(style){
//         case("basic"): return "Name: " + name + " Weight: " + weight + " Drift: " + drift;
//         case("full"):
//         string description = this->toString("basic") + "\n";
//         for(Gene* gene:genes){
//             description += "\t" + gene->toString() + "\n";
//         }
//         return description;
//     }
// }
