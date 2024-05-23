#include <stdio.h>

int main() {

     int numero1,numero2,diff;


	 printf("Digite o primeiro valor: ");
	 scanf("%d",&numero1);

	 printf("Digite o segundo valor: ");
	 scanf("%d",&numero2);


	 diff = numero1 - numero2;

	 if(diff < 0){

	 	diff= -diff;	
	 }

	 printf("A diferença entre os valores e: %d\n" ,diff );


	 return 0;	

}
