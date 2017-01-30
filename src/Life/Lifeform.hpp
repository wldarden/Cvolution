//
//  Lifeform.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

#ifndef Lifeform_hpp
#define Lifeform_hpp

//Evolution libraries
#include "../World/Utilities/Location.hpp"
#include "./Utilities/Color.hpp"
#include "../Genome/Genome.hpp"
//std libraries
#include<string>
#include<stdlib.h>
// #include<vector>

using namespace std;

class Lifeform{
protected:
    string name;
    Location* loc;
    Color* color;
    Genome* genome;
    int age;
    float water;
    float energy;
    float mass;

public:
    //constructors
    //Default
    //Default Reproduction
    Lifeform(){
        name = "DefaultLifeform";
        loc = new Location(rand()%DEF_BIOME_SIZE,rand()%DEF_BIOME_SIZE);
        color = new Color();
        genome = new Genome();
        age = 0;
        water = DEF_LIFEFORM_WATER;
        energy = DEF_LIFEFORM_ENERGY;
        mass = .01;
    }
    // Lifeform(string name, Genome pgenome, Location l){
    //     name = name;
    //     loc = l;
    //     color = new Color();
    //     age = 0;
    //     water = DEF_LIFEFORM_WATER;
    //     energy = DEF_LIFEFORM_ENERGY;
    //     mass = .01;
    // }
    // Lifeform(string n, Location* l, unsigned char r, unsigned char g, unsigned char b, int a, float w, float e):
    //     name(n), loc(l),color(new Color(r,g,b)),age(a),water(w),energy(e) {}
    Lifeform(string n, Location* l, Color* c, int a, float w, float e):
        name(n), loc(l),color(c),age(a),water(w),energy(e) {}
    //getters

    string getName() {return name;};
    Location* getLocation(){return loc;};
    Color* getColor(){return color;};
    int getAge(){return age;};
    float getWater(){return water;};
    float getEnergy(){return energy;};
    float getMass(){return mass;};

    //functions
    string toString(int style);
    void update();

    Lifeform* reproduce();
    void grow();
    void eat();
    void react();

};

#endif /* Lifeform_hpp */
