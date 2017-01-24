//
//  Location.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

#ifndef Location_hpp
#define Location_hpp

//std libraries
// #include<vector>

class Location{
private:
    unsigned char x;
    unsigned char y;
public:
    //constructors
    Location(unsigned char lat, unsigned char lng):x(lat), y(lng){}
    Location(int lat, int lng):x((unsigned char) lat), y((unsigned char) lng){}

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
    }
    void moveY(unsigned char delta){
        y+=delta;
    }

};

#endif /* Location_hpp */
