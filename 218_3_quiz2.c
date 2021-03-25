#include<stdio.h>
int main()
{
    int n,i,j,k,sum=0,s,u,f;
    scanf("%d",&n);
    if(n<=10)
        printf("%d",n-1);
    else if(n<=100)
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
    else if(n<=1000)
    {
        s=n/100;
        for(k=1; k<s; k++)
        {
            for(j=0; j<10; j++)
            {
                for(i=0; i<10; i++)
                {
                    if(k==i)
                        sum++;
                }
            }
        }
        printf("%d",sum+18);
    }
    else if(n<=10000)
    {
        s=n/1000;
        for(k=1; k<s; k++)
        {
            for(j=0; j<10; j++)
            {
                for(i=0; i<10; i++)
                {
                    for(u=0; u<10; u++)
                    {
                        if(k==u&&i==j)
                            sum++;
                    }
                }
            }
        }
        printf("%d",sum+108);
    }
    else if(n<=100000)
    {
        s=n/10000;
        for(k=1; k<s; k++)
        {
            for(j=0; j<10; j++)
            {
                for(i=0; i<10; i++)
                {
                    for(u=0; u<10; u++)
                    {
                        for(f=0; f<10; f++)
                        {
                            if(k==f&&j==u)
                                sum++;
                        }
                    }
                }
            }
        }
        printf("%d",sum+198);
    }
    else if(n<=1000000)
    {
        s=n/100000;
        for(k=1; k<s; k++)
        {
            for(j=0; j<10; j++)
            {
                for(i=0; i<10; i++)
                {
                    for(u=0; u<10; u++)
                    {
                        for(f=0; f<10; f++)
                        {
                            if(k==f&&j==u)
                                sum++;
                        }
                    }
                }
            }
        }
        printf("%d",sum+1098);
    }
    return 0;
}
