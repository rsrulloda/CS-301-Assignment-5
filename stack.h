//
// Created by Alexandro I. Milanez on 9/27/22.
//

#ifndef CS_301_ASSIGNMENT_5_STACK_H
#define CS_301_ASSIGNMENT_5_STACK_H
#include<cstdlib>
#include<iostream>

using namespace std;

template <typename T>
class Node {
public:
    T val;
    Node<T> *next;

    Node(T v)
    {
        val = v;
        next = NULL;
    }

    void setData(T v) {
        val = v;
    }

    T getVal() {
        return val;
    }

    Node getNext() {
        return next;
    }

    void setNext(Node n) {
        next = n;
    }
};

template <typename T>
class Stack {
private:
    Node<T> *top;
    int size;
public:
    Stack() { // default constructor
        top = NULL;
        size = 0;
    }

    Stack(int size) { // parameterized constructor

    }

    void push(T val) {
        Node node = new Node(val, top);
    }

    T pop() {
        T val = NULL;
        if(isEmpty()) {
            cout << "Stack is empty.";
        } else {
            val = top->getVal();
            Node temp = top;
            top = top->getNext();
            temp.setNext(NULL);
            size--;
        }
        return val;
    }

    bool isEmpty() {
        return (size<1);
    }

    int getSize() {
        return size;
    }

};
#endif //CS_301_ASSIGNMENT_5_STACK_H


