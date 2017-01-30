//
//  Main.cpp
//
//
//  Created by Will Darden on 10/3/16.
//
//

#include "Controller.hpp"
#include "./World/World.hpp"
#include "./Globals.hpp"

#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
// using namespace std;

int main(){
    World world;
    Controller controller(&world);
    cout << world.toString(LESS) << "\n";
    // controller.cli();
}
