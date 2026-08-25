#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {

/*	
	int a, b, c;
	int resultado;
	
	printf ("Insira os valores de A, B, C: ");
	scanf("%d %d %d", &a, &b, &c );
	
	if (a<b){
		resultado = a;
	}else{ 
	    resultado = b;
	}
	if (c>resultado){
		resultado = c;
	}
	
    printf("%d eh o maior", resultado);

*/	
    
    int num, cont, quad;
    
    printf ("Digite um numero: ");
    scanf ("%d", &num);
    
    if (num > 0){
	cont = num*(-1);
	printf ("Inverso %d", cont);
	}else{
	quad = num*num;
    printf ("Quadrado %d", quad);
    }


	return 0;
}
