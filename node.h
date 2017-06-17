#ifndef NODE_H
#define NODE_H
template <typename T> class LinkedList;
template <typename T>
class Node
{
    friend class LinkedList;
public:
    Node(T dat)
        :dat(dat),nextPtr(nullptr){}
    getData()
    {
        return this->data;
    }
    Node getNextPtr()
    {
        return this->nextPtr;
    }
private:
    T data;
    Node *nextPtr;
};

#endif // NODE_H
