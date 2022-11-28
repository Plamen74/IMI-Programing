#include <stdio.h>
#include <stdint.h>
#include <windows.h>

int main(){

	int number1, number2, s,p;
	printf("Enter a: ");
	scanf("%lu", &number1);
    printf("Enter h: ");
	scanf("%lu", &number2);
	s = number1 * number2;
	p = 2*(number1 + number2);
	printf("S = %d\n", s);
	printf("P = %d\n", p);
	system("pause");
	return 0;

return 0;
}
