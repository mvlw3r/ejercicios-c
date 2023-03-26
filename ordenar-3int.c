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

int a,b,c;

        printf("ingresa el primer numero: \n");
        scanf("%d",&a);
          printf("ingresa el segundo numero: \n");
        scanf("%d",&b);
          printf("ingresa el tercer numero: \n");
        scanf("%d",&c);

        if(a>b)
                if(a>c)
                {
                        printf("el mayor es: %d \n",a);
                }
                else{
                        printf("el mayor es: %d \n",c);
                }
        else{
                if(b>c)
                {
                        printf("el mayor es: %d \n",b);
                }
                else{
                        printf("el mayor es: %d \n",c);
                }
        }
 	if(a>b)
		if(b>c)
		{
			printf("el medio es: %d \n",b);
		}
		else{
			printf("el medio es: %d \n",a);
		}
	else{
		if(b>a)
			if(a>c)
			{
				printf("el medio es: %d \n",a);
			}
			else{
				printf("el medio es: %d \n",c);
			}
		}
	if(a<b)
                if(a<c)
                {
                        printf("el menor es %d \n",a);
                }
                else{
                        printf("el menor es %d \n",c);
                }
        else{
                if(b<c)
                {
                        printf("el menor es %d \n",b);
                }
                else{
                        printf("el menor es %d \n",c);
                }
        }
return 0;
}

