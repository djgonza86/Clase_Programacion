#ifndef ENTIDAD_2_H_INCLUDED
#define ENTIDAD_2_H_INCLUDED
#define FLAG_ESTADO_OCUPADO 1
#define FLAG_ESTADO_LIBRE 0
#define CANTIDAD_CHAR 50
typedef struct
{
    int id;
    int flagEstadoOcupado;
    char a[CANTIDAD_CHAR];
    int b;
    int idEntidad1;
}sEntidad2;

#endif // ENTIDAD_2_H_INCLUDED

int ent2_init(sEntidad2* array, int len);
int ent2_baja(sEntidad2* array, int id, int len);

