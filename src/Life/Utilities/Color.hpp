//
//  Color.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

#ifndef Color_hpp
#define Color_hpp

//std libraries
// #include<vector>

class Color{
private:
    unsigned char r;
    unsigned char g;
    unsigned char b;
public:
    //constructors
    Color(){
        r = 128;
        g = 128;
        b = 128;
    }
    Color(unsigned char red, unsigned char green, unsigned char blue):r(red), g(green), b(blue){}
    Color(int red, int green, int blue):r((unsigned char) red), g((unsigned char) green), b((unsigned char) blue){}

    //getters
    unsigned char getR(){
        return r;
    }
    int getRI(){
        return (int) r;
    }
    unsigned char getG(){
        return g;
    }
    int getGI(){
        return (int) g;
    }
    unsigned char getB(){
        return b;
    }
    int getBI(){
        return (int) b;
    }


    //functions

};

#endif /* Color_hpp */
