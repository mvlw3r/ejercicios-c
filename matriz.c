/*

Hecho por: Esteban
Contacto:estebansanchezsoto916@gmail.com
Sun 06 Mar 2022 05:19:11 PM CST

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  Maximo 100

int main(){

      int v[Maximo];
      int i;
      int j;
      int temp;
      srand(time(NULL));

	for(i=0;i<100;i++){
	v[i]=1+rand()%(1000-1+1);
	printf("%d\n",v[i]);
}

	for(i=0;i<=99;i++)
	{
		for(j=0;j<99;j++)
		{
			if(v[j]>v[j + 1])
			{
				temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}

   for(i=0; i <= 99;i++)
   {
     printf("%d\n",v[i]);
   }

return 0;
}
