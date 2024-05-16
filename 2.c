#include <stdio.h>


int main() {

float nota1 = 0;
float nota2 = 0;
float nota3 = 0;
float nota4 = 0;
float total = 0;
float media = 0;
	
	printf("Digite sua primeira nota: "); 
	scanf("%f",  &nota1);
	printf("Digite sua segunda nota: "); 
	scanf("%f",  &nota2);
	printf("Digite sua terceira nota: "); 
	scanf("%f",  &nota3);
	printf("Digite sua quarta nota: "); 
	scanf("%f",  &nota4);
	
	total = nota1 + nota2 + nota3 + nota4;
	media = total/4;
	
	printf("O total e %f:", total);
	printf("\n");
	printf(" A media e: %f", media);
}
