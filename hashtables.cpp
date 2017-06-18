#include "hashtables.h"
using namespace std;
template<typename T>
HashTables<T>::HashTables()
{
    table=new Node<T> *[HashTablesSize];
    for (int i = 0; i < HashTablesSize; ++i) {
        *(table+i)=nullptr;
    }
}
template<typename T>
HashTables<T>::~HashTables()
{
    for (int i = 0; i < HashTablesSize; ++i) {
        if(*(table+i)!=nullptr)
        {
            Node<T> *prevEntry=nullptr;
            Node<T> *entry=*(table+i);
            while (entry!=nullptr) {
                prevEntry=entry;
                entry=entry->getNextPtr();
                delete prevEntry;
            }
        }

    }
    delete[] table;
}
template<typename T>
void HashTables<T>::put(T &data, int &key)
{
    int hash=key%HashTablesSize;
    if(!table[hash])
    {
        cout << "create a node" << endl;
        table[hash]=new Node<T>(data,key);
        return;
    }
    Node<T> *temPtr=table[hash];
    while(temPtr->getNextPtr())
    {
        temPtr=temPtr->getNextPtr();
    }
    temPtr->setNextPtr(new Node<T>(data,key));
}
