#include <stdio.h> //biblioteca de comunicação 
#include <stdlib.h> //biblioteca de alocação de espaço de memória
#include <locale.h> //biblioteca de alocações de texto p/região
#include <string.h> //biblioteca ressponsavel por cuidar das strings

int registro() //Função responsavel por cadastral os usuarios no sistema
{
	//Inicio da criação de variaveis/string
	char arquivo[40];
    char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//Fim da criação de variaveis/string
		
	printf("Digite o CPF a ser cadastrado:"); //Coletando informações do usuario
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
	//Inicio da criação de variaveis/string
	char cpf[40];
	char conteudo[200];
	//Fim da criação de variaveis/string
	
	printf("Digite o CPF a ser consultado:"); //Coletando informações do usuario
	scanf("%s", cpf); //%s refere-se a string 
	
	FILE*file; //Cria o Arquivo 
	file = fopen(cpf, "r"); 
	
	if(file==NULL) //Caso o arquivo não for encontrado a mensagem a seguir aparece
	{
		printf("Não foi possivel abrir o arquivo, Não localizado!\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL) //Todas as Informações contidas no arquivo são expostas 
	{
		printf("\nEssas são as Informações do usuário:");
		printf("%s", conteudo); 
		printf("\n\n");
	}
	
	system("pause");
	
}

int deletar()
{
	//Inicio da criação de variaveis/string
	char cpf[40];
	//Fim da criação de variaveis/string
	
	printf("Digite o CPF a ser deletado:"); //Coletando informações do usuario
	scanf("%s", cpf); //%s refere-se a string 
	
	remove(cpf); //Deleta o cpf armanezanado 
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL) //Caso o usuario não for encontrado a mensagem a seguir aparece
	{
		printf("O usúario não se encontra no sistema. \n");
		system("pause");
	}
}


int main()
{ 

int opcao=0; // Definido variáveis
int x=1;

for(x=1;x=1;)
{

system("cls");

setlocale(LC_ALL, "Portuguese"); //Definido Linguagem

printf("### Cartória da EBAC ### \n\n"); // Inicio do Menu
printf("Escolha a opção desejada do menu\n\n");
printf("\t1 - Registrar nomes\n");
printf("\t2 - Consultar nomes\n");
printf("\t3 - deletar nomes\n\n");
printf("\t4 - Sair do Sistema\n\n");
printf("Opção:"); // Fim do Menu

scanf("%d", &opcao); //Armazenando a escolha do usúario

system("cls"); //Responsavel por limpar a tela 

switch(opcao) //Inicio da seleção do menu
{
	case 1:
	registro(); //chamada de funções 
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
	printf("Essa opção não está disponivel:\n");
	system("pause");
	break; 
	//Fim da seleção 
}

printf("Esse Softare pertence ao aluno William Kurtz\n");
}
}


