#include "contactos.h"

int main()
{
    ListaContactos lst;
    lst.AgregarContacto("Eduardo1", 22, "944226147", "sideron@gmail.com", Sexo::Masculino);
    lst.AgregarContacto("Eduardo2", 20, "944226147", "sideron@gmail.com", Sexo::Masculino);
    lst.AgregarContacto("Eduardo3", 18, "944226147", "sideron@gmail.com", Sexo::Masculino);
    lst.AgregarContacto("Eduardo3", 18, "944226142", "siden@gmail.com", Sexo::Masculino);
    lst.AgregarContacto("Eduardo4", 16, "944226147", "sideron@gmail.com", Sexo::Masculino);
    lst.ImprimirContactos();
    Contacto *trg = lst.BuscarContacto("Eduardo1");
    if (trg != nullptr)
    {
        trg->mostrarDatos();
    }
    std::cout << "----------------------------" << std::endl;
    lst.EliminarContacto("Eduardo3");
    lst.EditarContacto(trg, "Edu", 30, "1234567", "yo@gmail.com");
    lst.ImprimirContactos();
    std::cout << "----------------------------" << std::endl;
    lst.ImprimirPorSexo(Sexo::Femenino);

    return 0;
}