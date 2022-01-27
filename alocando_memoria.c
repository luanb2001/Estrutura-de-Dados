#include <stdlib.h>
#include <stdio.h>
#include <locale.h>//SETLOCALE
#include <time.h> 
int *vetor, *repetido,contador,i,j,k, *v, tam;
main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("\n\t ----- Vetor com Repeti��es ----- \n\n");
   
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
   
    v = (int *) malloc (tam * sizeof(int));
    vetor = (int *) malloc (tam * sizeof(int));
    repetido = (int *) malloc (tam * sizeof(int));
   
    srand(time(NULL));
   
    for(i=0; i<tam; i++) {
        v[i] = (rand()%30) + 1;
        printf("\n N�meros gerados: %d", v[i]);
    }
   
    if (v == NULL){
        printf("Erro ao alocar vetor!");
        return 0;       
    }
   
    for(i=0;i<tam;i++){ //passa os valores do vetor 'num' para o vetor 'vetor'
        vetor[i] = v[i];
    }
    for(i=0;i<tam;i++){ //loop da posi��o 0 � posi��o 9 do vetor, contando os valores repetidos
        contador = 0;
        for(j=k++;j<tam;j++){
            if(v[i] == vetor[j]){ //condi��o se o vetor 'num' na pois��o i � igual ao vetor 'vetor' na posi��o i+1
                contador++;
                vetor[j] = -1; //compara��o com o num[i]
            }
        }
        repetido[i] = contador;
    }
    for(i=0;i<tam;i++){
        if(repetido[i] > 1)
            printf("\n\n - N�mero %d: aparece %d vezes",v[i],repetido[i]);
    }
}
