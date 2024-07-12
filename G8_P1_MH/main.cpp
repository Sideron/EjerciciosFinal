#include "davinci.h"

int main()
{
    Frase f;
    f.AgregarLetra(13, "O");
    f.AgregarLetra(2, "H");
    f.AgregarLetra(89, "L");
    f.AgregarLetra(377, "A");
    f.AgregarLetra(8, "M");
    f.AgregarLetra(3, "E");
    f.AgregarLetra(233, "S");
    f.AgregarLetra(34, "A");
    f.AgregarLetra(144, "I");
    f.AgregarLetra(21, "N");
    f.AgregarLetra(1, "T");
    f.PrintDebug();
    f.reordenarDavinci();
    f.PrintDebug();
    return 0;
}