#include "mispilas.h"

MisPilas::MisPilas()
{

}

NodoT* MisPilas::getPrimero(){
    return primero;
}

bool MisPilas::sacar()
{
    if(primero)
    {
        NodoT* tempo = primero;
        primero = primero->anterior;
        delete tempo;
        tm--;
        return true;
    }
    return false;
}
void MisPilas::meter(NodoT* cosa)
{
    if(tm <= 5)
    {
        if(primero)
            cosa->anterior = primero;
        primero = cosa;
        tm++;
    }
}

bool MisPilas::vaciar()
{
    if(primero)
        return false;
    return true;
}

void MisPilas::quitar()
{
    while(sacar());
}
