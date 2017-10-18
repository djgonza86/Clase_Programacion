#include <stdio.h>
#include <stdlib.h>
#include "empleado.h"

int main()
{

    Empleado *pEmpleado;
    pEmpleado = empleado_newConstructor("Juan","Perez",33);
    empleado_debug(pEmpleado);
    empleado_setApellido(pEmpleado, "CABRERA");
    empleado_debug(pEmpleado);
    empleado_setNombre(pEmpleado, "GONZALO");
    empleado_debug(pEmpleado);
    empleado_setIdSector(pEmpleado, 25);
    empleado_debug(pEmpleado);


    return 0;
}
