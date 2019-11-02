// Copyright (c) 2019 Wajd Mariam All rights reserved.
//
// Created by: Wajd Mariam
// Created on:October 2019
// This program calculates the square of a number

#include <iostream>

main() {
    // variables
    int answer = 0;
    int counter = 1;
    int number;

    // input
    std::cout << "Enter a number to loop it and square its results: ";
    std::cin >> number;

    // process & looping
    for (counter = 1; counter <= number; counter++) {
        answer = counter * counter;
        std::cout << counter <<"² = " << answer << std::endl;
    }
}
