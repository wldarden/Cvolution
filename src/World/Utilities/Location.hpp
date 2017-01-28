//
//  Location.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

#ifndef Location_hpp
#define Location_hpp

//Evolution classes
#include "../../Options.hpp"

//std libraries
// #include<vector>

class Location{
private:
    unsigned char x;
    unsigned char y;
    static unsigned char max;

    unsigned char validate(unsigned char xy){
        xy = xy > max ? max : xy;
        return xy < 0 ? 0 : xy;
    }
public:
    //constructors
    Location(unsigned char X, unsigned char Y):x(X), y(Y){}
    Location(unsigned char X, unsigned char Y, unsigned char m):x(X), y(Y){
         max = m;
    }
    // Location(int X, int Y, int m):x((unsigned char) X), y((unsigned char) Y), max((unsigned char) m){}

    //getters
    unsigned char getX(){
        return x;
    }
    int getXI(){
        return (int) x;
    }
    unsigned char getY(){
        return y;
    }
    int getYI(){
        return (int) y;
    }

    //functions
    void moveX(unsigned char delta){
        x+=delta;
        x = validate(y);
    }
    void moveY(unsigned char delta){
        y+=delta;
        y = validate(y);
    }

};

#endif /* Location_hpp */
