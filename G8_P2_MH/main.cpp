#include "ejercicio2.h"

int main()
{
    Palabra p;
    p.agregarLetra("A");
    p.agregarLetra("M");
    p.agregarLetra("M");
    p.agregarLetra("A");
    Palabra *inv = p.invertir();
    if (p.obtenerPalabra() == inv->obtenerPalabra())
    {
        std::cout << "Es palindromo";
    }
    else
    {
        std::cout << "NO es palindromo";
    }
    return 0;
}