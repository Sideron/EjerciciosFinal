#include "prob12.h"

Nodo::Nodo(int num) : num(num){};

void Nodo::mostrar()
{
    std::cout << num << std::endl;
}

Pila::Pila() : primer(nullptr){};

void Pila::push(int num)
{
    Nodo *n = new Nodo(num);
    if (primer == nullptr)
    {
        n->siguiente = nullptr;
        primer = n;
    }
    else
    {
        n->siguiente = primer;
        primer = n;
    }
}

Nodo *Pila::pop()
{
    if (primer == nullptr)
    {
        return nullptr;
    }
    else
    {
        if (primer->siguiente == nullptr)
        {
            Nodo *n = primer;
            primer = nullptr;
            return n;
        }
        else
        {
            Nodo *n = primer;
            primer = primer->siguiente;
            return n;
        }
    }
}

void Pila::mostrarElementos()
{
    Nodo *ptr = primer;
    while (ptr != nullptr)
    {
        ptr->mostrar();
        ptr = ptr->siguiente;
    }
}