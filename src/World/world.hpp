//
//  World.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

#ifndef World_hpp
#define World_hpp

using namespace std;
//Evolution classes
#include "./Biome.hpp"
#include "../Life/Species.hpp"
//std libraries
#include<string>
#include<vector>

class World{
private:
    int time = 0;
    string name = "DeafaultWorld";
    vector<Biome*> biomes;
    vector<Species*> species;

public:
    //constructors
    World(){}
    // World(string n, float w): name(n), weight(w){}

    //getters
    string getName();
    vector<string> getSpecies();
    vector<string> getBiomes();

    //functions
    void update();
    string toString(int style);
    void save(string file);
    void load(string file);
};

#endif /* World_hpp */
