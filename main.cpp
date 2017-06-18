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
    int a=45,b=2;
    ptr->put(a,b);
    cout << "create a " << ptr;
    delete ptr;
    //cout << "hello" << endl;
    /*
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();*/
}
