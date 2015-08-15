//
//  main.cpp
//  Hello World
//
//  Created by Adam Back on 8/15/15.
//  Copyright (c) 2015 Adam Back. All rights reserved.
//

#include <iostream>

int getNumberFromUser()
{
    int num = 0;
    std::cin >> num;
    return num;
}

int main()
{
    std::cout << "Welcome to the Addor" << std::endl << std::endl;
    std::cout << "What's your first number?" << std::endl;
    int first = getNumberFromUser();
    std::cout << "What's your second number?" << std::endl;
    int second = getNumberFromUser();
    std::cout << "Adding..." << std::endl;
    std::cout << first + second;
    return 0;
}
