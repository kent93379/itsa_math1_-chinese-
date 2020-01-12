#include<stdio.h>
#include <math.h>


int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i=0,num=0;
        for(i=1;i<=n;i++)
        {
            if(i!=35&&i%5==0&&i%7==0)
                printf(" ");
            if(i%5==0&&i%7==0)
                printf("%d",i);
        }
        printf("\n");

    }
}
