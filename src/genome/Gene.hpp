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
enum GENE_TYPES {INT, ALPHA};
class Gene{
private:
    string name;
    int type;
    double value;
    string seq;
    double drift;

public:
    //constructors
    Gene(){
        name = "defGeneInt";
        type = INT;
        value = 5;
        drift = DEF_GENE_DRIFT;
    }
    Gene(int t){
        name = "defGeneAlpha";
        type = INT;
        value = 5;
        drift = DEF_GENE_DRIFT;
    }
    Gene(string n, double v):name(n), value(v), type(INT){
        drift = DEF_GENE_DRIFT;
    }
    Gene(string n, double v, double d): name(n), value(v), drift(d), type(INT) {}


    //getters
    string getName();
    double getDrift();
    double getValue();

    //functions
    void mutate();
    string toString();

};

#endif /* Gene_hpp */
