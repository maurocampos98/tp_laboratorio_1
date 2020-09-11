#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"

int main ()
{
int opcion;
float numero1=0;
float numero2=0;
float resultadoSuma=0;
float resultadoResta=0;
float resultadoMult=0;
float resultadoDiv=0;
float resultadoFact1=0;
float resultadoFact2=0;
int reint=10;
int mostrarResultados=0;


    do{
     printf("\nOpcion 1: Ingresar 1er operando (A: %.2f)",numero1);
     printf("\nOpcion 2: Ingresar 2do operando (A: %.2f)",numero2);
     printf("\nOpcion 3: Calcular todas las operaciones. ");
     printf("\n a)Calcular la suma (A+B) ");
     printf("\n b)Calcular la resta (A-B) ");
     printf("\n c)Calcular la division (A/B)");
     printf("\n d)Calcular la multiplicacion (A*B)");
     printf("\n e)Calcular el factorial(A!)");
     printf("\nOpcion 4: Informar resultados ");
     printf("\nOpcion 5: Salir\n");
     fflush(stdin);
    GetValEntero(&opcion,10,"Seleccione una opcion: ","Esa opcion no es valida \n",6,0);


     switch(opcion)
       {
        case 1:
        GetValDecimal(&numero1,reint,"Ingrese Numero 1: ","Eso no es un numero");
        break;

        case 2:
        GetValDecimal(&numero2,reint,"Ingrese Numero 2: ","Eso no es un numero");
        break;

        case 3:
        GetSuma(&resultadoSuma,numero1,numero2);
        GetResta(&resultadoResta,numero1,numero2);
        GetDivision(&resultadoDiv,numero1,numero2);
        GetMultiplicacion(&resultadoMult,numero1,numero2);
        resultadoFact1=factorial(numero1);
        resultadoFact2=factorial(numero2);
        mostrarResultados=1;
        break;

        case 4:

            if (mostrarResultados==1)
            {
            GetTexto(resultadoSuma,"1)El resultado de A+B es: %.2f \n");
            GetTexto(resultadoResta,"2)El resultado de A-B es: %.2f \n");
             if(numero2==0)
             {
              GetTexto(resultadoDiv,"3)No se puede dividir por 0\n");
             }else
             {
              GetTexto(resultadoDiv,"3)El resultado de A/B es: %.2f \n");
             }
            GetTexto(resultadoMult,"4)El resultado de A*B es: %.2f \n");
            if(numero1 < 0)
            {
            GetTexto(resultadoFact1,"5)No se puede factorear el A ya que es negativo");
            }else
            {
            GetTexto(resultadoFact1,"5)El factorial de A es: %.0f");
            }
            if(numero2 < 0)
            {
            GetTexto(resultadoFact2," y no se puede factorear el B ya que es negativo\n");
            }else
            {
            GetTexto(resultadoFact2," y el factorial de B es: %.0f\n");
            }

            }else
            {
            printf("No se hizo ninguna Operacion\n");
            }

            break;

        case 5:
        break;
        }
        }while(opcion!=5);
        return 0;
}

