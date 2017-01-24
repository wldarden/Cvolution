//
//  Biome.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

#ifndef Biome_hpp
#define Biome_hpp

#include "Weather.hpp"
#include "../Life/Species.hpp"
//std libraries
#include<string>
#include<vector>

class Biome{
private:
    string name;
    int size = 20;
    Weather* weather;
    vector<Species*> species;

public:
    //constructors
    Biome(){}
    Biome(string n): name(n){
        //define weather based on type
    }

    //getters
    string getName();
    string toString(int style);

    //functions
    void update();
};

#endif /* Biome_hpp */
