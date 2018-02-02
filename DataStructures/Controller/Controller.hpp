//
//  Controller.hpp
//  DataStructures
//
//  Created by Morales, Brittney on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include "Tools/Timer.hpp"
#include "FileController.hpp"
#include "../Model/Structures/Array.hpp"

#include <iostream>
#include <vector>

class Controller
{
private:
    void findMaxAndMin();
public:
    Controller();
    void start();
    void testTimer();
};

#endif /* Controller_hpp */
