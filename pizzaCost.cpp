// Copyright (c) 2021 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: Sept 22 2022
// This program asks the user for the length
// and width of a rectangle and calculates
// the area and perimeter with the given dimensions

#include <iomanip>
#include <iostream>

// delcare constants
const float HST = 0.13;
const float LABOUR_COST = 2.00;
const float RENTAL_COST = 2.25;
const float INGRED_COST = 1.5;

// declare variables
float diameter,
    subtotal, tax, total;

int main() {
    // get input from user
    std::cout << "Enter the diameter of the pizza in inches: ";
    std::cin >> diameter;

    // calculate area and perimeter
    subtotal = LABOUR_COST + RENTAL_COST + INGRED_COST * diameter;
    tax = subtotal * HST;
    total = subtotal + tax;

    // rounds the total by 2 decimal places and display the results
    std::cout << "The total cost of the pizza is $" << std::fixed
    << std::setprecision(2)<< std::setfill('0') << total << "\n";
}
