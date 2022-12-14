#include <stdio.h>

int main(){
	setbuf(stdout, NULL);
	srand(time(NULL));
	int arr[100];
	int min = 0;
	int max = 0;
	for (int i = 0;i < 100;i++)
	{
	    int num = rand()%21 - 10;
		arr[i]= num;
		if(min > num)
		{
			min = num;
		}
		if(max < num)
		{
			max = num;
		}
		
		printf("%d -> %d\n",i,num);
	}
printf("Min value is: %d\n",min);
printf("Max value is: %d",max);
return 0;
}