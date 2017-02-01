//
//  Genome.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
//Genomes hold a collection of genes that determine actions for a given lifeforms "state", which is modeled by the regulator

#ifndef Genome_hpp
#define Genome_hpp

#include "Regulator.hpp"
#include "Gene.hpp"
//std libraries
#include<string>
#include<vector>
using namespace std;

class Genome{
private:
    string name;
    vector<Regulator*> regulators;
public:
    //constructors
    Genome(){
        name = "DefaultGenome";
        regulators.push_back(new Regulator());
        regulators.push_back(new Regulator());
        regulators.push_back(new Regulator());
    }
    Genome(string n): name(n){}

    //getters
    string getName();
    vector<string> getRegulators();
    string toString(int style);

    //functions
    void mutate();
    void addRegulator(string n);
};

#endif /* Genome_hpp */
