#include "menuPrincipal.h"
#include "servicioEmpleado.h"
#include "gestionArchivoEmpleados.h"

int main()
{
    GestionArchivoEmpleado empleados("empleados.dat");
    ServicioEmpleado servicioEmpleado(empleados);
    servicioEmpleado.verEmpleados();
    MenuPrincipal menu;
    menu.mostrarMenu();

    return 0;
}
