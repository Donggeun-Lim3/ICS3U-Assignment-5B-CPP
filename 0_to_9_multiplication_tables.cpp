// Copyright (C) 2002 Donggeun Lim All rights reserved.
//
// Created by Donggeun Lim
// Created on December 2020
// This program is nested program

#include <iostream>


main() {
    int counter1;
    int counter2;
    int result;

    for (counter1 = 0; counter1 < 10; counter1++) {
        for (counter2 = 0; counter2 < 10; counter2++) {
            result = counter1 * counter2;
            std::cout << counter1 << " x " << counter2 << " = "
                      << result << std::endl;
        }
    }
}
