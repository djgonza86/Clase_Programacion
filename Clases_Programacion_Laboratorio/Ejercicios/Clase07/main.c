#include <stdio.h>
#include <stdlib.h>

#define LF 10
#define CANTIDAD 3
#include <string.h>


int validarInt(char* buffer)
{
 int retorno = 0, i=0;

 while(buffer[i] != LF)
 {
     if(buffer[i] < '0' || buffer[i] > '9')
     {
      retorno = -1;
      break;
     }
    return retorno;
 }
}


int obtenerEdad(int* Edad, char* msg[])
{
    char buffer[748];
    int retorno = -1;
    printf(msg);
    fgets(buffer,748,stdin);
    buffer[746] = LF;
    buffer[747] = '\0';


    if(validarInt(buffer) == 0)
    {
        *Edad = atoi(buffer);
        retorno = 0;
    }

    return retorno;
}

int main()
{
   int edad[CANTIDAD];
   int i;

   for(i=0;i<CANTIDAD;i++)
   if(obtenerEdad(&edad[1],"Ingrese la EDAD: ") == -1)
   {
    printf("\n MAL");
   }



    return 0;
}












