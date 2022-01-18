#include <stdio.h>
int c = 21;
int max(int num1, int num2);

int main(){

int a ;
int b ;
int c ;

	printf("ingresa un numero: ");
	scanf("%d",&a);
	printf("ingresa otro numero: ");
	scanf("%d",&b);
	printf("el valor de a es: %d\n",a);
	printf("el valor de b es: %d\n",b);
c = max(a, b);

	printf("la suma es: %d\n",c);
return 0;
}

int max(int num1, int num2){
int res;

	printf("el valor de c: %d\n",c);
res = num1 + num2;

return res;
}
