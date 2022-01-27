#include <iostream>
#include <string.h>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct dados_ciaaerea
{
	char cia_aerea[25];
	int horario;
	float preco;
};
dados_ciaaerea Aerea[10];

int i;
main()
{
  setlocale(LC_ALL, "Portuguese");
  
  cout<<" \n---------- Cadastro de Clientes -----------\n";
  
  for (i=0;i<2;i++) 
 {
  cout<<"\n Informe os dados da: "<<i+1<< "º cia aérea";
  cout<<"\n Nome da companhia aérea: ";
  fflush(stdin); //Para limpar o buffer em Windows
  gets(Aerea[i].cia_aerea);
  
  cout<<"\n Horário: ";
  cin>>Aerea[i].horario;
  
  cout<<"\n Informe o preço 1 da cia aérea: ";
  cin>>Aerea[i].preco;
 }
}

