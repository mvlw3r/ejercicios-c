/*
 *Programado por:Esteban Soto
 *correo:estebansanchezsoto916@gmail.com
 *Fecha: junio/2021
 *Descripcion: este programa sirve para mostrar el millar,centena,decena y unidad
 *de un numero ingresado por el usuario
 *
 */

#include<stdio.h>
int max(int a,int b,int c,int d,int e,int f);

int main() {
        int mill,cen,dec,num,res,uni,g;
    printf("Ingrese Numero de maximo 4 cifras : ");
    scanf("%i",&num);
   // mill = num/1000;
   // res = num-(mill*1000);
   // cen = res/100;
   // res = res-(cen*100);
   // dec = res/10;
   // uni = res-(dec*10);
    g=max(mill,cen,dec,num,res,uni);

  //  printf("millar : %d\n",mill);
  //  printf("Centena : %d\n",cen);
  //  printf("Decena : %d\n",dec);
  //  printf("Unidad : %d\n",uni);
    return 0;
}
int max(int a,int b,int c,int d,int e,int f){


 a = d/1000;
 e = d-(a*1000);
 b = e/100;
 e = e-(b*100);
 c = e/10;
 f = e-(c*10);

 printf("millar : %d\n",a);
    printf("Centena : %d\n",b);
    printf("Decena : %d\n",c);
    printf("Unidad : %d\n",f);


return a,b,c,f ;
}
