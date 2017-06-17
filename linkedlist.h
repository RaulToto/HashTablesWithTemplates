/*//////////////////////////////////////////////////////
///  *@file Node.h                                   ///
///   * @version 1.0                                 ///
///    * @date 15/06/2017                            ///
///     * @author Raul Edgar Quispe Totocayo         ///                                                ///
///       * @brief this program using the libntl     ///
//////////////////////////////////////////////////////*/

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

    bool isEmpty();
private:
    Node<T> *firstPtr;
    Node<T> *lastPtr;
    Node<T> * getNewPtr(T &val)
    {
        return new Node<T>(val);
    }
};

#endif // LINKEDLIST_H
