#include <stdio.h>

int main()
{
    int num=0, i, j;
    
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        for(j=1; j<=num; j++)
        {
            if(i-j>0)
            	printf(" ");
            else
            	printf("*");
        }
        printf("\n");
    }
    return 0;
}
