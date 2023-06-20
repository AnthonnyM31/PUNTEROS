#include <stdio.h>

int main(){

float *puntero1;
float *puntero2;
float aux = 30;

*puntero1 = &aux;
*puntero2 = &aux;


printf("el valor de aux es: %f\n", aux);

//con el "&" para imprimir la ubicacion de memoria de una variable que no es un puntero 
printf("la ubicaciòn de memoria de aux es: %p\n", &aux);


//con el asterisco imprimes el contenido del puntero
printf("el contenido del puntero 1 es: %f\n", *puntero1);
//sin el asterisco imprimes la ubicacion o direccion de memoria
printf("la ubicacion de memoria del puntero es %p\n", puntero1);



*puntero1=100;
printf("--------------------------\n");
printf("el valor de aux es: %f\n", aux);

*puntero2=3000;
printf("-----------------------------\n");
printf("el valor de aux es: %f\n",aux);



return 0;

}