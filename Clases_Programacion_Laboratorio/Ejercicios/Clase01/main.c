#include <stdio.h>
#include <stdlib.h>
#define STAND 10

int main()
{

    int numeroIngresado;
    int i;
    int contadorNegativos=0;
    int contadorPositivos=0;
    int acumuladorPositivo=0;
    int acumuladorNegativos=0;
    float promedioPositivo;
    float promedioNegativo;


    for(i=0; i<STAND; i++)
    {
        printf("Ingrese el numero: \n");
        scanf("%d",&numeroIngresado);

        if(numeroIngresado<0)
        {
            contadorNegativos++;
           acumuladorNegativos=acumuladorNegativos+numeroIngresado;
        }

        else
        {
            acumuladorPositivo=acumuladorPositivo+numeroIngresado;
        }


    }
    contadorPositivos=STAND-contadorNegativos;
    promedioPositivo=acumuladorPositivo/(float)contadorPositivos;
    promedioNegativo=acumuladorNegativos/(float)contadorNegativos;
    printf("La cantidad de numueros negativos es %d y la de positivos es %d \n",contadorNegativos,STAND-contadorNegativos);
    printf("El promedio de numeros negativos es %.2f \n",promedioNegativo);
    printf("El promedio de numeros positivos es %.2f",promedioPositivo);
    return 0;

}

