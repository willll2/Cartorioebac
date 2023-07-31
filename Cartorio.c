#include <stdio.h> //biblioteca de comunica��o 
#include <stdlib.h> //biblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> //biblioteca de aloca��es de texto p/regi�o
#include <string.h> //biblioteca ressponsavel por cuidar das strings

int registro()
{
	char arquivo[40];
    char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado:");
	scanf("%s",cpf);
	
	strcpy(arquivo,cpf); //Responsavel por copiar os valores da string
	
	FILE*file; //Cria o Arquivo 
	file = fopen(arquivo,"W"); //Cria o Arquivo 
	fprinf(file,cpf); //Salva o valor da variavel
	fclose(file); //Fecha o Arquivo 
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado:");
	scanf("%s",nome);
	
	file = fopen(arquivo,"a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
		printf("Digite o cargo a ser cadastrado:");
	scanf("%s",cargo);
	
	file = fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	file = fopen(arquivo,"a");
	fprintf(file,",");
	fclose(file);
	
	system("pause");
	
}

int consulta()
{
	printf("Voc� escolheu consultar nomes:\n");
	system("pause");
}

int deletar()
{
	printf("Voc� escolheu deletar nomes:\n");
	system("pause");
}


int main()
{ 

int opcao=0; // Definido vari�veis
int x=1;

for(x=1;x=1;)
{

system("cls");

setlocale(LC_ALL, "Portuguese"); //Definido Linguagem

printf("### Cart�ria da EBAC ### \n\n"); // Inicio do Menu
printf("Escolha a op��o desejada do menu\n\n");
printf("\t1 - Registrar nomes\n");
printf("\t2 - Consultar nomes\n");
printf("\t3 - deletar nomes\n\n");
printf("Op��o:"); // Fim do Menu

scanf("%d", &opcao); //Armazenando a escolha do us�ario

system("cls"); 

switch(opcao)
{
	case 1:
	registro();
	break;
	
	case 2: 
	consulta();
	break; 
	
	case 3: 
	deletar();
	break; 
	
	default:
	printf("Essa op��o n�o est� disponivel:\n");
	system("pause");
	break; 
}

printf("Esse Softare pertence ao aluno William |Kurtz\n");
}
}

