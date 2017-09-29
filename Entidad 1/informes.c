#include <stdio.h>
#include <stdlib.h>
#include "entidad 1.h"
#include "entidad 2.h"
#include "informes.h"

void imprimirTodo(sEntidad1 arrayEntidad1[], int lenEntidad1, sEntidad2 arrayEntidad2[], int lenEntidad2)
{
    int indiceE2;
    for(i=0;i<lenEntidad2;i++)
    {
        if(arrayEntidad2[indiceE2].flagEstadoOcupado == 1)
        {
          int idE1 =  arrayEntidad2[indiceE2].idEntidad1;
          int indiceE1 = ent1_buscarIndicePorId(arrayEntidad1,lenEntidad1,idE1);

          printf("%d \t%s | %d \t%s", arrayEntidad1[indiceE1].id, arrayEntidad1[indiceE1].a, arrayEntidad2[indiceE2].id, arrayEntidad2[indiceE2].a);

        }
    }
}
