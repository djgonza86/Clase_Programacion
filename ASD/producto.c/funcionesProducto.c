#include <stdio.h>
#include <stdlib.h>
#include "funcionesProducto.h"

int inicializarArray( sProducto a[], int len)
{
    int i;

    for(i=0;i<len;i++)
    {
        a[i].estaCargado = 0;
    }
    return 0;
}

char tomaDatos(char a[], char b[], char* c[])

{
    char bufferNombre[500];
    char bufferDescripcion[500];
    char bufferPrecio[500];

    printf("Ingrese nombre: \n");
    fgets(bufferNombre,500,stdin);

    printf("Ingrese descripcion: \n");
    fgets(bufferDescripcion,500,stdin);

    printf("Ingrese precio: \n");
    fgets(bufferPrecio,500,stdin);

    if(validarPrecio(bufferPrecio) == 0)
    {
        *c = atof(bufferPrecio)
    }



}

int validarPrecio(char* buffer)
{
    int retorno = 0;
    int i = 0;

    while(buffer[i] != '\0')
    {
        if((buffer[i] < '0' || buffer[i] > '9') && buffer[i] != LF)
        {
            retorno = -1;
        }

        i++;
    }

    return = retorno;

}




