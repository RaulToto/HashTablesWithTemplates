/*//////////////////////////////////////////////////////
///  *@file Node.h                                   ///
///   * @version 1.0                                 ///
///    * @date 15/06/2017                            ///
///     * @author Raul Edgar Quispe Totocayo         ///                                                ///
///       * @brief this program using the libntl     ///
//////////////////////////////////////////////////////*/
//includes
#include <linkedlist.h>
#include <node.h>
#include <hashtables.h>
#include <hashtables.cpp>
#include "mainwindow.h"

//includes
#include <QApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    HashTables<int> *ptr= new HashTables<int>();
    int a=45,b=2,c=130;
    ptr->put(a,b);
    a=a-10;
    ptr->put(a,b);
    a=a-10;
    ptr->put(a,c);
    ptr->put(a,b);
    ptr->put(a,b);
    ptr->remove(b);

    cout << ptr;
    delete ptr;
    //cout << "hello" << endl;
    /*
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();*/
}
