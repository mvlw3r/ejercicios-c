/*
Este programa esta hecho por:Esteban Soto.
Correo:estebansanchezsoto916@gmail.com
Terminado el: 24/11/21

Este programa esta hecho para hacer las operaciones basicas con fracciones.
Hecha con funciones.
*/

#include<stdio.h>

float su(float num1,float num2,float num3,float num4);
float mu(float num1,float num2,float num3,float num4);

int main(){

	float a, b, c, d, w, z, v, x;

	printf("Ingrese numerador de la primera fraccion: ");
	scanf("%f",&a);

	printf("Ingrese denominador de la primera fraccion: ");
	scanf("%f",&b);

	printf("Ingrese numerador de la segunda fraccion: ");
	scanf("%f",&c);

	printf("Ingrese denominador de la segunda fraccion: ");
	scanf("%f",&d);

	w=su(a,b,c,d);
	z=su(a,b,-c,d);
	v=mu(a,b,d,c);
	x=mu(a,b,c,d);

        printf("el resultado de %.2f/%.2f + %.2f/%.2f es: %.2f\n",a,b,c,d,w);
	printf("el resultado de %.2f/%.2f - %.2f/%.2f es: %.2f\n",a,b,c,d,z);
	printf("el resultado de %.2f/%.2f * %.2f/%.2f es: %.2f\n",a,b,c,d,v);
	printf("el resultado de %.2f/%.2f / %.2f/%.2f es: %.2f\n",a,b,c,d,x);

	return 0;
}

float su(float num1, float num2, float num3, float num4){
	return (num1*num4 + num2*num3) / (num2*num4);
}


float mu(float num1, float num2, float num4, float num3){
	return (num1*num3) / (num2*num4);
}
