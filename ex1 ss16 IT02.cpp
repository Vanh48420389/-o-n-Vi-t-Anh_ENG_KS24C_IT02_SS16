#include <stdio.h>

int main(){
	int N=1000;
	printf("Gia tri cua N la : %d\n",N);
	printf("Dia chi cua N la :%d\n", &N);
	int *ptr ;
	ptr = &N;
	printf("Gia tri cua N la %d\n", *ptr);
	printf("Dia chi cua N la : %d\n", &*ptr);
	return 0;
} 
