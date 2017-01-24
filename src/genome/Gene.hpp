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
    double value;
    double drift;

public:
    //constructors
    Gene(){
        name = "Efficiency";
        value = 5;
        drift = DEF_GENE_DRIFT;
    }
    Gene(string n, double v):name(n), value(v){
        drift = DEF_GENE_DRIFT;
    }
    Gene(string n, double v, double d): name(n), value(v), drift(d) {}

    //getters
    string getName();
    double getDrift();
    double getValue();

    //functions
    void mutate();
    string toString();

};

#endif /* Gene_hpp */
