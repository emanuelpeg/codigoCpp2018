#include "mueble.h"

Mueble::Mueble(int anioCreacion)
{
    this->anioCreacion = anioCreacion;
}

double Mueble::amortizar(){
    int dif = 2018 - this->anioCreacion;
    return this->valor * (dif * 0.05);
}

void Mueble::setAnioCreacion(int anioCreacion){
    this->anioCreacion = anioCreacion;
}

char * Mueble::nombre(){
    return "Mueble";
}
