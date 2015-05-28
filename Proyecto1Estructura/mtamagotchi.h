#ifndef MTAMAGOTCHI_H
#define MTAMAGOTCHI_H
#include <iostream>
#include <QString>
#include <QTimer>
#include "nodot.h"
#include "miscolas.h"
#include "mispilas.h"

using namespace std;

class mTamagotchi
{
public:
    mTamagotchi();
    mTamagotchi(QString nombre, QString resistencia);
    QString nombre;
    QString resistencia;
    int vida, tiempo, monedasPropias, comida, banio, salud, dormir;
    mTamagotchi* siguiente;

    MisPilas* duerme;
    MisPilas* hambriento;
    MisPilas* enfermo;
    MisPilas* caca;
    MisColas* premios;
    MisColas* moneditas;
    MisColas* LOG;
    void saca(char valor);
    void hambreto();
    void fatiga();
    void saludo();
    void MMD();
    void premio();
    void enviarMoneda(mTamagotchi* tama);
};

#endif // MTAMAGOTCHI_H
