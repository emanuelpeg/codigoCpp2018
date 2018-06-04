#ifndef LISTA_H
#define LISTA_H

#include "collection.h"
#include <stddef.h>

class Lista : public Collection
{
private:
    nodo * puntero = NULL;
    nodo * final = NULL;
public:
    Lista();
    int siguiente();
    bool tieneSiguiente();
    void agregar(int i);
};

#endif // LISTA_H
