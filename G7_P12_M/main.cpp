#include "prob12.h"

int main()
{
    Pila p;
    p.mostrarElementos();
    p.push(3);
    p.primer->mostrar();
    p.push(7);
    p.primer->mostrar();
    p.push(5);
    p.primer->mostrar();
    p.push(8);
    p.mostrarElementos();

    return 0;
}