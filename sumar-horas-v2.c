#include <stdio.h>
int main(){
	int h1,m1,s1;
	int  d2,h2,m2,s2;
	int h,m,s;

	printf("introduce la hora: ");
	scanf("%d",&h);
	printf("introduce los minutos: ");
	scanf("%d",&m);
	printf("introduce los segundos: ");
	scanf("%d",&s);

	 if ( h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59 )
    {
       	printf("la hora es: %d:%d:%d",h,m,s);
    }
        printf( "\n ingresa la hora a sumar:\n" );
	scanf("%d",&h1);
	printf("\n ingresa los minutos a ingresar: \n");
	scanf("%d",&m1);
	printf("ingresa los segundos a sumar: \n");
	scanf("%d",&s1);

	s2=s+s1;
	m2=m+m1;
	h2=h+h1;

	if(s2>59){
	s2=s2-60;
	m2=m2+1;
	}

	if(m2>59){
	m2=m2-60;
	h2=h2+1;
	}

	if(h2>23){
	h2=h2-24;
	d2=1;
	}

	printf("la hora sumada es: %d:%d:%d\n",h2,m2,s2);
return 0;
}
