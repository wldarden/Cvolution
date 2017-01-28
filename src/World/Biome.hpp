//
//  Biome.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

#ifndef Biome_hpp
#define Biome_hpp

//Evolution classes
#include "Resource.hpp"
#include "Weather.hpp"
#include "../Life/Species.hpp"
//std libraries
#include<string>
#include<vector>

class Biome{
private:
    const int SIZE = DEF_BIOME_SIZE;

    string name;
    int size;
    Weather* weather;
    vector<Species*> species;
    vector<Resource*> resources;

public:
    //constructors
    Biome(){
        name = "DefaultBiome";
        weather = new Weather();
        size = SIZE;
    }
    Biome(string n): name(n){
        //define weather based on type
    }

    //Deconstructor
    ~Biome(){
        delete weather;
    }
    //getters
    string getName();
    string toString(int style);

    //functions
    void update();
};

#endif /* Biome_hpp */
