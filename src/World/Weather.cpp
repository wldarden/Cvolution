//
//  Weather.cpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

// #include "stdlib.h"
#include "Weather.hpp"
#include "../Globals.hpp"
//std libraries
#include<string>
#include<vector>

using namespace std;

float Weather::getTemp(){
    return temp;
}

float Weather::getSun(){
    return sun;
}

float Weather::getHumidity(){
    return humidity;
}
//INFO

void Weather::update(){

}

string Weather::toString(int style){
    switch(style){

    }
    return "ERROR: Weather toString Style not found";
}
