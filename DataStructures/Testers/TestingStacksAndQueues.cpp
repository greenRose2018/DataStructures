//
//  TestingStacksAndQueues.cpp
//  DataStructures
//
//  Created by Morales, Brittney on 2/28/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "TestingStacksAndQueues.hpp"

void TestingStacksAndQueues :: stackVersusList()
{
    Stack<int> numberStack;
    LinkedList<int> numberList;
    Timer stackTimer, listTimer;
    
    for(int index = 0; index< 10; index++)
    {
        numberStack.add(index);
        numberStack.add(index);
    }
    
    cout << "Get the third from the last item from the structure" << endl;
    int index = 0;
    int value = -99;
    stackTimer.startTimer();
    
    while(index<9)
    {
        cout << numberStack.pop() << endl;
        index++;
    }
    
    stackTimer.stopTimer();
    index = 0;
    listTimer.startTimer();
    value = numberList.getFromIndex(7);
    listTimer.stopTimer();
}
