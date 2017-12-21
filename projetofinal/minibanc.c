#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

typedef struct
{
	char nome[100];
	int idade;
	char rg[20];
	char cpf[20];
	char usuario[20];
	char senha[30];
}cadastro;

typedef struct
{
	float saldo;
	int insere;
	int retira;
	float valorinserido;
	float valorretirado;
}ext;

void criarconta()
{
	cadastro cliente;
	char conta[300], registro[300];
	int flag=0;
	FILE *arq;
	printf("CADASTRO DE CLIENTE\n\n");
	printf("Insira sua idade: ");
	scanf("%d",&cliente.idade);
	if(cliente.idade>=18)
	{
		printf("Insira seu primeiro nome: ");
		scanf("%s",cliente.nome);
		printf("Insira seu RG: ");
		scanf("%s",&cliente.rg);
		printf("Insira seu CPF: ");
		scanf("%s",&cliente.cpf);
		do
		{
			printf("Crie um usuario: ");
			scanf("%s",&cliente.usuario);
			strcpy(registro,cliente.usuario);
			strcat(registro,".txt");
			arq=fopen(registro,"r");
			if(arq!=NULL)
				fprintf(stderr,"Usuario ja existente, tente outro!\n\n");
			else
				flag=1;
		} while (flag==0);
		printf("Crie uma senha: ");
		scanf("%s",&cliente.senha);
		strcpy(registro,cliente.usuario);
		strcat(registro,".txt");
		arq=fopen(registro,"w");
		fprintf(arq,"%s\t%d\t%s\t%s\t%s\t%s",cliente.nome,cliente.idade,cliente.rg,cliente.cpf,cliente.usuario,cliente.senha);
	}
	else
	{
		printf("\nIdade nao permitida!\n\n");
		system("pause");
		return;
	}
	fclose (arq);
	strcpy(conta,cliente.usuario);
	strcat(conta,"_extrato.txt");
	arq=fopen(conta,"w");
	fprintf(arq,"%f\t%d\t%f\t%d\t%f", 0.00, 0, 0.00, 0, 0.00);
	fclose (arq);
	printf("\nCadastro realizado!\n\n");
	system("pause");
}

void mostrarconta()
{
	FILE *arq;
	cadastro cliente;
	char registro[300], senha[20];
	int cont=0;
	printf("CHECAGEM DE CONTA\n\n");
	printf("Digite seu usuario para ver sua conta: ");
	scanf("%s",cliente.usuario);
	strcpy(registro,cliente.usuario);
	strcat(registro,".txt");
	arq=fopen(registro,"r");
	if(arq==NULL)
	{
		fprintf(stderr,"\nUsuario nao cadastrado!\n\n");
		system("pause");
		return;
	}
	fscanf(arq,"%s\t%d\t%s\t%s\t%s\t%s",&cliente.nome,&cliente.idade,&cliente.rg,&cliente.cpf,&cliente.usuario,&cliente.senha);
	fclose(arq);
	do
	{
		printf("Digite sua senha para ver sua conta: ");
		scanf("%s", &senha);
		if(strcmp(senha,cliente.senha))
		{
			printf("SENHA INCORRETA!\n\n");
			cont++;
			if (cont==3)
			{
				printf("Voce digitou sua senha errado tres vezes!\n\n");
				system("pause");
				return;
			}
		}
		else
			cont=3;
	} while(cont<3);
	fprintf(stdout,"\nNome: %s",cliente.nome);
	fprintf(stdout,"\nIdade: %d",cliente.idade);
	fprintf(stdout,"\nRG: %s",cliente.rg);
	fprintf(stdout,"\nCPF: %s",cliente.cpf);
	fprintf(stdout,"\nUsuario: %s\n\n",cliente.usuario);
	system("pause");
	return;
}

void mostrarsaldo()
{
	FILE *arq;
	FILE *arq2;
	cadastro cliente;
	ext valor;
	char registro[300], conta[300], senha[20];
	int cont=0;
	printf("CHECAGEM DE SALDO\n\n");
	printf("Digite seu usuario para ver seu saldo: ");
	scanf("%s",cliente.usuario);
	strcpy(conta,cliente.usuario);
	strcat(conta,"_extrato.txt");
	arq=fopen(conta,"r");
	if(arq==NULL)
	{
		fprintf(stderr,"\nUsuario nao cadastrado!\n\n");
		system("pause");
		return;
	}
	fscanf(arq,"%f",&valor.saldo);
	fclose(arq);
	strcpy(registro,cliente.usuario);
	strcat(registro,".txt");
	arq2=fopen(registro,"r");
	fscanf(arq2,"%s\t%d\t%s\t%s\t%s\t%s",&cliente.nome,&cliente.idade,&cliente.rg,&cliente.cpf,&cliente.usuario,&cliente.senha);
	fclose(arq2);
	do
	{
		printf("Digite a senha da conta: ");
		scanf("%s", &senha);
		if(strcmp(senha,cliente.senha))
		{
			printf("SENHA INCORRETA!\n\n");
			cont++;
			if (cont==3)
			{
				printf("Voce digitou a senha errada tres vezes!\n\n");
				system("pause");
				return;
			}
		}
		else
			cont=3;
	} while(cont<3);
	printf("\nSaldo: %.2f\n\n",valor.saldo);
	system("pause");
	return;
}

void inserirgolpinhos()
{
	FILE *arq;
	cadastro cliente;
	ext valor;
	char conta[300];
	float golpinhos;
	printf("DEPOSITO\n\n");
	printf("Digite o usuario da conta em que deseja inserir dinheiro: ");
	scanf("%s",cliente.usuario);
	strcpy(conta,cliente.usuario);
	strcat(conta,"_extrato.txt");
	arq=fopen(conta, "r");
	if(arq==NULL)
	{
		fprintf(stderr,"\nUsuario nao cadastrado!\n\n");
		system("pause");
		return;
	}
	fscanf(arq,"%f\t%d\t%f\t%d\t%f",&valor.saldo,&valor.insere,&valor.valorinserido,&valor.retira,&valor.valorretirado);
	fclose(arq);
	printf("\nDigite o valor que deseja inserir: ");
	scanf("%f",&golpinhos);
	valor.saldo=valor.saldo+golpinhos;
	valor.insere++;
	valor.valorinserido=valor.valorinserido+golpinhos;
	arq=fopen(conta,"w");
	fprintf(arq,"%f\t%d\t%f\t%d\t%f",valor.saldo,valor.insere,valor.valorinserido,valor.retira,valor.valorretirado);
	fclose (arq);
	printf("\nDinheiro depositado!\n\n");
	system("pause");
	return;
}

void retirargolpinhos()
{
	FILE *arq;
	FILE *arq2;
	cadastro cliente;
	ext valor;
	char registro [300], conta[300], senha[20];
	int cont=0;
	float golpinhos;
	printf("SAQUE\n\n");
	printf("Digite o usuario da conta em que deseja retirar dinheiro: ");
	scanf("%s",cliente.usuario);
	strcpy(conta,cliente.usuario);
	strcat(conta,"_extrato.txt");
	arq=fopen(conta,"r");
	if(arq==NULL)
	{
		fprintf(stderr,"\nUsuario nao cadastrado!\n\n");
		system("pause");
		return;
	}
	fscanf(arq,"%f\t%d\t%f\t%d\t%f",&valor.saldo,&valor.insere,&valor.valorinserido,&valor.retira,&valor.valorretirado);
	fclose(arq);
	strcpy(registro,cliente.usuario);
	strcat(registro,".txt");
	arq2=fopen(registro,"r");
	fscanf(arq2,"%s\t%d\t%s\t%s\t%s\t%s",&cliente.nome,&cliente.idade,&cliente.rg,&cliente.cpf,&cliente.usuario,&cliente.senha);
	fclose(arq2);
	do
	{
		printf("Digite a senha da conta: ");
		scanf("%s", &senha);
		if(strcmp(senha,cliente.senha))
		{
			printf("SENHA INCORRETA!\n\n");
			cont++;
			if (cont==3)
			{
				printf("Voce digitou a senha errada tres vezes!\n\n");
				system("pause");
				return;
			}
		}
		else
			cont=3;
	} while(cont<3);
	printf("\nDigite o valor que deseja retirar: ");
	scanf("%f", &golpinhos);
	if(golpinhos>valor.saldo)
		printf("\nSaldo insuficiente para saque!\n\n");
	else if(golpinhos==valor.saldo)
	{
		valor.retira++;
		printf("\nSaque realizado de valor igual ao saldo!\n\n");	
		arq=fopen(conta,"w");
		valor.valorretirado=valor.valorretirado+golpinhos;
		fprintf(arq,"%f\t%d\t%f\t%d\t%f",0.00,valor.insere,valor.valorinserido,valor.retira,valor.valorretirado);
		fclose(arq);
	}
	else
	{
		valor.retira++;
		valor.saldo=valor.saldo-golpinhos;
		valor.valorretirado=valor.valorretirado+golpinhos;
		arq=fopen(conta,"w");
		fprintf(arq,"%f\t%d\t%f\t%d\t%f",valor.saldo,valor.insere,valor.valorinserido,valor.retira,valor.valorretirado);
		fclose (arq);
		printf("\nSaque realizado!\n\n");
	}
	system("pause");
	return;
	
}

void extrato()
{
	FILE *arq;
	FILE *arq2;
	cadastro cliente;
	ext valor;
	char registro [300], conta[300], senha[20];
	int cont=0;
	printf("EXTRATO\n\n");
	printf("Digite o usuario da conta em que deseja ver o extrato: ");
	scanf("%s",cliente.usuario);
	strcpy(conta,cliente.usuario);
	strcat(conta,"_extrato.txt");
	arq=fopen(conta, "r");
	if(arq==NULL)
	{
		fprintf(stderr,"\nUsuario nao cadastrado!\n\n");
		system("pause");
		return;
	}
	fscanf(arq,"%f\t%d\t%f\t%d\t%f",&valor.saldo,&valor.insere,&valor.valorinserido,&valor.retira,&valor.valorretirado);
	fclose(arq);
	strcpy(registro,cliente.usuario);
	strcat(registro,".txt");
	arq2=fopen(registro,"r");
	fscanf(arq2,"%s\t%d\t%s\t%s\t%s\t%s",&cliente.nome,&cliente.idade,&cliente.rg,&cliente.cpf,&cliente.usuario,&cliente.senha);
	fclose(arq2);
	do
	{
		printf("Digite a senha da conta: ");
		scanf("%s", &senha);
		if(strcmp(senha,cliente.senha))
		{
			printf("SENHA INCORRETA!\n\n");
			cont++;
			if (cont==3)
			{
				printf("Voce digitou a senha errada tres vezes!\n\n");
				system("pause");
				return;
			}
		}
		else
			cont=3;
	} while(cont<3);
	printf("\nSaldo atual: %.2f\n",valor.saldo);
	printf("Foram inseridos %.2f em %d vez(es)\n",valor.valorinserido,valor.insere);
	printf("Foram retirados %.2f em %d vez(es)\n\n",valor.valorretirado,valor.retira);
	system("pause");
	return;
}

void removerconta()
{
	FILE *arq;
	cadastro cliente;
	char registro [300], conta[300], senha[20];
	int cont=0;
	printf("REMOCAO DE CONTA\n\n");
	printf("Digite o usuario da conta que deseja remover: ");
	scanf("%s",cliente.usuario);
	
	strcpy(registro,cliente.usuario);
	strcat(registro,".txt");
	arq=fopen(registro,"r");
	if(arq==NULL)
	{
		fprintf(stderr,"\nUsuario nao cadastrado!\n\n");
		system("pause");
		return;
	}
	fscanf(arq,"%s\t%d\t%s\t%s\t%s\t%s",&cliente.nome,&cliente.idade,&cliente.rg,&cliente.cpf,&cliente.usuario,&cliente.senha);
	fclose(arq);
	do
	{
		printf("Digite a senha da conta para confirmar a exclusao: ");
		scanf("%s", &senha);
		if(strcmp(senha,cliente.senha))
		{
			printf("SENHA INCORRETA!\n\n");
			cont++;
			if (cont==3)
			{
				printf("Voce digitou a senha errada tres vezes!\n\n");
				system("pause");
				return;
			}
		}
		else
			cont=3;
	} while(cont<3);
	
	strcpy(registro,cliente.usuario);
	strcat(registro,".txt");
	remove(registro);
	strcpy(conta,cliente.usuario);
	strcat(conta,"_extrato.txt");
	remove(conta);
	printf("\nConta Removida!\n\n");
	system("pause");
}

int main()
{
	int op;
	do
	{
		system("cls");
		printf("Opcoes:\n");
		printf("\n1 - Criar conta");
		printf("\n2 - Mostrar conta");
		printf("\n3 - Mostrar saldo");
		printf("\n4 - Inserir dinheiro");
		printf("\n5 - Retirar dinheiro");
		printf("\n6 - Extrato");
		printf("\n7 - Remover conta");
		printf("\n8 - Sair\n");
		printf("\nDigite uma opcao: ");
		scanf("%d", &op);
		switch(op)
		{
			case 1:
				system("cls");
				criarconta();
				break;
			case 2:
				system("cls");
				mostrarconta();
				break;
			case 3:
				system("cls");
				mostrarsaldo();
				break;
			case 4:
				system("cls");
				inserirgolpinhos();
				break;
			case 5:
				system("cls");
				retirargolpinhos();
				break;
			case 6:
				system("cls");
				extrato();
				break;
			case 7:
				system("cls");
				removerconta();
				break;
			case 8:
				break;
			default:
				system("cls");
				printf("Opcao nao existente!\n\n");
				system("pause");
				break;
		}
	}while(op!=8);
	return 0;
}
