#include <iostream>
#include "collection.h"
#include "pila.h"
#include "lista.h"
#include "visor.h"

using namespace std;

int main()
{
    Pila * unaPila = new Pila();
    unaPila->agregar(1);
    unaPila->agregar(3);
    unaPila->agregar(4);
    Visor unVisor = Visor();
    cout << "Muestro la Pila" << endl;
    unVisor.mostrar(unaPila);
    cout << endl;
    cout << "Muestro la Pila nuevamente";
    unVisor.mostrar(unaPila);
    cout << endl;
    Lista * unaLista = new Lista();
    unaLista->agregar(1);
    unaLista->agregar(3);
    unaLista->agregar(4);
    cout << "Muestro la Lista ";
    unVisor.mostrar(unaLista);
}

