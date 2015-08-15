//
//  main.cpp
//  Hello World
//
//  Created by Adam Back on 8/15/15.
//  Copyright (c) 2015 Adam Back. All rights reserved.
//

#include <iostream>

int main()
{
    std::cout << "What's your name?" << std::endl;
    char name[] = "";
    std::cin >> name;
    std::cout << "Hi " << name << ", nice to meet you!" << std::endl;
    return 0;
}
