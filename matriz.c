#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

      int m[100]; 
      int i;
      int j;
      int temp;
      srand(time(NULL));

	for(i=0;i<100;i++){
	m[i]=1+rand()%(500-1+1);
	printf("%d\n",m[i]);
}

	for(i=0;i<=99;i++)
	{
		for(j=0;j<99;j++)
		{
			if(m[j]>m[j + 1])
			{
				temp = m[j];
				m[j] = m[j + 1];
				m[j + 1] = temp;
			}
		}
	}

for(i=0; i <= 99;i++)
{
printf("%d\n",m[i]);
}
return 0;
}
