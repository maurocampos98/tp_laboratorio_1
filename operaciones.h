#ifndef OPERACIONES_H_INCLUDED
#define OPERACIONES_H_INCLUDED

/*
    main: Muestra un menu de opciones y se ingresa una opcion
    @param numero1: guarda el numero 1 ingresado
    @param numero2: guarda el numero 2 ingresado
*
    GetValDecimal: pide un numero con coma y utiliza a GetValFloat para validarlo
    @param pNum: puntero a numero
    @param reint: cantidad de reintentos al fallar
    @param msg: mensaje a mostrar
    @param msgError: mensaje de error
    @return return 0 OK, -1 error.

*
    GetValEntero: pide un numero entero y utiliza GetValInt para validarlo
    @param pNum: puntero a numero
    @param reint: cantidad de reintentos
    @param msg: mensaje a mostrar
    @param msgError: mensaje de error
    @param maximo: el numero maximo
    @param minimo: el numero minimo
    @return return 0 OK, -1 error.
*
    GetSuma: realiza una suma entre 2 numeros flotantes
    @param numero1: guarda el numero 1 recibido
    @param numero2: guarda el numero 2 recibido
    @param *pResultado: guarda la suma del numero 1 y 2
    @return return 0 OK, -1 error.
*
    GetResta: realiza una resta entre 2 numeros flotantes
    @param numero1: guarda el numero 1 ingresado
    @param numero2: guarda el numero 2 ingresado
    @param *pResultado: guarda la resta del numero 1 y 2
    @return return 0 OK, -1 error.
*
    GetMultiplicacion: realiza una multiplicacion entre 2 numeros flotantes
    @param numero1: guarda el numero 1 recibido
    @param numero2: guarda el numero 2 recibido
    @param *pResultado: guarda la multiplicacion del numero 1 y 2
    @return return 0 OK, -1 error.
*
    GetDivision: realiza una division entre 2 numeros flotantes
    @param numero1: guarda el numero 1 recibido
    @param numero2: guarda el numero 2 recibido
    @param *pResultado: guarda la division del numero 1 y 2
    @return return 0 OK, -1 error.
*
    factorial: realiza el factoreo de un numero utilizando un for para ir multiplicandolo
    @param numero: guarda el numero recibido
    @return return devuelve la respuesta del numero factoreado
*
    GetTexto: recibe una variable para mostrar y un mensaje
    @param resultado numero con coma
    @param mensaje que se debe mostrar con printf
*/
int GetValDecimal(float *pNum, int reint, char* msg, char* msgError);
int GetValEntero(int* pNum,int reint,char* msg,char* msgError,int maximo,int minimo);
int GetValFloat(float* pResultado);
int GetValInt(int* pResultado);
int GetSuma(float *pResultado,float numero1,float numero2);
int GetResta(float *pResultado,float numero1,float numero2);
int GetDivision(float *pResultado,float numero1,float numero2);
int GetMultiplicacion(float *pResultado,float numero1,float numero2);
int factorial(float numero);
void GetTexto(float resultado, char* msg);

#endif // OPERACIONES_H_INCLUDED

