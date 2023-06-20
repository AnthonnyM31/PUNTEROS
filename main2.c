#include <stdio.h>
#include <math.h>

float calcularDistancias(float x1, float x2,float y1, float y2,float z1, float z2);
float calcularPerimetro(float puntos[3][3], float *a, float *b, float *c, float *d, float *e, float *f);
float calcularArea(float a, float b, float c);

int main(){

float puntos[4][3]=[{0,0,0},{3,0,0},{0,0,3}, {1,7,1}];
float per, a, b, c, d, e, f;

float perimetro = calcularPerimetro(puntos, &a,&b,&c, &d, &e, &f);
float area1 = calcularArea(a,b,c);
float area2 = calcularArea(b,d,e);
float area3 = calcularArea(a,e,f);
float area4 = calcularArea(e,f,a);
float areasuperficial = area1+area2+area3+area4;

printf("el perimetro es: %f\n", perimetro);
printf("el area superficial es: %f\n", areasuperficial);
printf("el area es: %f\n", area1);

return 0;

}

float calcularDistancias(float x1, float x2,float y1, float y2,float z1, float z2){

float dist = sqrt(pow(x-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
return dist;


}

float calcularPerimetro(float puntos[3][3], float *a, float *b, float *c, float *d, float *e, float *f){

*a = calcularDsitancia(puntos[0][0], puntos [0][1],puntos [0][2],puntos [1][0],puntos [1][1],puntos [1][2]);
*b = calcularDsitancia(puntos[0][0], puntos [0][1],puntos [0][2],puntos [2][0],puntos [2][1],puntos [2][2]);
*c = calcularDsitancia(puntos[1][0], puntos [1][1],puntos [1][2],puntos [2][0],puntos [2][1],puntos [2][2]);

*d = calcularDsitancia(puntos[2][0], puntos [2][1],puntos [2][2],puntos [3][0],puntos [3][1],puntos [3][2]);
*e = calcularDsitancia(puntos[0][0], puntos [0][1],puntos [0][2],puntos [3][0],puntos [3][1],puntos [3][2]);
*f = calcularDsitancia(puntos[1][0], puntos [1][1],puntos [1][2],puntos [3][0],puntos [3][1],puntos [3][2]);
float per = *a+*b+*c+*d+*e+*f;
return per;

}


float calcularArea(float a, float b, float c){

float s=(a+b+c)/2;
float area=sqrt(s*(s-a)*(s-b)*(s-c));
return area;

}







