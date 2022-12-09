#include <stdio.h>


int main(){
	
	for(int i = 0;i<= 20;i ++)
	{
		printf("%d\n",i);
	}
	printf("\n");
	int a = 20;
	while(a <= 30)
	{
		printf("%d\n",a);
		a++;
	}
	printf("\n");
	a = 10;
	do{
		printf("%d\n",a);
		a+=5;
	}while(a <= 100);
	printf("\n");
	for(int i = 20;i > 10;i--)
	{
		printf("%d\n",i);
	}
	printf("\n");
	a = 1000;
	while(a > 0)
	{
		printf("%d\n",a);	
		a -= 100;
	}
	printf("\n");
	return 0;
}