//
//  Plant.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

#ifndef Plant_hpp
#define Plant_hpp

//Evolution libraries
#include "Lifeform.hpp"

//std libraries
#include<string>
// #include<vector>

class Plant : public Lifeform{
private:

public:
    //constructors
    Plant(string n, unsigned char x, unsigned char y, unsigned char r, unsigned char g, unsigned char b, int a, float w, float e): Lifeform(n,x,y,r,g,b,a,w,e) {}

    //getters

    //functions
    Plant* reproduce();
    void grow();
    void eat();

    void update();

};

#endif /* Plant_hpp */
