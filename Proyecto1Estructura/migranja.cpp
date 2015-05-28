#include "migranja.h"

MiGranja::MiGranja()
{
    tamanio = 0;
    inicial = NULL;
    final = NULL;
}

void MiGranja::agregar(QString nombre, QString resi)
{
    tamanio++;
    if(!inicial)
    {
        inicial = new mTamagotchi(nombre, resi);
        final = inicial;
        return;
    }
    mTamagotchi* tempo = new mTamagotchi(nombre, resi);
    tempo->siguiente = inicial;
    inicial = tempo;
    if(tempo->nombre == nombre)
        return;

    final->siguiente = new mTamagotchi(nombre, resi);
    final = final->siguiente;
}

void MiGranja::remover(int posi)
{
    posi -= 1;
    if(posi >= 0 && posi < tamanio-1)
    {
        mTamagotchi* tempor = getPosi(posi);
        mTamagotchi* tempo = tempor->siguiente;
        tempor->siguiente =tempo->siguiente;
        delete tempo;
        tamanio--;
    }
    else if(posi == -1)
    {
        mTamagotchi* tempo = inicial;
        inicial = inicial->siguiente;
        delete tempo;
        tamanio--;
    }
    else if(posi == tamanio-2)
    {
        mTamagotchi* tempo = getPosi(posi);
        tempo->siguiente = NULL;
        delete final;
        final = tempo;
        tamanio--;
    }
}

void MiGranja::insertar(int posi, QString nombre, QString resi)
{
    if(posi >= 0 && posi < tamanio)
    {
        if(posi == 0)
        {
            mTamagotchi* tempo = new mTamagotchi(nombre, resi);
            tempo->siguiente = inicial;
            inicial = tempo;
        }
        else if(posi == tamanio-1)
            agregar(nombre, resi);
        else
        {
            mTamagotchi* temp = getPosi(posi-1);
            mTamagotchi* tempo = new mTamagotchi(nombre, resi);
            tempo->siguiente = temp->siguiente;
            temp->siguiente = tempo;
            tamanio++;
        }
    }
}

mTamagotchi* MiGranja::getFinal()
{
    return final;
}

mTamagotchi* MiGranja::getPosi(int posi)
{
    if(posi >= 0 && posi < tamanio)
    {
        if(posi == tamanio-1)
            return final;
        else
        {
            mTamagotchi* tempo = inicial;
            for(int i = 1; i <= posi; i++)
            {
                tempo = tempo->siguiente;
            }
            return tempo;
        }
    }
    return NULL;
}

bool MiGranja::vaciar()
{
    if(inicial == NULL)
        return true;
    return false;
}
