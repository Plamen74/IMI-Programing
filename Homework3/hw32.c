#include <stdio.h>
//# include <math.h>

int main(){
	setbuf(stdout, NULL);
	double a = 0.0,sum = 0.0,min = 0.0,max = 0.0;	
	for(int i = 0;i < 20;i++)
	{
		a = rand() % 20.0;
		 printf("%lf\n", a);
		 sum += a;
		 if(i == 0)
		 {
			 min = a;
			 max = a;
		 }
		 else 
		 {
			 if(a < min)
			 {
				 min = a;
			 }
			else if(a > max)
			 {
				 max = a;
			 }
		 }
	}
	printf("The sum is : %lf\n",sum);
	printf("The biggest value is : %lf\n",max);
	printf("the smallest value is :%lf\n",min);
	printf("The average value is : %lf\n",sum/20);
	
return 0;
}