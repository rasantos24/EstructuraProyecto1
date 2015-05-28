#ifndef MIGRANJA_H
#define MIGRANJA_H
#include <QString>
#include <iostream>
#include "mtamagotchi.h"

using namespace std;

class MiGranja
{
public:
    MiGranja();
    void agregar(QString nombre, QString resi);
    void remover(int posi);
    void insertar(int posi, QString nombre, QString resi);
    bool vaciar();
    void mostrar();
    mTamagotchi* inicial;
    mTamagotchi* final;
    mTamagotchi* getFinal();
    mTamagotchi* getPosi(int posi);
    int uva;
    int tamanio;
};

#endif // MIGRANJA_H
