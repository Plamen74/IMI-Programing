#include <stdio.h>

int main(){
	setbuf(stdout, NULL);
	int numbers[] = {10,20,5,6,78,101};
	int sum = 0,mult = numbers[0];
	double aver = 0;
	for(int i = 0;i < 6;i ++)
	{
		sum += numbers[i];
		mult *= numbers[i];
	}
	printf("Sum = %d\n",sum);
	printf("Multipl = %d\n",mult);
	printf("Average = %lf",(sum/6.0));
return 0;
}