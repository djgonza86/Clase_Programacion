#include <stdio.h>
#include <stdlib.h>

int tomaNumero(float* x, char mensaje[], float maximo, float minimo)

{

    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);

        if(auxiliar < maximo && auxiliar > minimo)
        {
            *x = auxiliar;
            return 0;
        }


            return -1;





}

















