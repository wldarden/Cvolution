//
//  View.hpp
//
//
//  Created by Will Darden on 1/22/17.
//
//

#ifndef View_hpp
#define View_hpp

#include "../World/World.hpp"
#include "../Globals.hpp"
#include "../Options.hpp"

class View{
public:
    //constructors
    View(World& w): shop(w) {}

    //methods
    void show_menu(Menu men);
    void show_list(vector<string> obj);

private:
    World& world;
};


#endif /* View_hpp */
