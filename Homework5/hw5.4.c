#include <stdio.h>
#include <stdint.h>
#define SETBIT(mask, bit) mask |= (1ULL << (bit))
#define CLEARBIT(mask, bit) mask &= ~(1ULL << (bit))
#define CHECKBIT(mask, bit) !!((mask) & (1ULL << (bit)))
#define TOGGLEBIT(mask, bit) mask ^= (1ULL << (bit))
#define SWAP(a,b,c) for(int i =0;i < 8;i++) {c[i] = a[i] ; a[i] = b [i] ; b[i] = c[i];}
#define MAX(x,y,z) x>y ? (x > z ? printf("max= %d\n",x) : printf("max= %d\n",z)) : ( y > z ? printf("max= %d\n",y) : printf("max= %d\n",z))
#define MIN(x,y,z) x<y ? (x < z ? printf("min= %d\n",x) : printf("min= %d\n",z)) : ( y < z ? printf("min= %d\n",y) : printf("min= %d\n",z))

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
   uint64_t mask = 0;
   int x,y,z,bit;
   printf("Enter x,y,z\n");
   scanf("%d %d %d",&x, &y, &z);
   MAX(x,y,z);
   MIN(x,y,z);
   printBits(mask);
   //1.3
   printf("Enter bit for set \n");
   scanf("%d",&bit);
   SETBIT(mask,bit);
   printBits(mask);
   //1.4
   printf("Enter bit for clear \n");
   scanf("%d",&bit);
   CLEARBIT(mask,bit);
   printBits(mask);
   //1.5
   printf("Enter bit for inverse \n");
   scanf("%d",&bit);
   TOGGLEBIT(mask,bit);
   printBits(mask);
   //1.6
   printf("Enter bit for check \n");
   scanf("%d",&bit);  
   printf("bit is :%d\n ",CHECKBIT(mask,bit));
   //1.7
  // printf("Enter two numbers\n");
  // scanf("%d %d",&x,&y);
   char[8] a = 11111111 ;
   char[8] b = 00000000 ;
   char[8] c = 00000000 ;
  SWAP(a,b,c);
  for(int i = 0;i < 8;i++)
  {
	  printf(a[i]);
  }
  printf("\n");
   for(int i = 0;i < 8;i++)
  {
	  printf(b[i]);
  } 
   
   return 0;
}
