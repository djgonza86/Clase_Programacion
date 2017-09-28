#include <stdio.h>
#include <stdlib.h>ç
#include <string.h>
#include "entidad 2.h"
#include "validacion.h"


int ent2_init(sEntidad2 array[], int len)
{
    int retorno = -1;
    int i;
    if(array!= NULL && len > 0)
    {
        for(i=0; i<len ; i++)
        {
            array[i].flagEstadoOcupado = FLAG_ESTADO_LIBRE;
        }
    }
    return retorno;
}

int ent2_generarProximoId(sEntidad2 array[], int len)
{

}

int ent2_buscarPosicionLibre(sEntidad2 array[], int len)
{
    // me devuelve el index del primer item
    //vacio del array
    //La voy a usar para el ALTA.

    int retorno = -1;
    int i;
    if(array != NULL && len > 0)
    {
        for(i=0; i<len ; i++)
        {
            if(array[i].flagEstadoOcupado = FLAG_ESTADO_LIBRE)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}
