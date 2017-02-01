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

//FLTK files
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Int_Input.H>
#include <FL/Fl_Browser.H>
#include <FL/Fl_Select_Browser.H>
#include <FL/Fl_Choice.H>


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
