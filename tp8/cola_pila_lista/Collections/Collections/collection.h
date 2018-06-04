#ifndef COLLECTION_H
#define COLLECTION_H

struct nodo {
    int data;
    nodo * siguiente;
};

class Collection
{
public:
    Collection();
    virtual int siguiente() = 0;
    virtual bool tieneSiguiente() = 0;
};

#endif // COLLECTION_H
