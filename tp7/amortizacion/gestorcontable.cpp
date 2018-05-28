#include "gestorcontable.h"

GestorContable::GestorContable()
{
}

void GestorContable::imprimir(Bien * unBien){
    cout << unBien->nombre() << " amortizacion : "<< unBien->amortizar() << endl;
}
