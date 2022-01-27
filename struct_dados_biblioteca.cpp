#include <iostream>
#include <string.h>
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h> // fflush(stdin); gets e do puts

using namespace std;
struct dados_biblioteca
{
char nome[150];	
int  ano;
char genero_Textual [50];
int livros_Lidos;
};
dados_biblioteca   biblioteca [100];

int i;
main()
{
  setlocale(LC_ALL, "Portuguese");
  
  cout<<" \n---------- Cadastro dados da biblioteca -----------\n\n\n";	
  
  for (i=0; i<1; i++)
  {
  cout<<"\n Informe os dados do:  "<<i+1<< "º Cliente";
  cout<<"\n Nome ...: ";
  fflush(stdin); //Para limpar o buffer em Windows, e usar antes do gets
  gets(biblioteca[i].nome);
  
  cout<<" \n informe o ano ...: ";
  cin>>biblioteca[i].ano;
  
  cout<<"\n Informe o genero textual ...: ";
  fflush(stdin);
  gets (biblioteca[i].genero_Textual);
  
  cout<<"\n Informe os livros lidos ...: ";
  fflush(stdin);
  cin>>biblioteca[i].livros_Lidos;
  
}
}
