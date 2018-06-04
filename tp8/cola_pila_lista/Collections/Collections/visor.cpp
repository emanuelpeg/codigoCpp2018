#include "visor.h"
#include <iostream>

using namespace std;

Visor::Visor()
{
}

void Visor::mostrar(Collection * c){
    while (c->tieneSiguiente()){
        cout << c->siguiente() << "   ";
    }
    cout << endl;
}
