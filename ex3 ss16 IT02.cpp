#include <stdio.h>
void Tong(int a, int b, int *ketQua){
	*ketQua = a + b;
} 
int main(){
	int x=10;
	int y=7;
	int ketQua;
	Tong(x , y, &ketQua);
	printf("ket qua cua %d + %d la :%d",x,y,ketQua);
	return 0; 
} 
