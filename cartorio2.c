#include <stdio.h> //biblioteca de comunica��o 
#include <stdlib.h> //biblioteca de aloca��o de espa�o de mem�ria
#include <locale.h> //biblioteca de aloca��es de texto p/regi�o
#include <string.h> //biblioteca ressponsavel por cuidar das strings

int registro() //Fun��o responsavel por cadastral os usuarios no sistema
{
	//Inicio da cria��o de variaveis/string
	char arquivo[40];
    char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//Fim da cria��o de variaveis/string
		
	printf("Digite o CPF a ser cadastrado:"); //Coletando informa��es do usuario
	scanf("%s",cpf); //%s refere-se a string 
	
	strcpy(arquivo,cpf); //Responsavel por copiar os valores da string
	
	FILE*file; //Cria o Arquivo 
	file = fopen(arquivo,"w"); //Cria o Arquivo e o W significa Escrever
	fprintf(file,cpf); //Salva o valor da variavel
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
	setlocale(LC_ALL, "Portuguese"); //Definido Linguagem
	//Inicio da cria��o de variaveis/string
	char cpf[40];
	char conteudo[200];
	//Fim da cria��o de variaveis/string
	
	printf("Digite o CPF a ser consultado:"); //Coletando informa��es do usuario
	scanf("%s", cpf); //%s refere-se a string 
	
	FILE*file; //Cria o Arquivo 
	file = fopen(cpf, "r"); 
	
	if(file==NULL) //Caso o arquivo n�o for encontrado a mensagem a seguir aparece
	{
		printf("N�o foi possivel abrir o arquivo, N�o localizado!\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL) //Todas as Informa��es contidas no arquivo s�o expostas 
	{
		printf("\nEssas s�o as Informa��es do usu�rio:");
		printf("%s", conteudo); 
		printf("\n\n");
	}
	
	system("pause");
	
}

int deletar()
{
	//Inicio da cria��o de variaveis/string
	char cpf[40];
	//Fim da cria��o de variaveis/string
	
	printf("Digite o CPF a ser deletado:"); //Coletando informa��es do usuario
	scanf("%s", cpf); //%s refere-se a string 
	
	remove(cpf); //Deleta o cpf armanezanado 
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL) //Caso o usuario n�o for encontrado a mensagem a seguir aparece
	{
		printf("O us�ario n�o se encontra no sistema. \n");
		system("pause");
	}
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
printf("\t4 - Sair do Sistema\n\n");
printf("Op��o:"); // Fim do Menu

scanf("%d", &opcao); //Armazenando a escolha do us�ario

system("cls"); //Responsavel por limpar a tela 

switch(opcao) //Inicio da sele��o do menu
{
	case 1:
	registro(); //chamada de fun��es 
	break;
	
	case 2: 
	consulta();
	break; 
	
	case 3: 
	deletar();
	break; 
	
	case 4:
	printf("Obrigado por Utilizar o Sistema!\n");
	return 0;
	break;
	
	default:
	printf("Essa op��o n�o est� disponivel:\n");
	system("pause");
	break; 
	//Fim da sele��o 
}

printf("Esse Softare pertence ao aluno William Kurtz\n");
}
}


