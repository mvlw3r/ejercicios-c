#include <stdio.h>
int main()
 {

   int temp[24];
   float media;
   int hora;

       for( hora=0; hora<24; hora++ )
       {
          printf( "Temperatura de las %i: ", hora );
          scanf( "%i", &temp[hora] );
          media += temp[hora];
       }

     media = media / 24;
     printf( "\nLa temperatura media es %.2f\n", media );

return 0;
}

