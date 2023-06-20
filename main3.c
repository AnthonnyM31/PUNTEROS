#include <stdio.h>
#include <math.h>

float calcularDistancias(float x1, float x2,float y1, float y2,float z1, float z2);
float calcularPerimetro(float puntos[3][3]);
float calcularArea(float puntos[3][3]);

int main(){

float puntos[3][3]=[{0,0,0},{3,0,0},{0,0,3}];
float per, a, b, c;

float perimetro = calcularPerimetro(puntos);
float area = calcularArea(puntos);

printf("el perimetro es: %f", perimetro);
printf("el area es: %f", area);

return 0;

}

float calcularDistancias(float x1, float x2,float y1, float y2,float z1, float z2){

float dist = sqrt(pow(x-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
return dist;


}

float calcularPerimetro(float puntos[3][3], float *a, float *b, float *c){

*a = calcularDsitancia(puntos[0][0], puntos [0][1],puntos [0][2],puntos [1][0],puntos [1][1],puntos [1][2]);
*b = calcularDsitancia(puntos[0][0], puntos [0][1],puntos [0][2],puntos [2][0],puntos [2][1],puntos [2][2]);
*c = calcularDsitancia(puntos[1][0], puntos [1][1],puntos [1][2],puntos [2][0],puntos [2][1],puntos [2][2]);

float per = *a+*b+*c;
return per;

}


float calcularArea(float puntos[3][3]){

float a = calcularDsitancia(puntos[0][0], puntos [0][1],puntos [0][2],puntos [1][0],puntos [1][1],puntos [1][2]);
float b = calcularDsitancia(puntos[0][0], puntos [0][1],puntos [0][2],puntos [2][0],puntos [2][1],puntos [2][2]);
float c = calcularDsitancia(puntos[1][0], puntos [1][1],puntos [1][2],puntos [2][0],puntos [2][1],puntos [2][2]);

float s=(a+b+c)/2;
float area=sqrt(s*(s-a)*(s-b)*(s-c));
return area;

}







