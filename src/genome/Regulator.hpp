//
//  Regulator.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
//Regulators hold a collection of genes that determine actions for a given lifeforms "state", which is modeled by the regulator
//
//Grow
//
#ifndef Regulator_hpp
#define Regulator_hpp

#include "Gene.hpp"
#include "../Options.hpp"

//std libraries
#include<string>
#include<vector>

using namespace std;

class Regulator{
private:
    string name;
    float weight;// how often is this regulator pattern used?
    Gene* drift;
    vector<Gene*> genes;

    void addGene();
public:
    //constructors
    //Default
    //Named default
    Regulator(){
        name = "DefaultRegulator";
        weight = DEF_REGULATOR_WEIGHT;
        drift = new Gene("Drift",DEF_GENE_DRIFT,DEF_REGULATOR_DRIFT);
        genes.push_back(new Gene());
        genes.push_back(new Gene());
        genes.push_back(new Gene());
    }
    Regulator(string n, float w, float d): name(n), weight(w){
        drift = new Gene("Drift",d,DEF_REGULATOR_DRIFT);
    }

    //deconstructors
    ~Regulator(){
        delete drift;
    }

    //getters
    string getName();
    float getWeight();
    float getDrift();
    vector<string> getGenes();


    //functions
    void mutate();
    string toString(int style);
};

#endif /* Regulator_hpp */
