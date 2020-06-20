#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    float sum=0,fact=1.0,div;
    for(i=1;i<=7;i++)
    {
        fact=fact*i;
        div=i/fact;
        sum=sum+div;
    }
    printf("%f",sum);
return 0;

}


