/*
* Programado por:Esteban Soto
* correo: estebansanchezsoto916@gmail.com
* Fecha: junio/2021
* Descripcion: este programa sirve para contar hasta el numero
* que ingrese el usuario
*(El usuario puede elegir el numero que quiere)
*El for sirve para ir enlistando los numeros
*
 */

#include <stdio.h>

int max(int num1,int num2);
int main(){

int i;
int limite;
int c;
	printf("hasta que numero quieres que cuente: \n");
	scanf("%d",&limite);

	c= max(i,limite);

		//for(i=1;i<=limite;++i)
		//{
		//	printf(" %d \n",i);
		//}
return 0;
}

int max(int num1,int num2){



	for(num1=1;num1<=num2;++num1)
	{
		printf("%d\n",num1);
	}


return num1 ;
}
