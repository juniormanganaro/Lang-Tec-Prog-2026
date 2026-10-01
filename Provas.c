#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

//Prova Esoft 2M B Exerc01 
	
	int capacidade, qtd_itens, n_mochilas, resto;
  
    printf("Insira a quantidade de itens a serem dispostos nas mochilas: \n");
    scanf("%d",&qtd_itens);
    printf("Insira a capacidade de itens de cada mochila: \n");
    scanf("%d",&capacidade);
    
    n_mochilas = qtd_itens/capacidade;
    resto = qtd_itens%capacidade; 
    
    printf("Legendario, são %d mochilas para seus itens, e sobram %d itnes", n_mochilas, resto);
    
//Prova Esoft 2M  Exerc02
	int a, b, c, aux;
	
	printf("Digite um numero: \n");
	scanf ("%d", &a);
	printf("Digite um numero: \n");
	scanf ("%d", &b);
	printf("Digite um numero: \n");
	scanf ("%d", &c);
	
	if (a==b || a==c || b==c){
		printf ("Os numeros tem que ser distintos");
	} else 
		if (a < b && b < c) { 
			printf("%d %d %d\n", a, b, c); 
		} else 
		if (a < c && c < b) {
		printf("%d %d %d\n", a, c, b); 
		} else 
		if (b < a && a < c) { 
		printf("%d %d %d\n", b, a, c); 
		} else
		if (b < c && c < a) { 
		printf("%d %d %d\n", b, c, a); 
		} else 
		if (c < a && a < b) { 
		printf("%d %d %d\n", c, a, b); 
		} else { 
		printf("%d %d %d\n", c, b, a); 
	} 

// Prova Ads 2N  Exerc01
	int n1, n2, n3, n4, n5; 
	int encontrou = 0; 
	
	printf("Digite 5 números inteiros: "); 
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
 	
	printf("\nValores em ordem consecutiva:\n"); 
	
	if (n2 == n1 + 1) { printf("%d e %d\n", n1, n2); encontrou = 1; } 
	if (n3 == n2 + 1) { printf("%d e %d\n", n2, n3); encontrou = 1; } 
	if (n4 == n3 + 1) { printf("%d e %d\n", n3, n4); encontrou = 1; } 
	if (n5 == n4 + 1) { printf("%d e %d\n", n5, n4, n5); encontrou = 1; } 
	if (!encontrou) {
 		printf("Nenhum número consecutivo foi digitado na sequência.\n"); 
}

// Prova Ads 2N Exer02
	float peso, altura, imc;

	printf("Digite o peso (em kg): "); 
	scanf("%f", &peso); 
	printf("Digite a altura (em metros, ex: 1.75): "); 
	scanf("%f", &altura); 

	imc = peso / (altura * altura); 

	printf("\nIMC calculado: %.2f\n", imc); 

	if (imc < 18.5) { 
		printf("Classificação: Abaixo do peso\n"); 
	} else if (imc <= 24.9) { 
		printf("Classificação: Normal\n"); 
	} else if (imc <= 29.9) { 
		printf("Classificação: Acima do peso\n"); 
	} else { 
	printf("Classificação: Obeso\n"); 
}

// Prova Ads 2N Exerc03
	int A = 6; 
	int B = 0; 
	int C = 0; 
	printf("=== Estado Inicial ===\n"); 
	printf("Pino A = %d | Pino B = %d | Pino C = %d\n\n", A, B, C); 

	printf("=== Operacoes de Movimentacao ===\n\n"); 

	A -= 1; 
	C += 1; 
	printf("1. Mover disco 1 de A para C:\n"); 
	printf(" Pino A = %d | Pino B = %d | Pino C = %d\n\n", A, B, C); 
	A -= 2; 
	B += 2; 
	printf("2. Mover disco 2 de A para B:\n"); 
	printf(" Pino A = %d | Pino B = %d | Pino C = %d\n\n", A, B, C); 
	C -= 1; 
	B += 1; 
	printf("3. Mover disco 1 de C para B:\n"); 
	printf(" Pino A = %d | Pino B = %d | Pino C = %d\n\n", A, B, C); 
	A -= 3; 
	C += 3; 
	printf("4. Mover disco 3 de A para C:\n"); 
	printf(" Pino A = %d | Pino B = %d | Pino C = %d\n\n", A, B, C); 
	B -= 1; 
	A += 1; 
	printf("5. Mover disco 1 de B para A:\n"); 
	printf(" Pino A = %d | Pino B = %d | Pino C = %d\n\n", A, B, C); 
	B -= 2; 
	C += 2; 
	printf("6. Mover disco 2 de B para C:\n"); 
	printf(" Pino A = %d | Pino B = %d | Pino C = %d\n\n", A, B, C); 
	A -= 1; 
	C += 1; 
	printf("7. Mover disco 1 de A para C:\n"); 
	printf(" Pino A = %d | Pino B = %d | Pino C = %d\n\n", A, B, C); 

	printf("=== Estado Final ===\n"); 
	printf("Pino A = %d | Pino B = %d | Pino C = %d\n", A, B, C);

// Prova Esoft 2 MA Exer01
	int n1, n2, n3, n4; 

	printf("Digite 4 números inteiros: "); 
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4); 

	printf("\n--- Análise dos Números ---\n"); 

	if (n1 % 2 != 0) printf("%d é ímpar.\n", n1); 
	if (n1 % 5 == 0) printf("%d é múltiplo de 5.\n", n1); 
	if (n2 % 2 != 0) printf("%d é ímpar.\n", n2); 
	if (n2 % 5 == 0) printf("%d é múltiplo de 5.\n", n2); 
	if (n3 % 2 != 0) printf("%d é ímpar.\n", n3);
	if (n3 % 5 == 0) printf("%d é múltiplo de 5.\n", n3); 
	if (n4 % 2 != 0) printf("%d é ímpar.\n", n4); 
	if (n4 % 5 == 0) printf("%d é múltiplo de 5.\n", n4);
	
 // Prova Esoft 2 MA Exer03
 
	float valor, resultado; 
	int codigo;

	printf("Digite o valor a ser convertido: "); 
	scanf("%f", &valor); 

	printf("Digite o código da conversão (conforme tabela): "); 
	scanf("%d", &codigo); 

	switch (codigo) { 
	resultado = valor * 1.8 + 32; 
	printf("%.2f °C = %.2f °F\n", valor, resultado); 
	break; 
	resultado = (valor - 32) / 1.8; 
	printf("%.2f °F = %.2f °C\n", valor, resultado); 
	break; 
	resultado = valor + 273.15; 
	printf("%.2f °C = %.2f K\n", valor, resultado); 
	break; 
	resultado = valor - 273.15; 
	printf("%.2f K = %.2f °C\n", valor, resultado); 
	break; 
	resultado = valor / 1609.34; 
	printf("%.2f m = %.4f mi\n", valor, resultado); 
	break; 
	resultado = valor * 1609.34; 
	printf("%.2f mi = %.2f m\n", valor, resultado); 
	break; 
	resultado = valor * 2.205; 
	printf("%.2f kg = %.2f lb\n", valor, resultado); 
	break; 
	resultado = valor / 2.205; 
	printf("%.2f lb = %.2f kg\n", valor, resultado); 
	break; 
	resultado = valor / 1.609; printf("%.2f km/h = %.2f mph\n", valor, resultado); 
	break;
	resultado = valor * 1.609; printf("%.2f mph = %.2f km/h\n", valor, resultado); 
	break;
	default: 
	printf("Erro: Unidade de medida ou código de conversão inválido!\n"); 
	break; 
	}

 
	return 0;
}
