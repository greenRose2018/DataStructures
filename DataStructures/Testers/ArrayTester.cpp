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
    
    Array<int> secondArray(300);
    cout <<secondArray.getSize()<<endl;
    cout <<firstArray.getSize()<<endl;
    
    Array<int> thirdArray(secondArray);
    
    cout << thirdArray.getSize()<<endl;
    
    firstArray = thirdArray;
    cout << firstArray.getSize()<< endl;
    
    thirdArray[5] =123;
    cout << thirdArray[5] << endl;
    
    thirdArray[6] = thirdArray.getFromIndex(5);
    cout <<  thirdArray[6] << endl;
    
    thirdArray.setAtIndex(6, 9519);
    cout << thirdArray[6] << endl;
    
}

void ArrayTester:: testAdvancedArray()
{
    
}
