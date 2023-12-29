// main.cpp
#include <iostream>
#include "stack.h"

int main() {
    using namespace std;

    Stack<int> myStack;

    // Push some values onto the stack
    myStack.push(3);
    myStack.push(1);
    myStack.push(4);
    myStack.push(2);
    myStack.push(5);

    // Display the original stack
    cout << "Original Stack: ";
    while (!myStack.isEmpty()) {
        cout << myStack.topValue() << " ";
        myStack.pop();
    }
    cout << endl;

    // Refill the stack
    myStack.push(3);
    myStack.push(1);
    myStack.push(4);
    myStack.push(2);
    myStack.push(5);

    // Sort the stack
    myStack.sort();

    // Display the sorted stack
    cout << "Sorted Stack: ";
    while (!myStack.isEmpty()) {
        cout << myStack.topValue() << " ";
        myStack.pop();
    }
    cout << endl;

    return 0;
}