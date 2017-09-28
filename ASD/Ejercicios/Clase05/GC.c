#include "GC.h"
#include <stdio.h>
#include <stdlib.h>

int tomadeDatos(int arrayA[], float arrayB[])
{
    int i;
    float aux;


    for(i=0; i<CANTIDAD_INGRESADA; i++)
    {
        printf("Ingrese la edad: \n");
        scanf("%d",&arrayA[i]);

        printf("Ingrese el sueldo: \n");
        scanf("%f",&aux);

        arrayB[i] = aux;

    }
    return 0;
}

imprimirDatos
