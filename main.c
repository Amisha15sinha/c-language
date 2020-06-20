#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    printf("The prime no. from 1 to 300 are:\n");
    for(i=1;i<=300;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {

                break;
            }
        }
        if(j==i)
        {
            printf("%d \t",j);
        }
    }
    return 0;
}
