//
//  Species.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
// A species is a definable set of lifeforms. They define an average genome.

#ifndef Species_hpp
#define Species_hpp

#include "../genome/Genome.hpp"
#include "Lifeform.hpp"
//std libraries
#include<string>
#include<vector>

class Species{
private:
    string name;
    Genome genome;
    vector<Lifeform*> lifeforms;
    int total = 0;

    //functions
    Genome defineGenome(vector<Lifeform*> pop);

public:
    //constructors
    Species(){}
    Species(string n): name(n){}

    //getters
    string getName();
    Genome* getGenome();

    //functions
    void mutate(float stddev);
    string toString();
    float getFitness();
};

#endif /* Species_hpp */
