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
// #include<vector>

using namespace std;

class Resource{
private:
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
    Resource(int i,string n, double m, float e): id(i), name(n), mass(m), energy(e){}

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
    }
};

#endif /* Resource_hpp */
