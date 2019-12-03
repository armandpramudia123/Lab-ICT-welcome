#include <stdio.h>
int main()
{
	int A[10];
	int i;
	
	printf("Program Input 20 Bilangan Array\n");
	
	for(i=0; i<=9; i++){
		printf("Bilangan %i = ", (i+1));
		scanf("%3i", &A[i]);
	}
	for(i=1; i<=9; i=i+2){
		printf("%3i", A[i]);
	}
	return 0;
}
