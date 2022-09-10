#include "prototype.h"

template <class T>
Vector131<T>::Vector131(){
    arrayPointer = new T[10];
    for (int i = 0; i < 10; i++)
        arrayPointer[i] = 0;
    lengthOfArray = 10;
    nextIndex = 0;
} 

template <class T>
Vector131<T>::~Vector131(){
    delete[] arrayPointer;
}

template <class T>
T& Vector131<T>::operator[](int index) {
    T *newPointerArray;
    if (index >= lengthOfArray){
        newPointerArray = new T[index + 10];
        for (int i = 0; i < nextIndex; i++){ 
            newPointerArray[i] = arrayPointer[i];
        }
        for (int j = nextIndex; j < index + 10; j++){
            newPointerArray[j] = 0;
        }
        lengthOfArray = index + 10;
        delete [] arrayPointer;
        arrayPointer = newPointerArray;
    }
    if (index > nextIndex){
        nextIndex = index + 1;
    }
    return *(arrayPointer + index);
} 

template <class T>
void Vector131<T>::Resize(){

    int* resizeArrayPointer = new int[nextIndex + 1];
    for(int i = 0; i < nextIndex; i++){
        resizeArrayPointer[i] = arrayPointer[i];
    }

    nextIndex++;
    arrayPointer = resizeArrayPointer;
    delete[] resizeArrayPointer;
}

template <class T>
void Vector131<T>::PushBack(T t){
    T *newPointerArray;
    if (nextIndex == lengthOfArray) {
        lengthOfArray = lengthOfArray + 10;
        newPointerArray = new T[lengthOfArray];
        for (int i = 0; i < nextIndex; i++){
            newPointerArray[i] = arrayPointer[i];
        }
        for (int j = nextIndex; j < lengthOfArray; j++){
            newPointerArray[j] = 0;
        }
        delete [] arrayPointer;
        arrayPointer = newPointerArray;
    }
    arrayPointer[nextIndex++] = t; 
}

template <class T>
void Vector131<T>::PushFront(T t){
    T *newPointerArray;
    if (nextIndex == lengthOfArray) {
        lengthOfArray = lengthOfArray + 10;
        newPointerArray = new T[lengthOfArray];
        for (int i = 1; i < nextIndex; i++){
            newPointerArray[i] = arrayPointer[i];
        }
        for (int j = nextIndex; j < lengthOfArray; j++){
            newPointerArray[j] = 0;
        }
        delete [] arrayPointer;
        arrayPointer = newPointerArray;
    }
    arrayPointer[0] = t; 
}

template <class T>
int Vector131<T>::Size(){
 return lengthOfArray; 
}