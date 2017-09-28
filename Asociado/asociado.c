#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "asociado.h"
#include "validar.h"

int asociado_cargarDatosAsociado(sAsociado* arrayAsociado, int indice)
{
    int retorno = -1;
    char bNombre[51];
    char bApellido[51];
    char bEdad[3];
    char bDni[11];
    int id;

     if(arrayAsociado != NULL && indice >= 0)
     {
         if(val_getNombre(bNombre,"\n Ingrese el Nombre del Asociado: ","\n Nombre no valido",INTENTOS,51) == 0)
         {
             if(val_getNombre(bApellido,"\n Ingrese el Apellido del Asociado: ", "\n Apellido no valido",INTENTOS,51) == 0)
             {
                if(val_getInt(bEdad,"\n Ingrese la Edad: ", "\n Edad no valida",INTENTOS,3) == 0)
                {
                    if(val_getInt(bDni,"\n Ingrese el DNI: ", "\n DNI no valido",INTENTOS,11) == 0)
                    {
                        id = asociado_obtenerId(arrayAsociado,CANTIDAD_ASOCIADOS);
                            if(id != -1)
                            {
                                strncpy(arrayAsociado[indice].nombre, bNombre, 51);
                                strncpy(arrayAsociado[indice].apellido, bApellido, 51);
                                arrayAsociado[indice].edad = atoi(bEdad);
                                arrayAsociado[indice].dni = atoi(bDni);
                                arrayAsociado[indice].estado = ASOCIADO_OCUPADO;
                                arrayAsociado[indice].Id = id;
                                retorno = 0;
                            }
                    }
                }
             }
         }

     }return retorno;
}

int asociado_initAsociado (sAsociado* arrayAsociado, int longitud)
{
    int retorno = -1;
    int i;
    if(arrayAsociado != NULL && longitud > 0)
    {
        for(i=0; i<longitud ; i++)
        {
            arrayAsociado[i].estado = ASOCIADO_LIBRE;
        }
    }
    return retorno;
}

int asociado_printAsociado (sAsociado* arrayAsociado, int longitud)
{
    int retorno = -1;
    int i;
    if(arrayAsociado != NULL && longitud > 0)
    {
        for(i=0; i<longitud ; i++)
        {
            if(arrayAsociado[i].estado == ASOCIADO_OCUPADO)
            {
                printf("\nID: %d \nNombre: %s \nApellido: %s \nEdad: %d \nDNI: %d",arrayAsociado[i].Id, arrayAsociado[i].nombre, arrayAsociado[i].apellido, arrayAsociado[i].edad, arrayAsociado[i].dni);
            }
        }
    }
    return retorno;
}

int asociado_indiceLibre(sAsociado* arrayAsociado, int longitud)
{
    int retorno = -1;
    int i;
    if(arrayAsociado != NULL && longitud > 0)
    {
        for(i=0; i<longitud ; i++)
        {
            if(arrayAsociado[i].estado == ASOCIADO_LIBRE)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

int asociado_obtenerId(sAsociado* arrayAsociado, int longitud)
{
    int i, bId = -1;
    int retorno = -1;
    if(arrayAsociado != NULL && longitud > 0)
    {
        for(i=0; i<longitud ; i++)
        {
            if((arrayAsociado[i].estado == ASOCIADO_OCUPADO)&&(arrayAsociado[i].Id > bId))
            {
                bId = arrayAsociado[i].Id;
            }
        }
        retorno = bId + 1;
    }
    return retorno;
}
