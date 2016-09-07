//
//  KeyLogger: Windows based keystroke logger
//  Helper.h
//
//  Created by Dulio Denis on 9/6/16.
//  Copyright (c) 2016 Dulio Denis. All rights reserved.
//
//  Compiler: GCC g++
#ifndef HELPER_H
#define HELPER_H

#include <ctime>
#include <string>
#include <sstream>

// Create a namespace
namespace Helper {

    template <class T>

    // helper to convert into strings
    std::string ToString(const T &);

    // helper struct used to represent Date & Time
    struct DateTime {

        // Constructor
        DateTime (){
            time_t ms;
            time(&ms);

            struct tm * info = localtime(&ms);

            D = info->tm_today;
            m = info->tm_mon + 1;
        }
    };
}

#endif // HELPER_H
