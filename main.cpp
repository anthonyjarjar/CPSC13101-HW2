#include <iostream>
#include "vector.h"
#include "vector.cpp"

int main(){

    Vector131<int> example;

    example.PushBack(10);
    example.PushBack(15);
    example.PushFront(5);
    example.PushBack(21);
    example[2] = 20;
    example[7] = 55;

    for (int j = 0; j < example.Size(); j++){
        std::cout << example[j] << std::endl; 
    }

    return 0;
}