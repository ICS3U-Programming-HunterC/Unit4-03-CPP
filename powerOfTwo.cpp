// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: April 24, 2022
// This program asks the user to enter a whole number
// it then calculates the It then uses a for loop  to calculate
// the power of two of each number from 0 until that number.

#include <iostream>
#include <string>
#include <cmath>


int main() {
    // declare variables
    std::string userInputString;
    int userInput, powerOfTwo, counter;

    // Get the user input as a string
    std::cout << "Enter a whole number: ";
    std::cin >> userInputString;
    std::cout << "\n";

    // calculate the power
    try {
        // convert the input to an int, if it is not a number then it will end
        userInput = std::stoi(userInputString);

        if (userInput < 0) {
            // if the number is negative then it will end the program
            std::cout << "That is not a whole number";
            std::cout << "\n";
        } else {
            for (counter = 0; counter <= userInput; counter ++) {
                // calculate the power and display it
                powerOfTwo = pow(counter, 2);
                std::cout << counter << "^2 = " << powerOfTwo << "\n";
            }
        }
    } catch (std::invalid_argument) {
        std::cout << "That is an invalid number! \n";
}
}
