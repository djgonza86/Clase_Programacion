#include <stdio.h>
#include <stdlib.h>


int main()
{
   int i=0;
   float numeroUsuario;
   float acumuladorNumeroingresado=0;
   float numeroMax;
   float numeroMin;
   float promedio;
   char respuesta='s';

   do{
       printf("Ingrese un numero \n");
       scanf("%f",&numeroUsuario);
       acumuladorNumeroingresado +=numeroUsuario;

        if(i==0)
        {
           numeroMax=numeroUsuario;
           numeroMin=numeroUsuario;

        }
        else
        {

            if(numeroUsuario > numeroMax)
            {
                numeroMax = numeroUsuario;
            }
            if(numeroUsuario<numeroMin);
            {
                numeroUsuario=numeroMin;
            }

        }
        i++;
        printf("Desea seguir ingresando numeros? s/n: \n");
        fflush(stdin);
        scanf("%c",&respuesta);

   }while(respuesta=='s');


   printf("\n El numero maximo ingresado es: %f",numeroMax);
   printf("\n El numero minimo ingresado es: %f",numeroMin);
   printf("\n El promedio es: %f",promedio);
    return 0;
}
