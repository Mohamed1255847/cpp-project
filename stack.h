// Stack.h
#ifndef STACK_H
#define STACK_H

#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> elements;

public:
    // Constructor
    Stack();

    // Copy constructor
    Stack(const Stack<T>& other);

    // Push
    void push(const T& value);

    // Pop
    void pop();

    // Stackisempty
    bool isEmpty() const;

    // Stacktop
    T topValue() const;

    // Stackisfull (not applicable for dynamic arrays)
    bool isFull() const;

    // Stacksize
    int size() const;

    // Function to sort the stack
    void sort();
};

#include "stack.cpp"  // Include the implementation file

#endif // STACK_H