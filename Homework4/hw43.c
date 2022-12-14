#include <stdio.h>

int main(){
	setbuf(stdout, NULL);
	srand(time(NULL));
	double arr[10];
	int count = 0;
	double sum = 0.0;
	for (int i = 0;i < 10;i++)	
	{
		double num;
	    printf("Enter number :\n");
		scanf("%lf",&num);
		arr[i]= num;
		if((num > 5.0)&&(num < 10.0))
		{
			count ++;
			sum += num;
		}
	}
	for(int i = 0; i < 10;i++)
	{
		printf("%d -> %lf\n",i+1,arr[i]);
	}
printf("Sum is: %lf\n",sum);
printf("Number is: %d",count);
return 0;
}