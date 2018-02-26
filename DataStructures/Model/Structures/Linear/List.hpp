//
//  LinearNode.hpp
//  DataStructures
//
//  Created by Morales, Brittney on 2/8/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <iostream>
#include <assert.h>
#include "../../Nodes/LinearNode.hpp"

template <class Type>
class List
{
protected:
    int size;
public:
    //Structures
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) =0;
    virtual Type remove(int item) = 0;
    virtual Type getFromIndex(int index) = 0;
    //Helper
    virtual int getSize() const =0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd() =0;
};

#endif /* List_hpp */
