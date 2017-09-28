#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros[5]={64,88,1,99,57};
    int i;

    ordenar(numeros)













    return 0;
}

void imprimirCadena(char cadena [])
{
    int i = 0;
    int flagEncontreFinal = 0;

    while(flagEncontreFinal == 0)
    {
        //imprimir
        char c = cadena[i];

        if(c!=0)
        {
            //imprimo
            printf("%c",c);
        }
        else
        {
            flagEncontreFinal = 1;
        }
        i++;
    }
}




/////////////////////////////////////////////////////////////////////////////////////////////


void ordenar(int A[], int len)
{
    //declarar variables
    int i, aux;
    int flagCambioAlgo;

    // realizamos el do while para que lo ejecute al menos una vez
    do
    {
        // inicializamos el flag en 0 para que se vuelva a iterar el bucle
        flagCambioAlgo = 0;
        for(i = 0; i < (len-1); i++) //realizamos el for para iterar
        {
            if(A[i] > A[i+1] ) //if compara el menor valor y lo compara con el siguiente
            {
                flagCambioAlgo = 1;
                aux = A[i];
                A[i] = A[i+1];
                A[i+1] = aux;

            }
        }
    }while(flagCambioAlgo == 1); // realiza la vuelta y vuelve a relizar la vuelta del bucle

}


/////////////////////////////////////algoritmo de insercion///////////////////////////////////////




