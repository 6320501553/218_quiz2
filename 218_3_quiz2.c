#include<stdio.h>
int main()
{
    int n,i,j,k,sum=0,s;
    scanf("%d",&n);
    if(n<=10)
        printf("%d",n-1);
    else if(n>10&&n<=100)
    {
        s=n/10;
        for(k=1; k<s; k++)
        {
            for(j=0; j<10; j++)
            {
                if(k==j)
                    sum++;
            }
        }
        printf("%d",sum+9);
    }
    else if(n>100&&n<=1000)
    {
        s=n/100;
        for(k=1; k<s; k++)
        {
            for(j=0; j<10; j++)
            {
                for(i=0;i<10;i++)
                {
                    if(k==i)
                        sum++;
                }
            }
        }
        printf("%d",sum+18);
    }
    return 0;
}
