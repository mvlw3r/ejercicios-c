#include <stdio.h>
int main(){
int edad;

	printf("ingresa tu edad: \n");
	scanf("%d",&edad);

	if(edad>=18)
	{
		printf("bienvenido\n");
	}
	else{
		printf("lo siento no puedes entrar\n");
	}
	return 0;
}
