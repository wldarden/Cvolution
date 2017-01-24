//
//  Controller.hpp
//
//
//  Created by Will Darden on 10/3/16.
//
//

#ifndef Controller_hpp
#define Controller_hpp

// #include "View.hpp"
#include "./World/world.hpp"

class Controller{
public:
    Controller(World* w):world(w){}
    // void cli();
    // Menu execute_cmd(int cmd, Menu men);

private:
    World* world;
};

#endif /* Controller_hpp */
