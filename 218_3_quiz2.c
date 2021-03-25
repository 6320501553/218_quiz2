#include<stdio.h>
int main()
{
    int n,i=0,j,k,sum=0,u,f,d,a,s,h,y=0;
    int m[10000];
    scanf("%d",&n);
    for(i=1; i<=10; i++)
    {
        m[i]=i;
        sum++;
    }
    i=sum;
    for(k=1; k<10; k++)
    {
        for(j=1; j<10; j++)
        {
            if(k==j)
            {
                h=k*10;
                m[i]=h+j;
                i++;
                sum++;
            }
        }
    }
    h=sum;
    for(k=1; k<10; k++)
    {
        m[i]=0;
        for(j=0; j<10; j++)
        {
            for(i=0; i<10; i++)
            {
                if(k==i)
                {
                    m[h]=((k*100)+(j*10)+i);
                    h++;
                    sum++;
                }
            }
        }
    }
    h=sum;
    for(k=1; k<10; k++)
    {
        for(j=0; j<10; j++)
        {
            for(i=0; i<10; i++)
            {
                for(u=0; u<10; u++)
                {
                    if(k==u&&i==j)
                    {
                        m[h]=(k*1000)+(j*100)+(i*10)+u;
                        h++;
                        sum++;
                    }
                }
            }
        }
    }
    h=sum;
    for(k=1; k<10; k++)
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
                        {
                            m[h]=(k*10000)+(j*1000)+(i*100)+(u*10)+f;
                            h++;
                            sum++;
                        }
                    }
                }
            }
        }
    }
    h=sum;
    for(k=1; k<10; k++)
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
                            {
                                m[h]=(k*100000)+(j*10000)+(i*1000)+(u*100)+(f*10)+d;
                                h++;
                                sum++;
                            }
                        }
                    }
                }
            }
        }
    }
    for(i=0;i<sum;i++)
    {
        if(m[i]<=n)
        {
            y=i;
        }
        else if(m[i]>n)
            break;
    }
    printf("%d",y);
    return 0;
}
