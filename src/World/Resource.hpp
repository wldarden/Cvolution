//
//  Resource.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

#ifndef Resource_hpp
#define Resource_hpp

//Evolution classes
#include "../Globals.hpp"
//std libraries
#include<string>
#include<list>

using namespace std;

class Resource{
private:
    //Global resource variables
    static list<string> allNames;
    static list<Resource*> allResources;
    static int allCount;

    int id;
    string name;
    double mass;//kg
    float energy;//J per kg

    void validateMass(){
        mass = mass >= 0 ? mass : 0;
    }
    void validateEnergy(){
        energy = energy >= 0 ? energy : 0;
    }
public:
    //constructors
    Resource(){}
    Resource(int i,string n, double m, float e): id(i), name(n), mass(m), energy(e){
        allNames.push_back(n);
        allCount++;
        allResources.push_back(this);
    }

    //getters
    int getId(){
        return id;
    }
    string getName(){
        return name;
    }
    double getMass(){
        return mass;
    }
    float getEnergy(){
        return energy;
    }

    //functions
    void addMass(double m){
        mass+=m;
        validateMass();
    }
    void setEnergy(float e){
        energy = e;
        validateEnergy();
    }
    string toString(int style){
        switch(style){
            case(LESS): return "Resource: " + name + "Available: " + to_string(mass) + "(kg) " + "Energy: " + to_string(energy) + "J/kg";
        }
        return "ERROR: No description found for given style in Resource.hpp";
    }
};

#endif /* Resource_hpp */
