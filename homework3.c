#include <stdio.h>
#include <stdint.h>
#include <windows.h>

int main(){	
int a,b,h,s;
		printf("Enter Base1:");
		scanf("%d",&a);
		printf("Enter Base2:");
		scanf("%d",&b);
		printf("Enter Height:");
		scanf("%d",&h);
		s = (a+b)*h/2;
		printf("S = %d",s);
        //system("pause");

return 0;
}