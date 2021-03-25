#include<stdio.h>
int main()
{
    int n,i,j,k,sum=0,s,u,f,d,a,b,c,e,g,h;
    int m[1000000];
    scanf("%d",&n);
    for(i=1;i<10;i++)
    {
        m[i]=i;
    }
    for(i=10;i<100;i++)
    {
        for(k=1; k<10; k++)
        {
            for(j=0; j<10; j++)
            {
                if(k==j)
                    m[i]=(k*10)+j;
            }
        }
    }
    for(i=100;i<1000;i++)
    {
        for(k=1; k<10; k++)
        {
            for(j=0; j<10; j++)
            {
                for(i=0; i<10; i++)
                {
                    if(k==i)
                        m[i]=(k*100)+(j*10)+i;
                }
            }
        }
    }
    for(i=1000;i<10000;i++)
    {
        for(k=1; k<10; k++)
        {
            for(j=0; j<10; j++)
            {
                for(i=0; i<10; i++)
                {
                    for(u=0; u<10; u++)
                    {
                        if(k==u&&i==j)
                            m[i]=(k*1000)+(j*100)+(i*10)+u;
                    }
                }
            }
        }
    }
    /*if(n<10)
        printf("%d",n);
    else if(n>9&&n<=100)
    {
        a=n%10;
        if(a>=5)
            s=(n+10)/10;
        else
            s=n/10;
        for(k=1; k<s; k++)
        {
            for(j=i; j<10; j++)
            {
                if(k==j)
                    sum++;
            }
        }
        printf("%d",sum+9);
    }
    else if(n>99&&n<=1000)
    {
        a=n%100;
        if(a>=50)
            s=(n/100);
        else
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
    else if(n>999&&n<=10000)
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
    else if(n>9999&&n<=100000)
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
    else if(n>99999&&n<=1000000)
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
                            for(d=0; d<10; d++)
                            {
                                if(k==d&&j==f&&i==u)
                                    sum++;
                            }
                        }
                    }
                }
            }
        }
        printf("%d",sum+1098);
    }*/
    return 0;
}
