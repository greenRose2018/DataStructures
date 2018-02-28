//
//  Stack.hpp
//  DataStructures
//
//  Created by Morales, Brittney on 2/27/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <LinkedList.hpp>

template <class Type>
class Stack : public LinkedList<Type>
{
public:
    Stack();
    ~Stack();
    
    //Stack specific methods
    void push(Type data);
    Type pop();
    Type peek();
    
    //Overrriden LinkedList methods
    void add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index);
    Type remove(int index);
};
#endif /* Stack_hpp */






