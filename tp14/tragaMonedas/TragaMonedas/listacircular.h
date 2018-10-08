#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H

#include <vector>

template <class T>
class ListaCircular
{
private:
    std::vector<T> datos;
    int indice = 0;
public:
    ListaCircular();
    void agregar(T dato);
    T siguiente();
    int getIndice();
};

#endif // LISTACIRCULAR_H
