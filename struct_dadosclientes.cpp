/*struct dados_CiaAerea
{
char nome_Cia [150];
int horario [4];
float preco;
};
dados_CiaAerea   Cia_Aerea [100];*/

/*struct dados_Biblioteca
{
int  ano [4];
char genero_Textual [50];
int livros_Lidos [100];
};
dados_Biblioteca   Bibioteca [100];*/


#include <iostream>
#include <string.h>
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h> // fflush(stdin); gets e do puts

using namespace std;

/*Criando a struct */
struct dados_Clientes
{
char nome [150]; //usar gets quando for 'char'
int data_Nascimento; //usar cin quando for outra variável
char email [150];
char profissao [50];
char sexo[10];
char endereco_id[100];
};
dados_Clientes  Clientes [3];

int i;
main()
{
  setlocale(LC_ALL, "Portuguese");
  
  cout<<" \n---------- Cadastro de Clientes -----------\n\n\n";	
  
  for (i=0; i<3; i++)
  {
  cout<<"\n Informe os dados do:  "<<i+1<< "º Cliente";
  cout<<"\n Nome ...: ";
  fflush(stdin); //Para limpar o buffer em Windows, e usar antes do gets
  gets(Clientes[i].nome);
  
  cout<<" \n Data de Nascimento ...: ";
  cin>>Clientes[i].data_Nascimento;
  
  cout<<"\n Informe o email do cliente ..: ";
  fflush(stdin);
  gets (Clientes[i].email);
  
  cout<<"\n Informe a profissão do cliente ..: ";
  fflush(stdin);
  gets(Clientes[i].profissao);
  
  cout<<"\n Informe o endereço do cliente ...: ";
  fflush(stdin);
  gets(Clientes[i].endereco_id);
}
}
