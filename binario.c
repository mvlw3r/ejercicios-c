#include <stdio.h>

int binario(int num);

int main(){

        int numero;

        do
        {
                printf("Escribe un numero:\n");
                scanf("%d",&numero);
        } while (numero<0);

        binario(numero);



return 0;
}

int binario(int num){

	if(num>1)
	{
		binario(num/2);
	}
	printf("el numero a binario es:%i",num%2);

}

