#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <node.h>
#include <iostream>
template<typename T>
class LinkedList
{
public:
    LinkedList();
    ~LinkedList();
    void insertFrontBack();
    void insertLastBack();
private:
    Node<T> *firstPtr;
    Node<T> *lastPtr;
    Node<T> * getNewPtr(T &val)
    {
        return new Node<T>(val);
    }
};

#endif // LINKEDLIST_H
