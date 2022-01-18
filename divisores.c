/*
 * Programado por: Esteban Soto
 * Correo:estebansanchezsoto916@gmail.com
 * Fecha: Junio,2021
 *
 * Este programa sirve para sacar los divisores de un numero
 *(dentro del for el (x<=100) sirve para ver los divisores hasta el 100)
 */

#include <stdio.h>
int max(int num1,int num2);

int main(){;
int x,num,c;
	printf("ingrese un numero: \n");
	scanf("%d",&num);

	c=max(x,num);

//		for(x=0;x<=100;x+=num)
//		{
//			printf("el %d es divisor de: %d \n",num,x);
//		}
return 0;
}
int max(int num1,int num2){

	for(num1=0;num1<=100;num1+=num2)
	{
		printf("el %d es divisor de: %d\n",num2,num1);
	}

return num2,num1;
}
