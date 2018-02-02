//
//  Array.hpp
//  DataStructures
//
//  Created by Morales, Brittney on 2/2/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#include <assert.h>     //Used for validating user supplied data.
#include <iostream>     //Used for tracing and debug statements.

using namespace std;

template <class Type>
class Array
{
private:
    Type * internalArray;
    int size;
    
public:
    //Constructor
    Array<Type>(int size);
    
    //Copy constructor
    Array<Type>(const Array<Type> & toCopy);
    
    //Destructor
    ~Array<Type>();
    
#endif /* Array_hpp */
