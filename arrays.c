#include <stdio.h>

int main()
{

int temp[12];
float media;
int hora;

    for( hora=0; hora<12; hora++ )
    {
      printf( "Temperatura de las %i: ", hora );
      scanf( "%i", &temp[hora] );
      media += temp[hora];
    }

  media = media / 12;
  printf( "\nLa temperatura media es %.2f\n", media );


return 0;
}
