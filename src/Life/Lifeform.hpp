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

//std libraries
#include<string>
// #include<vector>

using namespace std;

class Lifeform{
protected:
    string name;
    Location loc;
    Color color;
    int age;
    float water;
    float energy;
    float weight;

public:
    //constructors
    Lifeform(string n,unsigned char x,unsigned char y, unsigned char r, unsigned char g, unsigned char b, int a, float w, float e):
        name(n), loc(Location(x,y)),color(Color(r,g,b)),age(a),water(w),energy(e) {}

    //getters
    string getName();
    int getLocation();
    unsigned char* getColor();
    int getAge();
    float getWater();
    float getEnergy();
    float getWeight();

    //functions
    // Lifeform* reproduce();
    virtual void update();


};

#endif /* Lifeform_hpp */
