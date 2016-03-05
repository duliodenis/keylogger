//
//  KeyLogger: Windows based keystroke logger
//  main.cpp
//
//  Created by Dulio Denis on 3/4/16.
//  Copyright (c) 2016 Dulio Denis. All rights reserved.
//
//  Compiler: GCC g++

#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    MSG msg;

    while(GetMessage(&msg, NULL,0,0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
