/*
Hecho por: Esteban Soto
fecha:3/12/21
Correo:estebansanchezsoto916@gmail.com

Este programa sirve para sacar el area y perimetro de un
 cuadrado,triangulo,rectangulo y circulo

*/
#include <stdio.h>
int main(){
int area,perimetro,cuadrado,rectangulo,triangulo,base,altura,radio,res,m1,m2,m3;
float circulo;

	printf("selecciona la opcion: \n1,-cuadrado\n2.-triangulo\n3.-rectangulo\n4.-circulo\n");
	scanf("%d",&res);
	switch(res){
		case 1:
			printf("ingrese un lado: ");
			scanf("%d",&altura);
			cuadrado=altura*altura;
			printf("el area del cuadrado es:%d  \n",cuadrado);
			perimetro=altura*4;
			printf("el perimetro del cuadrado del cuadrado es:%d \n",perimetro);
			break;
		case 2:
			printf("ingrese la base: ");
			scanf("%d",&base);
			printf("ingrese la altura: ");
			scanf("%d",&altura);
			printf("medida 1: \n");
			scanf("%d",&m1);
			printf("medida 2: \n");
			scanf("%d",&m2);
			 printf("medida 3: \n");
                        scanf("%d",&m3);
			triangulo=(base*altura)/2;
			printf("el area es: %d\n ",triangulo);
			perimetro=m1+m2+m3;
			printf("el perimetro es: %d\n",perimetro);
			break;
		case 3:
			printf("ingrese la base: \n");
			scanf("%d",&base);
			printf("ingrese la altura: \n");
			scanf("%d",&altura);
			rectangulo=base*altura;
			printf("el area es: %d\n",rectangulo);
			perimetro=2*(base+altura);
			printf("el perimetro es: %d\n",perimetro);
			break;
		case 4:
			printf("ingrese el radio: \n");
			scanf("%d",&radio);
			circulo=3.1416*(radio*radio);
			printf("el area es: %f\n",circulo);
			perimetro=2*3.1416*radio;
			printf("el perimetro es: %f\n",perimetro);
			break;
		default:
			break;
return 0;
		}
}
