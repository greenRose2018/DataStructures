//
//  Controller.cpp
//  DataStructures
//
//  Created by Morales, Brittney on 1/31/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller:: Controller()
{
    
}

void Controller:: start()
{
    //testTimer();
//    cout << "Testing the Timer class" << endl;
//    Timer codeTimer;
//    codeTimer.startTimer();
//    vector<CrimeData> myData = FileController:: readCrimeDataToVector("/Users/bmor9741/Documents/Data Structures/DataStructures/DataStructures/Data/crimes.csv");
//    for(int loop = 200; loop < 216; loop++)
//    {
//        cout << "Spot# "<< loop << "; " << myData[loop] << endl;
//    }
//    codeTimer.stopTimer();
//    codeTimer.displayInformation();
    
//    ArrayTester  myTest;
//    myTest.testArrayBuild();
//    myTest.testAdvancedArray();
//    findMaxAndMin();
    
//    LinkedListTester myTest;
//
//    myTest.testListBasics();
//    myTest.testListWithData();
    
    //RecursionTester test;
    //test.testRecursionString();
//
//    SortingTester my;
//    my.testSorts();
    
//    GraphTester test;
//    test.testGraphs();
//
    BinaryTreeTester test;
    //test.testNodes();
    test.doTreeStuff();

}

void Controller:: testTimer()
{
    cout << "Testing the Timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    cout << "Print to the screen some text" << endl;
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    
    codeTimer.resetTimer();
    codeTimer.startTimer();
    for (int index = 0; index < 1; index++)
    {
        cout << "The index is " << index << "\t";
    }
    
    codeTimer.stopTimer();
    codeTimer.displayInformation();
}
void Controller:: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController:: readCrimeDataToVector("/Users/bmor9741/Documents/Data Structures/DataStructures/DataStructures/Data/crimes.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for(int i = 1; i < myData.size(); i++)
    {
        if(myData[minIndex] > myData[i])
        {
            minIndex = i;
        }
        
        else if (myData [maxIndex] < myData[i])
        {
            maxIndex = i;
        }
    }
    searchTimer.stopTimer();
    cout << "The smallest Crime stat is at " << minIndex << " and it is: " << myData[minIndex] << endl;
    cout << "The largest Crime stat is at " << maxIndex << " and it is: " << myData[maxIndex] << endl;
    
    searchTimer.displayInformation();
}

