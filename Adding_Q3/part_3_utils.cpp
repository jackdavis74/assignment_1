#include <cstdio>
#include <iostream>
#include "part_3_header.h"

//Int user input function
int get_user_input(){
    int x;
    std::cout << "Enter an integer";
    std::cin >> x;
    return x;
}

//Add function
int add_two_ints(int x, int y){
    int sum = x + y;
    return sum;
}