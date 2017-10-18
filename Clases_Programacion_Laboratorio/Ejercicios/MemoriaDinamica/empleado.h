#define DEBUG

#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

#define NAME_SIZE 51
#define LASTNAME_SIZE 51

typedef struct
{
    char nombre[NAME_SIZE];
    char apellido[LASTNAME_SIZE];
    int idSector;

}Empleado;
#endif // EMPLEADO_H_INCLUDED


Empleado* empleado_new(void);
Empleado* empleado_newConstructor(char *nombre, char *apellido, int idSector);
void empleado_delete(Empleado* pEmpleado);
int empleado_setNombre(Empleado* pEmpleado, char *nombre);
char* empleado_getNombre(Empleado* pEmpleado);
int empleado_setApellido(Empleado* pEmpleado, char *apellido);
char* empleado_getApellido(Empleado* pEmpleado);
int empleado_setIdSector(Empleado* pEmpleado, int idSector);
int empleado_getIdSector(Empleado* pEmpleado);
void empleado_debug(Empleado* pEmpleado);
