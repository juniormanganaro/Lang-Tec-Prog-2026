#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

// Exercicio 1

   int primeiro, segundo, aux;
		
	printf("Digite o primneiro Valor");
	scanf("%d", &primeiro);
	
	printf("Digite o segundo Valor");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	printf("%d \n %d", primeiro, segundo);

// Exercicio 02 	
	
	double valor;
		
	printf("Digite um valor: ");
	scanf("%lf". &valor);
	
	valor / 10
	
	printf ("%lf", valor);	
	  
// Exercicio 3



// Exercicio 4

   float salario, totvend, comis, vlrcom, totalrec;
   
   printf("Digite o seu salario: ");
   scanf("%f", &salario);
   
   printf("Digite o valor total em vendas: ");
   scanf("%f", &totvend);
   
   printf("Digite o valor da comissao: ");
   scanf("%f", &comis); 
    
   totvend*comis=vlrcom;
   
   vlrcom+salario=&totalrec;
   
   printf("%f", &totalrec); 
   	  
	
	return 0;
}
