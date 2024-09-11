//PROGRAM TO PRINT 1,4,9,16,25,………N
#include<stdio.h>
int main()
{
    int N;
    printf("Enter the value of N: ");
    scanf("%d",&N);
    
    printf("Squars of numbers lesser than %d\n",N);
    int i=1;
    while (i<=N)
    {
       int square=i*i;
       if (square>=N)
       {
        break;
       }
       printf("%d,",square);
       i++;
    }
    
    return 0;
}