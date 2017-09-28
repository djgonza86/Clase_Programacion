#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char prueba[51];
    char auxiliar[51];

    //strcpy(prueba,"Hello world!\n"); //// no la vamos a usar///
    strncpy(prueba,"Hello world!\n",51);
    //prueba[50] = '\0'; // forma de demostrar que el caracter 51 termina con un 0//
    strncpy(auxiliar,"ASD123\n",51);
    printf("%s - LARGO: %d",prueba,strlen(prueba));
    printf("\n %d",strcmp("A","B"));
    printf("\n %d",strcmp("B","A"));
    printf("\n %d",strcmpi("A","a"));

    char buffer[4];
   // char buffer2[40] = "HOLA";
    fgets(buffer,4,stdin);
    //scanf("%s",buffer);
    printf("\n %s",buffer);


    //atoi() //funcion que transforma un string en entero(int)
    //atof() // funcion que transforma un string en flotante (float)






    return 0;
}

