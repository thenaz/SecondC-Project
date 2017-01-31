//
//  Timer.hpp
//  SecondC++Project
//
//  Created by Nazir, Ammar on 1/31/17.
//  Copyright © 2017 Nazir, Ammar. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>


class Timer
{
private:
    //Data members
    clock_t executionTime;
public:
    //Constructor
    Timer();
    //Methods
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayTimerInformation();
    long getExecutionTimeInMicroseconds;
};


#endif /* Timer_hpp */
