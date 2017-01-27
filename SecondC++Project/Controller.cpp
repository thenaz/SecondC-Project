//
//  Controller.cpp
//  SecondC++Project
//
//  Created by Nazir, Ammar on 1/27/17.
//  Copyright © 2017 Nazir, Ammar. All rights reserved.
//

#include "Controller.hpp"
#include <iostream>

using namespace std;

int Controller :: changeNumber()
{
    return 42;
}

void Controller :: changeWithPointer(int * numberPointedTo)
{
    
}

void Controller :: start()
{
    cout << "Students said to say hello world" << endl;
    int myNumber = 2344;
    
    int * numberPointer = &myNumber;
    
    cout << myNumber << endl;
    tryNumbers(myNumber);
    cout << "Here is my number again " << myNumber << endl;
    myNumber = changeNumber();
    cout << "changed? " << myNumber << endl;
    
    changeWithPointer(numberPointer);
    
    cout << "changed??" << myNumber << endl;
}

void Controller :: tryNumbers(int provideNumber)
{
    cout << "I was sent " << providedNumber << endl;
    providedNumber = (8 + 42 + 34623) / providedNumber;
    cout << providedNumber << " is the new Value" << endl;
}
