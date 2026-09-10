#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, s1, s2, s3, s4, s5, s6, s7, s8, s9; 
	int ver1, ver2, soma1, res1, ss1, ss2, ss3, ss4, ss5, ss6, ss7, ss8, ss9, ss10, soma2, res2;
	
	printf("Digite o seu CPF com espaços entre os numeros: ");
	scanf ("%d %d %d %d %d %d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8, &n9, &n10, &n11);
	printf ("%d %d %d %d %d %d %d %d %d %d %d", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11);
	
	s1=n1*10;
	s2=n2*9;
	s3=n3*8;
	s4=n4*7;
	s5=n5*6;
	s6=n6*5;
	s7=n7*4;
	s8=n8*3;
	s9=n9*2;
	
	soma1=s1+s2+s3+s4+s5+s6+s7+s8+s9;
	soma1 *=10;
	res1=soma1%11;
	
	ss1=n1*11;
	ss2=n2*10;
	ss3=n3*9;
	ss4=n4*8;
	ss5=n5*7;
	ss6=n6*6;
	ss7=n7*5;
	ss8=n8*4;
	ss9=n9*3;
	ss10=res1*2;
	
	soma2=ss1+ss2+ss3+ss4+ss5+ss6+ss7+ss8+ss9+ss10;
	soma2 *=10;
	res2=soma2%11;
	
	if (res1==n10 && res2==n11)
	  printf ("CPF Valido!");
	else 
	  printf ("CPF Invalido!");  
	
	
	
	
	
	
	
	return 0;
}
