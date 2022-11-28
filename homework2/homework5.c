#include <stdio.h>

int main(){

	
	float Uin,Uf,I,R;
	printf("Enter Uin[V]:");
	scanf("%f",&Uin);
	printf("Enter Uf[V]: ");
	scanf("%f",&Uf);
	printf("Enter I[mA]:");
	scanf("%f",&I);
	R = (Uin - Uf)/I;
	printf("%.3f R =\n",R);
	
return 0;
}