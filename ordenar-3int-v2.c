/*
 * Programado por: Esteban Soto
 * Correo: estebansanchezsoto916@gmail.com
 * Fecha: junio/2021
 *
 * Descripcion: este programas muestra el numero mayor,el intermedio y el menor
 * (el usuario puede ingresar los numeros que el quiere)
 * El primer bloque de if es para determinar el numero mayor
 * El segundo bloque es para determinar el numero intermedio
 * El tercer bloque es para determinar el numero menor
 *
 */

#include <stdio.h>
int main(){
	int n1,n2,n3;
	int mayor;
	int menor;
	int enmedio;

	printf("ingrese el primer numero: \n");
	scanf("%d",&n1);
	printf("ingrese el segundo numero: \n");
	scanf("%d",&n2);
	printf("ingrese el ultimo numero: \n");
	scanf("%d",&n3);

	if(n1>n2)
		if(n1>n3)
		{
       			mayor=n1;
		}
	if(n2>n1)
		if(n2>n3)
		{
			mayor=n2;
		}
	if(n3>n1)
		if(n3>n2)
		{
			mayor=n3;
		}
	if(n1>n2)
		if(n1<n3)
		{
			enmedio=n1;
		}
	if(n2>n1)
		if(n2<n3)
		{
			enmedio=n2;
		}
	if(n3>n2)
		if(n3<n1)
		{
			enmedio=n3;
		}
	if(n1<n2)
		if(n1<n3)
		{
			menor=n1;
		}
	if(n2<n1)
		if(n2<n3)
		{
			menor=n2;
		}
	if(n3<n1)
		if(n3<n2)
		{
			menor=n3;
		}

	printf("el numero mayor es: %d \n",mayor);
	printf("el numero de enmedio es: %d \n",enmedio);
	printf("el numero menor es: %d \n",menor);
return 0;
}
