#include <stdio.h>

int main()
{
    int num=0, i, j, q;
    
    scanf("%d", &num);
    for(i=1; i<=num; i++)
    {
        for(j=num-i; j>=0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
