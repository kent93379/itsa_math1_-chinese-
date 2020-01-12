#include<stdio.h>

int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {
        if(a%4==0)
        {
            if(a%100==0&&a%400!=0)
                printf("Common Year\n");
            else if(a%100==0&&a%400==0)
                printf("Bissextile Year\n");

            else
                printf("Bissextile Year\n");
        }
        else
            printf("Common Year\n");
    }
}
