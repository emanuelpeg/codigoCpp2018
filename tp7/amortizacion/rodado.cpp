#include "rodado.h"

Rodado::Rodado()
{
}

double Rodado::amortizar(){
    int por = this->km /1000;
    return this->valor * ((0.1) * por);
}


void Rodado::setKm(int km){
    this->km = km;
}


char * Rodado::nombre(){
    return "Rodado";
}
