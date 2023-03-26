/*
 *Programado por: Esteban Soto
 * Correo:estebansanchezsoto916@gmail.com
 * Fecha: Junio,2021
 *
 * Este programa sirve para elevar un numero que el usuario ponga
 * (El for sirve para ir aumentando hasta llegar al exponente)
 */
#include <stdio.h>
int main(){
long int b,ex,i,acum=1;
	printf("ingrese la base: \n");
	scanf("%i",&b);
	 printf("ingrese el exponente: \n");
        scanf("%i",&ex);

	for(i=1;i<=ex;++i)
	{
		acum=acum*b;
	}
	printf("el resultado es: %i \n",acum);
return 0;
}

