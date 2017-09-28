#include <stdio.h>
#include <stdlib.h>
#include "asociado.h"
#include "validar.h"

int main()
{
    sAsociado arrayAsociado[3];
    char bufferInt[10];

    asociado_initAsociado(arrayAsociado,3);

    do
    {
        val_getUnsignedInt(bufferInt,"\n1-Alta\n2-IMPRIMIR\n8-Salir\n","\nSolo 1 y 2\n",2,10);
        switch(atoi(bufferInt))
        {
            case 1:
                asociado_cargarDatosAsociado(arrayAsociado,)



                break;

            case 2:

                break;
        }

    }while( atoi(bufferInt) != 8);





    return 0;
}

