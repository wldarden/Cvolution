//
//  Species.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
// A species is a definable set of lifeforms. They define an average genome.

#ifndef Species_hpp
#define Species_hpp

#include "../Genome/Genome.hpp"
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

    //init functions
    vector<Lifeform*> seedPop(int n);

    //Analytical functions
    Genome defineGenome(vector<Lifeform*> pop);

public:
    //constructors
    Species(){}
    Species(string n): name(n){}

    //getters
    string getName();
    Genome* getGenome();

    //functions
    void mutate(float stddev);// create child species
    string toString(int style);
    float getFitness();
};

#endif /* Species_hpp */
