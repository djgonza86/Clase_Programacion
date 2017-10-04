#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  char nombre[11];
  int edad;
  char apellido[11];
}sPersona;





int main()
{
    sPersona datosAux;


    strncpy(datosAux.nombre,"Gonzalo\n",10);
    printf("%s",datosAux.nombre);



    datosAux.edad = 25;
    printf("%d",datosAux.edad);

    strncpy(datosAux.apellido,"Cabrera",10);
    printf("%s",)








return 0;
}
