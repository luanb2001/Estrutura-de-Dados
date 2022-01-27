#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int i, j, cont, valor[10];

main () 
{

   setlocale(LC_ALL, "Portuguese");
   printf ("\n\t N�meros primos com vetor");
   printf ("\n\n Informe 10 numeros inteiros \n\n");
   
   for(i=0;i<10;i++) // leitura do vetor usando a constante
      {
      	//printf(" Digite o %i� n�mero: ",i+1);
        scanf ("%d", &valor[i]);
      }	       
        for(i=0;i<10;i++)
		{
        cont=0;
        	for(j=1;j<=valor[i];j++)
				{
            	if((valor[i]%j) == 0)
            	cont++;
      			}
    			if(cont == 2)
         		printf("\n posicao %d: %d", i, valor[i]); 
         
       }
      
}
