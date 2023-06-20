#include <stdio.h>

int main(){

float *puntero1;
float aux = 30;

*puntero1 = &aux;

printf("el valor de aux es: %f\n", aux);
printf("la ubicaciòn de memoria de aux es: %p\n", &aux);

printf("el contenido del puntero 1 es: %f\n", *puntero1);
printf("la ubicacion de memoria del puntero es %p\n", puntero1);

return 0;

}