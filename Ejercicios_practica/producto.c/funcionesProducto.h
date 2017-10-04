#ifndef FUNCIONESPRODUCTO_H_INCLUDED
#define FUNCIONESPRODUCTO_H_INCLUDED
#define LF 10

typedef struct
{
    char nombre[51];
    char descripcion[101];
    float precio;
    int estaCargado;     // si=1 no=0
}sProducto;


#endif // FUNCIONESPRODUCTO_H_INCLUDED



int inicializarArray( sProducto a[], int len);
