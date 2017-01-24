//
//  Weather.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

#ifndef Weather_hpp
#define Weather_hpp

//std libraries
#include<string>
// #include<vector>

using namespace std;

class Weather{
private:
    float temp;
    float sun;
    float humidity;

public:
    //constructors
    Weather(){}
    // Weather(string n, float w): name(n), weight(w){}

    //getters
    float getTemp();
    float getSun();
    float getHumidity();


    //functions
    void update();
    string toString(int style);
};

#endif /* Weather_hpp */
