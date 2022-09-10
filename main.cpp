#include <iostream>
#include "prototype.h"

int main(){

    Vector131<int> example;

    example.PushBack(10);
    example.PushBack(15);
    example.PushFront(5);
    example.PushBack(21);
    example[3] = 20;
    example[10] = 55;

    example.Resize();
    example.Size();

    for (int j = 0; j < example.Size(); j++){
        std::cout << example[j] << std::endl; 
    }

    return 0;
}