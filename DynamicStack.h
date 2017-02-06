//
// Created by 江涛 on 2017/2/7.
//

#ifndef DOM_TREE_DYNAMICSTACK_H
#define DOM_TREE_DYNAMICSTACK_H


#include<iostream>
#include <vector>

template <class T>
class DynamicStack {
public:
    DynamicStack();
    T pop();
    void push(T const& t);

    virtual ~DynamicStack();

    int getSize() const;

private:
    std::vector<T> stack;
    int size;

};

template <class T>
DynamicStack<T>::DynamicStack() {

}
template <class T>
DynamicStack<T>::~DynamicStack() {
    stack.clear();
}

template <class T>
T DynamicStack<T>::pop() {
    T output = stack.back();
    stack.pop_back();
    return output;
}
template <class T>
void DynamicStack<T>::push(T const& t) {
    stack.push_back(t);
}
template <class T>
int DynamicStack<T>::getSize() const {
    return stack.size();
}

#endif //DOM_TREE_DYNAMICSTACK_H
