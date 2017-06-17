/*//////////////////////////////////////////////////////
///  *@file Node.h                                   ///
///   * @version 1.0                                 ///
///    * @date 15/06/2017                            ///
///     * @author Raul Edgar Quispe Totocayo         ///                                                ///
///       * @brief this program using the libntl     ///
//////////////////////////////////////////////////////*/

#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <linkedlist.h>
template <typename T> class LinkedList;
template <typename T>
class Node
{
    friend class LinkedList<T>;
public:
    Node(T &d,T &k)//construct
        :data(d),k(key),nextPtr(nullptr){}//initialization
    T getData()//this function return data
    {
        return this->data;
    }
    T getKey()
    {
        return this->key;
    }
    void setData(T & d)
    {
        this->data=d;
    }
    Node getNextPtr()//this function return nextPtr
    {
        return this->nextPtr;
    }
    void setNextPtr(Node ptr)
    {
        this->nextPtr=ptr;
    }

private:
    T data;
    T key;
    Node *nextPtr;

};

#endif // NODE_H
