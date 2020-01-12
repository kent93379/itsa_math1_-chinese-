#include<stdio.h>
#include <math.h>


int main()
{
    int a,b,c=100*100;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        int judge=1;

        if((a*a+b*b)<=10000)
            printf("inside\n");
        else
            printf("outside\n");

    }
}
