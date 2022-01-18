/*programado por: Esteban Snachez Soto.
 *fecha: junio/2021
 *
 * Programa para saber si un numero es primo o no.
 *por cada ciclo del for, el if de adentro evalua si el residuo de la variable numero
 * entre la variable i es igual a cero, si es
 * cero procede a aumentar la variable cont a mas uno.
 *
 */


#include <stdio.h>
int main(){
int cont=0,i,a;

	printf("ingrese un numero: \n");
	scanf("%d",&a);

	for(i=1;i<=a;i++)
	{
		if(a % i ==0)
		{
			cont++;
		}
	}
	if(cont > 2)
	{
		printf(" no es primo \n");
	}
	else{
		printf(" es primo \n");
	}
return 0;
}
