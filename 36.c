#include<stdio.h>
#include <math.h>


int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==3||n==4||n==5)
            printf("Spring\n");
        if(n==6||n==7||n==8)
            printf("Summer\n");
        if(n==9||n==10||n==11)
            printf("Autumn\n");
        if(n==12||n==1||n==2)
            printf("Winter\n");

    }
}
