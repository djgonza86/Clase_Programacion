#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "entidad 1.h"
#include "validacion.h"

int ent1_init(sEntidad1 array[], int len)
{
    int retorno = -1;
    int i;
    if(array != NULL && len > 0)
    {
        for(i=0; i<len ; i++)
        {
            array[i].flagEstadoOcupado = FLAG_ESTADO_LIBRE;
        }
    }
    return retorno;
}

int ent1_generarProximoId(sEntidad1 array[], int len)
{

}

int ent1_buscarPosicionLibre(sEntidad1 array[], int len)
{
    // me devuelve el indice del primer item
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

int ent1_alta(sEntidad1 array[], int len)
{
    int retorno = -1;

    //1.Buscar posicion libre
    int indiceVacio = ent1_buscarPosicionLibre(array, len);

    if(indiceVacio == 0);
    {
        //2. Generar id
        int idNuevo = ent1_generarProximoId(array,len);

        //3.Pedir datos al usuario(validados)
        char bufferAuxNombre[50];
        if(val_getNombre(bufferAuxNombre, "Ingrese nombre", "Nombre invalido",3,50)== 0);
        // Campo bien cargado
        //4.Cargar datos en items vacios
        {
            array[indiceVacio].flagEstadoOcupado = 1;
            array[indiceVacio].id = idNuevo;
            strncpy(array[indiceVacio].a,bufferAuxNombre,50);
            retorno = 0;
        }


    } return retorno;



}
