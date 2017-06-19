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
        cout << "entro" << endl;
        temPtr=temPtr->getNextPtr();
    }
    temPtr->setNextPtr(new Node<T>(data,key));
}
template <typename T>
void HashTables<T>::remove(int & key)
{
    int hash=(key%HashTablesSize);
    if(!table[hash])
        return;
    else
    {
        Node<T> *temPtr=table[hash];
        Node<T> *temPtrDelete=table[hash];
        temPtr=temPtr->getNextPtr();
        while(temPtr)
        {
            if(table[hash]->getKey()==key)
            {
                cout << "borrando " << temPtrDelete->getData() << "," << temPtrDelete->getKey() << endl;
                delete temPtrDelete;
                table[hash]=temPtr;
                temPtr=temPtr->getNextPtr();
                temPtrDelete=table[hash];

            }
            else
            {
                cout << temPtrDelete->getData() << "," << temPtrDelete->getKey() << endl;
                if(temPtr->getKey()==key)
                {
                    temPtrDelete->nextPtr=temPtr->getNextPtr();
                    delete temPtr;
                    temPtr=temPtrDelete->getNextPtr();
                }
                else
                {
                    temPtr=temPtr->getNextPtr();
                    temPtrDelete=temPtrDelete->getNextPtr();
                }

            }

        }
    }
}
