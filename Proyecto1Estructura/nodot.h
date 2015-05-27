#ifndef NODOT_H
#define NODOT_H
#include <iostream>
using namespace std;

class NodoT
{
public:
    NodoT(int valor);
    int valor;
    NodoT* anterior;
};

#endif // NODOT_H
