#include <stdio.h>
#include <math.h>
int main(){
int ex,b;

	printf("ingrese la base: \n");
	scanf("%d",&b);
	printf("ingrese el exponente: \n");
	scanf("%d",&ex);

	double elevado = pow(b,ex);
	printf("%lf elevado por: %lf es %f \n",b,ex,elevado);
return 0;
}



