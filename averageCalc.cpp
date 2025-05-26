// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by: Reid MacLean
// Created on: May 2025
// This program calculates the average of
// 10 random numbers between 1 and 100 in a list

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(0)));

    // Declare variables
    const int SIZE = 10;
    int numbers[SIZE];
    int sum = 0;

    // Generate 10 random numbers between 1 and 100
    for (int i = 0; i < SIZE; ++i) {
        numbers[i] = std::rand() % 100 + 1;  // Random number between 1 and 100
        sum += numbers[i];
    }

    // Calculate the average
    double average = static_cast<double>(sum) / SIZE;

    // Output the results
    std::cout << "The random numbers are: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << numbers[i] << " ";
    }

    std::cout << "\nThe average is: "
    << std::fixed << std::setprecision(2) << average << std::endl;

    return 0;
}
