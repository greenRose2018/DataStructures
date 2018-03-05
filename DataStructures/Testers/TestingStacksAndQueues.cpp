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
    
    cout << "The time it took to work with Stack" << endl;
    stackTimer.displayInformation();
    cout<< "The time it took to work with List" << endl;
    listTimer.displayInformation();
    
    cout << "What is left in the Stack" << endl;
    //Here is how to cast as a parent type to get access
    // to a method that is note defined in the subclass.
    LinkedList<int> * listVersion = &numberStack;
    int stackSize = listVersion->getSize();
    cout << "Stack size is: " << stackSize << endl;
    for (int index = 0; index < stackSize; index++)
    {
        cout << numberStack.pop() << endl;
    }
    
    cout << "What is left in the List" << endl;
    //Here is how to cast as a parent type to get acccess
    // to a method that is not defined in the subclass.
    int listSize = numberList.getSize();
    cout << "List size is: " << listSize << endl;
    for ( int index = 0 ; index < listSize; index++)
    {
        cout << numberList.getFromIndex(index) << "\t";
    }
}

void TestingStacksAndQueues:: stackVersusQueue()
{
    vector<CrimeData> data = FileController :: readCrimeDataToVector("path to file");
    
    Stack<CrimeData> crimeStack;
    Queue<CrimeData> crimeQueue;
    
    for(int i = 0; i < 100; i++)
    {
        CrimeData temp = data.at(index);
        crimeStack.push(temp);
        crimeQueue.enqueue(temp);
    }
    
    Queue<int> queue;
    Stack<int> stack;
    Queue<int> queueFromStack;
    Stack<int> stackFromQueue;
    
    for(int i=0; i < 10; i++)
    {
        queue.enqueue(i);
        stack.push(i);
    }
    
    for(int i = 0; i < 10; i++)
    {
        cout << i << endl;
        cout << "Queue result: " << queue.dequeue()<< endl;
        cout << "Stack result: " << stack.pop() << endl;
    }
    
    for(int i = 0; i < 10; i++)
    {
        queue.enqueue(i);
        stack.push(i);
    }
    
    for(int i = 0; i < 10; i++)
    {
        stackFromQueue.push(queue.dequeue());
        queueFromStack.enqueue(stack.pop());
    }
    
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
        cout << "Stack result: " << stackFromQueue.pop() << endl;
        cout << "Queue result: " << queueFromStack.dequeue() << endl;
    }
}

