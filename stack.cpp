// Stack.cpp
#include "stack.h"
#include <algorithm>

template <typename T>
Stack<T>::Stack() {}

template <typename T>
Stack<T>::Stack(const Stack<T>& other) : elements(other.elements) {}

template <typename T>
void Stack<T>::push(const T& value) {
    elements.push_back(value);
}

template <typename T>
void Stack<T>::pop() {
    if (!isEmpty()) {
        elements.pop_back();
    }
}

template <typename T>
bool Stack<T>::isEmpty() const {
    return elements.empty();
}

template <typename T>
T Stack<T>::topValue() const {
    if (!isEmpty()) {
        return elements.back();
    }
    // Handle empty stack case
    throw std::out_of_range("Stack is empty");
}

template <typename T>
bool Stack<T>::isFull() const {
    // Dynamic arrays don't have a fixed size, so always return false
    return false;
}

template <typename T>
int Stack<T>::size() const {
    return elements.size();
}

template <typename T>
void Stack<T>::sort() {
    std::sort(elements.begin(), elements.end());
}