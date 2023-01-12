#include <stdio.h>
#include <stdint.h>
#define SETBIT(mask, bit) mask |= (1ULL << (bit))
#define CLEARBIT(mask, bit) mask &= ~(1ULL << (bit))
#define CHECKBIT(mask, bit) !!((mask) & (1ULL << (bit)))
#define TOGGLEBIT(mask, bit) mask ^= (1ULL << (bit))
void printBits(uint64_t mask);

void printBits(uint64_t mask){
    for (int i = 63; i >= 0; i--){
        printf("%llu", CHECKBIT(mask, i));
    }
    printf("\n");
}

int main(void)
{
	setbuf(stdout, NULL);
    uint64_t attendance = 0;
    int option;
    while (1)
    {
        printf("1. Set attendance\n");
        printf("2. Clear attendance\n");
        printf("3. Attendance info\n");
        printf("4. Change attendance\n");
        printf("5. Exit\n");
		
		do{
			printf("Enter option (1 - 5)");
			scanf("%d", &option);
		}while((option < 1)||(option > 5));
			
        if (option == 1)
        {
			int bit=0;
			for (uint64_t i = 0; i < 64; i++)
			{
				printf("Enter attendance for student %d(1 for true,0 for false)\n",i);
				scanf("%d",&bit);
				if(bit)
				{
					SETBIT(attendance,i);
				}
			}
			printBits(attendance);
		}
        else if (option == 2)//clear 
        {
			int bit = 0;
			do
			{
				printf("Enter number of student for clear (0 - 63)\n");
				scanf("%d",&bit);
			}while((bit < 0)||(bit > 63));
			CLEARBIT(attendance,bit);
			printBits(attendance);
        }
		
        else if (option == 3)//info
        {  
		   printBits(attendance);
        }
        else if (option == 4)//change
        {
		   int bit = 0;
		   do{
			   printf("Enter student with changed attendance \n");
			   scanf("%d",&bit);
		   }while((bit < 0)||(bit > 63));
		   TOGGLEBIT(attendance,bit);
		   printBits(attendance);
        }
		
		else if(option == 5)
		{
			return 0;
		}
    }
    return 0;
}
