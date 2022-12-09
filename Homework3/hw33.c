#include <stdio.h>

int main(){
	setbuf(stdout, NULL);
	int n = 0,rser = 0;
	double rp = 0;	
	printf("Enter the number of resistors :");
	scanf("%d",&n);
	for(int i =0;i < n;i++)
	{
		int r = 0;
		printf("Enter value for resistor %d [ohm]\n",i + 1);
		scanf("%d",&r);
		rp += 1.0/r;
		rser += r;
	}
	printf("R ser = %d\n",rser);
	printf("R par = %0.1lf\n",1.0/rp);
return 0;
}