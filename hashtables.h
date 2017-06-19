/*//////////////////////////////////////////////////////
///  *@file Node.h                                   ///
///   * @version 1.0                                 ///
///    * @date 15/06/2017                            ///
///     * @author Raul Edgar Quispe Totocayo         ///                                                ///
///       * @brief this program using the libntl     ///
//////////////////////////////////////////////////////*/

#ifndef HASHTABLES_H
#define HASHTABLES_H
#include <linkedlist.h>
#include <node.h>
#include <iostream>
// T is NodeType
const int HashTablesSize=128;
template<typename T>
class HashTables
{
public:
    HashTables();
    ~HashTables();
    //operator overload for print hashTable

    void put(T &,int &);
    void remove(int &);
    friend std::ostream & operator << (std::ostream & out,HashTables *hash)
    {
        for (int i = 0; i < HashTablesSize; ++i) {
            Node<T> *temPtr=hash->table[i];
            if(temPtr)
            {
                out <<"[" << i << "]-->" ;
            }
            while(temPtr)
            {
                out <<"(" << temPtr->getData() << "," << temPtr->getKey() << ")-->";
                temPtr=temPtr->getNextPtr();
            }

            if(hash->table[i])
                out << '\n';
        }
        return out;
    }

private:
    Node<T> **table;

};

#endif // HASHTABLES_H
