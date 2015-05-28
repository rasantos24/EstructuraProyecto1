#include "mtamagotchi.h"

mTamagotchi::mTamagotchi()
{

}

mTamagotchi::mTamagotchi(QString nombre, QString resistencia)
{
    this->nombre = nombre;
    this->resistencia = resistencia;
    comida = 0;
    dormir = 0;
    banio = 0;
    salud = 0;
    vida = 500;
    tiempo = 0;
    duerme = new MisPilas();
    hambriento = new MisPilas();
    enfermo = new MisPilas();
    caca = new MisPilas();
}

void mTamagotchi::saca(char valor)
{
    switch (valor)
    {
        case 'D':
            duerme->sacar();
            if(dormir > 1)
                dormir--;
        break;

        case 'H':
            hambriento->sacar();
            if(comida > 1)
                comida--;
        break;

        case 'E':
            enfermo->sacar();
            if(salud>1)
                salud--;
        break;

        case 'C':
            caca->sacar();
            if(banio>1)
                banio--;
        break;
    }
}

void mTamagotchi::hambreto()
{
    if(comida < 6)
    {
        NodoT* tempo = new NodoT(comida);
        hambriento->meter(tempo);
        comida++;
    }
}

void mTamagotchi::saludo()
{
    if(salud < 6)
    {
        NodoT* tempo = new NodoT(salud);
        enfermo->meter(tempo);
        salud++;
    }
}

void mTamagotchi::fatiga(){
    if(dormir < 6)
    {
        NodoT* tempo = new NodoT(dormir);
        duerme->meter(tempo);
        dormir++;
    }
}

void mTamagotchi::MMD(){
    if(banio < 6)
    {
        NodoT* tempo = new NodoT(banio);
        caca->meter(tempo);
        banio++;
    }
}
