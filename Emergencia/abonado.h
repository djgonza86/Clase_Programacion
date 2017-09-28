#ifndef _ABONADO
#define _ABONADO
typedef struct
{   char nombre[51];
    char apellido[51];
    int edad;
    int Id;
    int dni;
    unsigned char estado;
}sAsociado;
#endif // _ABONADO

#define CANTIDAD_ASOCIADOS 3
#define ASOCIADO_LIBRE 0
#define ASOCIADO_OCUPADO 1
#define INTENTOS 3

int abonado_cargarDatos (sAsociado* arrayAsociado, int indice);
int abonado_initAsociado (sAsociado* arrayAsociado, int longitud);
int abonado_indiceLibre(sAsociado* arrayAsociado, int longitud);
int abonado_obtenerId(sAsociado* arrayAsociado, int longitud);
