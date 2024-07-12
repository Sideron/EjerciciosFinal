#include "ejercicio2.h"

Letra::Letra(std::string caracter) : caracter(caracter){};

Palabra::Palabra() : primer(nullptr), ultimo(nullptr){};

void Palabra::agregarLetra(std::string car)
{
    Letra *l = new Letra(car);
    l->siguiente = nullptr;
    if (primer == nullptr)
    {
        primer = l;
        ultimo = l;
    }
    else
    {
        ultimo->siguiente = l;
        ultimo = l;
    }
}

Palabra *Palabra::invertir()
{
    Palabra *invertido = new Palabra();
    Letra *ptr = primer;
    while (ptr != nullptr)
    {
        Letra *nl = new Letra(ptr->caracter);
        nl->siguiente = invertido->primer;
        invertido->primer = nl;
        ptr = ptr->siguiente;
        if (invertido->ultimo == nullptr)
        {
            invertido->ultimo = nl;
        }
    }
    return invertido;
}

std::string Palabra::obtenerPalabra()
{
    std::string out = "";
    Letra *ptr = primer;
    while (ptr != nullptr)
    {
        out += ptr->caracter;
        ptr = ptr->siguiente;
    }
    return out;
}
