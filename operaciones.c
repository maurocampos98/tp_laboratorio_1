#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"


int GetSuma(float *pResultado,float numero1,float numero2)
{
                    *pResultado=numero1+numero2;
                    return 0;
}

int GetResta(float *pResultado,float numero1, float numero2)
{
                    *pResultado=numero1-numero2;
                    return 0;
}

int GetDivision(float *pResultado,float numero1, float numero2)
{
                    int retorno = 0;
                    if(numero2==0)
                    {
                    retorno = -1;
                    }else
                    {
                    *pResultado=numero1/numero2;
                    }
                    return retorno;
}

int GetMultiplicacion(float *pResultado,float numero1, float numero2)
{

                    *pResultado=numero1*numero2;
                    return 0;
}

int factorial(float numero)
{
                    float i;
                    float respuesta=1;

                    if(numero==1 || numero ==0)
                    {
                        respuesta = 1;
                    }else if(numero < 0)
                    {
                        respuesta = -1;
                    }else
                    {
                         for (i = 1; i <= (int)numero; i++)
                         {
                            respuesta =respuesta * i;
                         }

                    }
                    return respuesta;
}

int GetValEntero(int* pNum,int reint,char* msg,char* msgError,int maximo,int minimo)
                {
                    int auxiliarNum;
                    int retorno = -1;
                    for(;reint>0;reint--)
                    {
                    printf(msg);
                    if(GetValInt(&auxiliarNum) == 0)
                    {
                      if(auxiliarNum > minimo && auxiliarNum < maximo)
                      {
                      *pNum = auxiliarNum;
                      retorno = 0;
                      break;

                      }else
                      {
                      printf(msgError);
                      }
                    }else
                    {
                    printf(msgError);
                    fflush(stdin);
                    }
                    }

                    return retorno;
                }

int GetValDecimal(float *pNum, int reint, char* msg, char* msgError)
{
                float auxiliarNum;
                int retorno = -1;


                for(;reint>0;reint--)
                {
                printf(msg);
                if(GetValFloat(&auxiliarNum) == 0)
                {
                    *pNum = auxiliarNum;
                    retorno = 0;
                    break;
                }else
                {
                printf(msgError);
                fflush(stdin);
                }
                }

                return retorno;
}

void GetTexto(float resultado, char* msg)
{
               printf(msg,resultado);
}

int GetValFloat(float* pResultado)
{
                int ret=-1;
                float num;

                if(scanf("%f",&num)==1)
                {
                    *pResultado = num;
                    ret=0;
                }
                return ret;
        }

int GetValInt(int* pResultado)
{
                int ret=-1;
                int num;

                if(scanf("%d",&num)==1)
                {
                *pResultado = num;
                ret=0;
                }
                return ret;
}


