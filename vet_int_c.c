#include <stdio.h>
#include <stdlib.h>

int i,valor[3];
   int acum_valor;
   float media_valores;
   double media;

main () 
{


   printf ("\n Informe 3 valores inteiros \n");
   
   for(i=0;i<=2;i++) // leitura do vetor usando a constante
      {
          scanf ("%d", &valor[i]);
          acum_valor = acum_valor+valor[i];
      }
      
      
      media = acum_valor/3;
   
   
  printf ("\n A media dos valores de %d : %.2f \n", acum_valor, media);
}
