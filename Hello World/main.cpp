//
//  main.cpp
//  Hello World
//
//  Created by Adam Back on 8/15/15.
//  Copyright (c) 2015 Adam Back. All rights reserved.
//

#include <iostream>

void print( int num )
{
    std::cout << num;
}

int multiply( int x, int y )
{
    return x * y;
}

int doubleNumber( int a )
{
    return multiply(a, a);
}

int main()
{
    int num = 0;
    std::cin >> num;
    print( doubleNumber(num));
    return 0;
}
