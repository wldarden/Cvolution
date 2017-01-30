//
//  Species.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
// A species is a definable set of lifeforms. They define an average genome.

#ifndef Species_hpp
#define Species_hpp
//Evolution classes
#include "../Options.hpp"
#include "../Genome/Genome.hpp"
#include "Lifeform.hpp"

//std libraries
#include<string>
#include<list>

class Species{
private:
    string name;
    Genome* genome;
    list<Lifeform*> lifeforms;
    int population;

    //init functions
    void seedPop(int n);
    void addLifeform(Lifeform* l);
    Lifeform* builder();
    //Analytical functions
    Genome defineGenome(list<Lifeform*> pop);

public:
    //constructors
    Species(){
        name = "DefaultSpecies";
        genome = new Genome();
        population = 0;
        // seedPop(DEF_SPECIES_SEED_POP);
    }
    Species(string n): name(n){
        genome = new Genome();
        population = 0;
    }
    // //Deconstructors
    // ~Species(){
    //
    // }
    //getters
    string getName();
    Genome* getGenome();

    //functions
    // void mutate();// create child species
    string toString(int style);
    // float getFitness();
};

#endif /* Species_hpp */
