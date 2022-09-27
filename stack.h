//
// Created by Alexandro I. Milanez on 9/27/22.
//

#ifndef CS_301_ASSIGNMENT_5_STACK_H
#define CS_301_ASSIGNMENT_5_STACK_H
#include<cstdlib>

template <typename T>
class Node
{
public:
    T val;
    Node<T> *next;
    Node(T v)
    {
        val = v;
        next = NULL;
    }
};

template <typename T>
class Stack
{
private:
    Node<T> *stack;
    int size;
public:
    Stack()
    {

        size =0;
    }
    //Need more code here



};
#endif //CS_301_ASSIGNMENT_5_STACK_H


