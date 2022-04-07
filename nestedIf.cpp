// Copyright (c) 2022 Samuel Webster All rights reserved
//
// Created by Samuel Webster
// Created on February 2022
// Tells user if its a leap year

#include <iostream>

int main() {
    // I check if it's a leap year
    int intYear;
    std::string stringYear;

    // input
    std::cout << "Enter year: ";
    std::cin >> stringYear;

    // process
    try {
        intYear = std::stoi(stringYear);
        if (intYear % 4 == 0) {
            if (intYear % 100 == 0) {
                if (intYear % 400 == 0) {
                    std::cout << "Is a leap year";
                } else {
                    std::cout << "Not a leap year";
                }
            } else {
                std::cout << "Is a leap year";
            }
        } else {
            std::cout << "Not a leap year";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input";
    }
    std::cout << "\nDone." << std::endl;
}
