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
    cout << "Testing the Timer class" << endl;
    Timer codeTimer;
    codeTimer.startTimer();
    vector<CrimeData> myData = FileController:: readCrimeDataToVector("/Users/bmor9741/Documents/Data Structures/DataStructures/DataStructures/Data/crimes.csv");
    for(int loop = 200; loop < 216; loop++)
    {
        cout << "Spot# "<< loop << "; " << myData[loop] << endl;
    }
    codeTimer.stopTimer();
    codeTimer.displayInformation();
    
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


