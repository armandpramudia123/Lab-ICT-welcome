#include <stdio.h>
int main()
{
	int A[5];
	int i;
	
	printf("Program Menginput Array\n\n");

	for(i=0; i<=4; i++){ //i=0 mulai dari 0; i<=4 maka stop sampai angka 4; i++ perubahan Kondisi
		printf("Bilangan %i = ", (i+1));
		scanf("%3i", &A[i]);
	}
	for(i=0; i<=4; i++){ //i=0 mulai dari 0; i<=4 maka stop sampai angka 4; i++ perubahan Kondisi
		printf("%3i", A[i]);
	}return 0;
}
	
