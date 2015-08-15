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

int main()
{
    int product = multiply( 2, 4 );
    print( product );
    return 0;
}
