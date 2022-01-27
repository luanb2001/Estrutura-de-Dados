#include<stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <locale.h>
#include <conio.h>

using namespace std;
char texto[1000];	

int tamanho, pontuacao, cont, contador, i, j, escolha;
void total_vogais(),total_brancos(),total_letras(),total_pontuacoes();

main()
{
 setlocale(LC_ALL, "Portuguese"); 
 
 printf(" \n---------- Programa de texto-----------\n\n\n");	
  
  
  
  printf("\n Digite o texto ...: ");
  gets (texto);
  
  tamanho = strlen(texto);  
  
 
 do{
 system ("cls");
 printf("\n Escolha uma op��o: ");
 printf("\n [1] - Total de vogais");
 printf("\n [2] - Total de letras");
 printf("\n [3] - Total de pontua��es");
 printf("\n [4] - Total de brancos (espa�os)");
 printf("\n [5] - Fim");
 printf("\n Sua escolha �: ");
 scanf("%d", &escolha);
 
 switch (escolha) 
 {
    case 1:{
            system ("cls");
            printf("\n\t ======== Total de Vogais ========"); 
            printf("\n\n ");
            total_vogais();
            getch();
            break;
            }
    case 2:{ 
              system ("cls");
              printf("\n\t ======== Total de Letras ========"); 
              printf("\n\n ");
              total_letras();
              getch();
              break;
            }   
    case 3:{
              system ("cls");
              printf("\n\t ======== Total de Pontua��es ========"); 
              printf("\n\n ");
              total_pontuacoes();
              getch();
              break;
            }
    case 4:{
              system ("cls");
              printf("\n\t ======== Total de Brancos ========"); 
              printf("\n\n ");
              total_brancos();
              getch();
              break;
            }
}
 }while (escolha != 5);
}


//======================================
//fun��o para imprimir o total de vogais 
//======================================
void  total_vogais()
{
    
    char vogais[] = "aAeEiIoOuU";

 

    for(i=0;i<strlen(texto);i++){
        for(j=0;j<strlen(vogais);j++){
            if(texto[i] == vogais[j]){
                contador++;
            }
        }
    }
    
    printf("\n - Total de vogais no texto: %d", contador);
}


//======================================
//fun��o para imprimir o total de letras 
//======================================
void  total_letras()
{
    
    for(i=0;i<strlen(texto);i++){
        if(texto[i] == ' '){
            tamanho--;  
        }  
    }
    
    printf("\n - Total de letras no texto: %d", tamanho);
}


//==========================================
//fun��o para imprimir o total de pontuacoes 
//==========================================
void  total_pontuacoes()
{
    
    for(i=0;i<strlen(texto);i++){
        if(texto[i]=='.' || texto[i]==',' || texto[i]==';' || texto[i]==':' || texto[i]=='!' || texto[i]=='?' || texto[i]=='"' || texto[i]=='(' || texto[i]==')' || texto[i]=='-'){
            pontuacao++; 
        }  
    }

 

    printf("\n - Total de pontua��es no texto: %d", pontuacao);
}


//=======================================
//fun��o para imprimir o total de espa�os
//=======================================
void  total_brancos()
{
    
    for(i=0;i<strlen(texto);i++){
        if(texto[i] == ' '){
            cont++;
        }
    }
    
    printf("\n - Total de espa�os no texto: %d", cont);
}









