#include <stdio.h>

int main(){
	int num1 = -20;
	int num2 = 30;
	int a ;
	printf("Number1 = %d,Number2 = %d\n",num1,num2);
	a = num1;
	num1 = num2;
	num2 = a;
	printf("Number1 = %d,Number2 = %d\n",num1,num2);
return 0;
}
