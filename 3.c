#include <stdio.h>


int main() {

float base = 0;
float altura = 0;
float area = 0;
	
	printf("Informe a base "); 
	scanf("%f",  &base);
	printf("Informe a altura: "); 
	scanf("%f",  &altura);
	
	area = base * altura;

	
	printf("A area e igual %f:", area);

}
