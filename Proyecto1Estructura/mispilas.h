#ifndef MISPILAS_H
#define MISPILAS_H
#include "nodot.h"
#include <iostream>
using namespace std;

class MisPilas
{
public:
    MisPilas();
    NodoT* primero = NULL;
    NodoT* getPrimero();
    bool sacar();
    void meter(NodoT* cosa);
    bool vaciar();
    void quitar();
    int tm = 1;
};

#endif // MISPILAS_H
