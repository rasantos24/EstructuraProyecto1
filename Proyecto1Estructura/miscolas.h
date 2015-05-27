#ifndef MISCOLAS_H
#define MISCOLAS_H
#include "nodot.h"
#include <iostream>
using namespace std;

class MisColas
{
public:
    MisColas();
    NodoT* arriba = NULL;
    NodoT* abajo = NULL;
    bool vaciar();
    void ponerEnCola(NodoT* cosa);
    bool quitarDeLaCola();
    NodoT* getArriba();
    void quitarte();
};

#endif // MISCOLAS_H
