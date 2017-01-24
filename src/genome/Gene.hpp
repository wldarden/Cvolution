//
//  Gene.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

#ifndef Gene_hpp
#define Gene_hpp

#include "../Options.hpp"
//std libraries
#include<string>
// #include<vector>

using namespace std;

class Gene{
private:
    string name;
    float value;
    float drift;

public:
    //constructors
    Gene(string n, float v):name(n), value(v){
        drift = DEF_GENE_DRIFT;
    }
    Gene(string n, float v, float d): name(n), value(v), drift(d) {}

    //getters
    string getName();
    float getDrift();
    float getValue();

    //functions
    void mutate();
    string toString();

};

#endif /* Gene_hpp */
