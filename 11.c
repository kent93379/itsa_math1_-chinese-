#include<stdio.h>
#include <math.h>


int main()
{
    int a;
    while(scanf("%d",&a)!=EOF)
    {

        int nt10=0,nt5=0,nt1=0;
        while(1)
        {
            if(a-10>=0)
            {
                nt10++;
                a=a-10;
            }
            else
                break;
        }
        while(1)
        {
            if(a-5>=0)
            {
                nt5++;
                a=a-5;
            }
            else
                break;
        }
        while(1)
        {
            if(a-1>=0)
            {
                nt1++;
                a=a-1;
            }
            else
                break;
        }
        printf("NT10=%d\n",nt10);
        printf("NT5=%d\n",nt5);
        printf("NT1=%d\n",nt1);
    }
}
