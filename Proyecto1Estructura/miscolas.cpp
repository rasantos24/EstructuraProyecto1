#include "miscolas.h"

MisColas::MisColas()
{

}

bool MisColas::vaciar()
{
    if(arriba)
        return false;
    return true;
}

void MisColas::ponerEnCola(NodoT* cosa)
{
    if(arriba == NULL)
    {
        arriba = cosa;
        abajo = cosa;
        return;
    }
    abajo->anterior = cosa;
    abajo = cosa;
}

bool MisColas::quitarDeLaCola()
{
    NodoT* tempo;
    if(arriba)
    {
        tempo = arriba;
        arriba = tempo->anterior;
        delete tempo;
        return true;
    }
    return false;
}

NodoT* MisColas::getArriba()
{
    return arriba;
}

void MisColas::quitarte()
{
    while(quitarDeLaCola());
}
