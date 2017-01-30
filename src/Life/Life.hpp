//
//  Life.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
// A species is a definable set of lifeforms. They define an average genome.

#ifndef Life_hpp
#define Life_hpp

//Evolution classes
#include "../Genome/Genome.hpp"
#include "../World/Utilities/Location.hpp"
#include "./Utilities/Color.hpp"
#include "./Plant.hpp"
#include "./Species.hpp"
#include "Interaction.hpp"

//std libraries
#include<string>
#include<vector>

class Life{
private:
    string name;
    Genome genome;
    vector<Lifeform*> lifeforms;
    int total = 0;

    //init functions
    vector<Lifeform*> seedPop(int n);

    //Analytical functions
    // Genome defineGenome(vector<Lifeform*> pop);

public:
    //constructors
    Life(){}
    Life(string n): name(n){}

    //getters
    string getName();



    //functions

    string toString(int style);

};

#endif /* Life_hpp */
