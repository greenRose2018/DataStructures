//
//  ArrayTester.cpp
//  DataStructures
//
//  Created by Morales, Brittney on 2/6/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "ArrayTester.hpp"

void ArrayTester :: testArrayBuild()
{
    Array<int> firstArray(10);
    
    for(int i = 0; i < 10; i++)
    {
        firstArray.setAtIndex(i,i);
    }
    
    for(int j = 0; j < firstArray.getSize(); j++)
    {
        cout << firstArray[j] << endl;
    }
}

void ArrayTester:: testAdvancedArray()
{
    
}
