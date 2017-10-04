#ifndef _ASOCIADO
#define _ASOCIADO
typedef struct
{   char nombre[51];
    char apellido[51];
    int edad;
    int Id;
    char dni;
    unsigned char estado;
}sAsociado;

#endif // _ASOCIADO

#define CANTIDAD_ASOCIADOS 3
#define ASOCIADO_LIBRE 0
#define ASOCIADO_OCUPADO 1
#define INTENTOS 3

int asociado_cargarDatos (sAsociado* arrayAsociado, int indice);
int asociado_initAsociado (sAsociado* arrayAsociado, int longitud);
int asociado_indiceLibre(sAsociado* arrayAsociado, int longitud);
int asociado_obtenerId(sAsociado* arrayAsociado, int longitud);
