/*
 * Pragamado por: Esteban Soto.
 * Correo: estebansanchezsoto916@gmail.com
 * Fecha: Junio/2021
 *
 * Descripcion: este programa muestra los numeros pares del 2 al 20 (el numero maximo
 * se puede cambiar en el ciclo for).
 * El ciclo for sirve para listar los numeros del menor entero al mayor entero, y el if
 * sirve para identificar si el numero es par utilizando la operacion modulo %
 *
 */

#include <stdio.h>
int main(){
int num;

	for(num=1;num<=20;num++)
	{
		if(num % 2 == 0)
		{
			printf("los numeors son:%d\n",num);

		}
	}

return 0;
}
