//
//  World.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

#ifndef World_hpp
#define World_hpp

// using namespace std;
//Evolution classes
#include "./Biome.hpp"
#include "../Life/Species.hpp"
//std libraries
#include<string>
#include<list>

class World{
private:
    int time;
    string name;
    list<Biome*> biomes;
    list<Species*> species;

public:
    //constructors
    World(){
        time = 0;
        name = "DeafaultWorld";
        for(int i = 0; i < DEF_WORLD_SIZE; i++){
            biomes.push_back(new Biome());
        }
        for(int i = 0; i < DEF_SPECIES_NUM; i++){
            species.push_back(new Species());
        }
    }
    // World(string n, float w): name(n), weight(w){}

    //getters
    string getName();
    list<string> getSpecies();
    list<string> getBiomes();

    //functions
    void update();
    string toString(int style);
    void save(string file);
    void load(string file);
};

#endif /* World_hpp */
