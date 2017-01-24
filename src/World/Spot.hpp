//
//  Spot.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

#ifndef Spot_hpp
#define Spot_hpp

//Evolution classes
#include "Resource.hpp"
// #include "Weather.hpp"
#include "../Life/Lifeform.hpp"
#include "/Utilities/Location.hpp"

//std libraries
#include<string>
#include<vector>

class Spot{
private:
    const int SIZE = BIOME_SIZE;

    Location loc;
    vector<Lifeform*> lifeforms;
    vector<Resource*> resources;

public:
    //constructors
    Spot(){}
    // Spot(string n): name(n){
    //     //define weather based on type
    // }

    //Deconstructor

    //getters
    string getName();
    string toString(int style);

    //functions
    void update();
};

#endif /* Spot_hpp */
