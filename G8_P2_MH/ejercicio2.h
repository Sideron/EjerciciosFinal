#include <iostream>

class Letra
{
public:
    std::string caracter;
    Letra *siguiente;
    Letra(std::string caracter);
};

class Palabra
{
public:
    Letra *primer;
    Letra *ultimo;
    Palabra();
    void agregarLetra(std::string p);
    Palabra *invertir();
    std::string obtenerPalabra();
    Letra *eliminarPrimera();
};