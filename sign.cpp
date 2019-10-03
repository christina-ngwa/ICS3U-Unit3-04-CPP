// Copyright (c) 2019 Christina Ngwa All rights reserved.
//
// Created by: Christina Ngwa
// Created on: October 2019
// This program checks the sign of an integer

#include <iostream>

int main() {
    // This function checks the sign of an integer

     int num;

    // input
    std::cout << "Let me check the sign of your integer."
    << std::endl;
    std::cout << "Enter your integer: ";
    std::cin >> num;

    // process
    if (num > 0) {
         // output
         std::cout << "" << std::endl;
         std::cout << "The integer is a positive (+).";

    } else if (num < 0) {
    std::cout << "" << std::endl;
    std::cout << "The integer is a negative (-).";
    } else {
    std::cout << "" << std::endl;
    std::cout << "0";
    }
}
