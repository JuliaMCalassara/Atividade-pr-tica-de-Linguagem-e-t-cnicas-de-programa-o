#include <iostream>
#include <stdio.h>
#include <locale.h>

int opcao = 0;
int senha;
int senhaDigitada;
float saldo = 500.00;
float valorDeposito;
float saque;
float maiorDeposito = 0.0;

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	printf("Crie uma senha de 4 digitos: ");
	scanf("%d", &senha);
	
	do {
		
		printf("\n1. Depositar\n \n2. Sacar\n \n3. Consultar Saldo e Estatística\n \n4. Sair\n");
	
		printf("\nEscolha uma opção: \n");
		scanf("%d", &opcao);
		
			switch (opcao) {
				case 1:
					printf("\n-- Depósito --\n");
					printf("\nValor do depósito: R$ \n");
					scanf("%f", &valorDeposito);
				
					if (valorDeposito <= 0) {
						printf("\nValor inválido!\n");
					} else {
						saldo = saldo + valorDeposito;
					
						if (valorDeposito > maiorDeposito) {
						maiorDeposito = valorDeposito;
						}
					}
					break;
				case 2: 
					printf("\n-- Sacar --\n");
					printf("\nDigite sua senha: \n");
					scanf("%d", &senhaDigitada);			
				
					if (senhaDigitada != senha) {
						printf("\nSenha Incorreta! Operação cancelada\n");
					} else {
						printf("\nValor do saque: R$ \n");
						scanf("%f", &saque);
					
						if (saldo < saque) {
							printf("\nSaldo insuficiente!\n");
						} else {
							saldo = saldo - saque;
						}
					}
					break;
				case 3:
					printf("\n-- Consultar Saldo e Estatísticas --\n");
					printf("\nSaldo atual: R$ %.2f\n", saldo);
					printf("\nMaior deposito: R$ %.2f\n", maiorDeposito);
					break;
				case 4:
					printf("\n-- Sair --\n");
					printf("\nPrograma finalizado!\n");
					break;			
			}	
		
	} while (opcao != 4);
		printf("\nObrigado por usar nosso banco!\n");
		

	return 0;
}
