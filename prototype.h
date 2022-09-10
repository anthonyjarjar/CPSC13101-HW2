#ifndef PROTOTYPE_H
#define PROTOTYPE_H

template <class T>
class Vector131{
    private:
        T *arrayPointer;
        int nextIndex;
        int lengthOfArray;
    public:
        Vector131();
        ~Vector131();
        void PushBack(T t);
        void PushFront(T t);
        void Resize();
        T& operator[](int index);
        int Size();
};

#endif