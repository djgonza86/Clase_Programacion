#include <stdio.h>
#include <stdlib.h>

#include "Calculadora.h"
#include "Consola.h"

int main()
{
    float rSuma,rResta,rMulti,rDivision,y,x;
    if(tomaNumero(&x,"Ingrese el primer numero: ", 100, -100) == -1)
    {
        printf("\n ErroR");
    }
    if(tomaNumero(&y,"\nIngrese el segundo numero: ", 100, -100) == -1)
    {
        printf("\n ErroR");
    }
    //printf("Ingrese el segundo numero : \n");
    //scanf("%f",&y);

    if(calculadora(&rDivision,&rSuma,&rResta,&rMulti,x,y)== -1)
    {
        printf("Error");
    }
    else
    {int calculadora(float* resultadoDivision, float* resultadoSuma, float* resultadoResta, float* resultadoMultiplica, float num1, float num2)
{
    int retorno = -1;
    *resultadoSuma=num1+num2;
    *resultadoResta=num1-num2;
    *resultadoMultiplica=num1*num2;

    if(num2 != 0)
    {
        *resultadoDivision = num1/num2;
        retorno = 0;
    }
    return retorno;
}





int calculadora2(float* resultado, float num1, float num2, char operacion)
{
    int retorno = -1;

    switch(operacion)
    {
        case SUMA:
            *resultado=num1+num2;
            retorno = 0;
            break;
        case RESTA:
            *resultado=num1-num2;
            retorno = 0;
            break;
        case MULTIPLICACION:
            *resultado=num1*num2;
            retorno = 0;
            break;
        case DIVISION:
            if(num2 != 0)
            {
                *resultado = num1/num2;
                retorno = 0;
            }
            break;
        default:
            retorno=-2;


    }

    return retorno;
}
        printf("\nLa division es : %.2f",rDivision);
    }
    printf("\nLa suma es: %.2f", rSuma);
    printf("\nLa resta es: %.2f",rResta);
    printf("\nLa multiplicacion es %.2f", rMulti);


    //****************************************************
    calculadora2(&rDivision,x,y,DIVISION);
    printf("\n\n\nLa division es : %.2f",rDivision);

    calculadora2(&rSuma,x,y,SUMA);
    printf("\nLa suma es : %.2f",rSuma);



    return 0;
}
/** \brief Divide
 *
 * \param resultado resultado de la di....
 * \param
 * \param
 * \return (0) ok - (-1) Error - (-2) comando desconocido
 *
 */

