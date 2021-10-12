/* 
Kevin Sampson
ASTE 404 Homework 7 Part 1
Dr. Breida
12 October 2021

main.cpp file
*/

#include <iostream>
#include "Vec.h"

int main(int num_args, char **args) {
    double3 a{0,1,2};
    double3 b{0,0,1};
    std::cout<<a-b<<std::endl;
    std::cout<<dot(a,b)<<std::endl;
    return 0;
}

/* *
* @param num_args number of arguments
* @param args pointer to arguments
* 
* 
* 
* 
* 
*/