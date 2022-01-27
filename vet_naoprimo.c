#include <stdio.h>
#include <stdlib.h>

int i, j, cont, numeros, valor[10], primo[10], posicao[10];

main () 
{


   printf ("\n Informe 10 numeros inteiros \n");
   
   for(cont=1; cont<=10; cont++) // leitura do vetor usando a constante
      {
          scanf ("%d", &valor[i]);
      
      for (j=2; j<=valor[i]/2; j++){
	  
      
          if (valor[i] %j==0)
            {
             posicao[i] = cont;
             primo[i] = valor[cont];
             numeros++;
             i++;   
           }
      
       }
        
      }
      
         for(i=0;i<numeros; i++)
         {
         printf("\n posicao %d: %d", posicao[i], valor[i]); 
     }
}
