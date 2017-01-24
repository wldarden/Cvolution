//
//  Biome.cpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

// #include "stdlib.h"
#include "Biome.hpp"
#include "../Globals.hpp"
//std libraries
#include<string>
#include<vector>

using namespace std;

string Biome::getName(){
    return name;
}

void Biome::update(){
    weather->update();
}

//INFO

string Biome::toString(int style){
    switch(style){

    }
    return "ERROR: Biome toString Style not found";
}
