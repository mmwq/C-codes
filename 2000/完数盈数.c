#include<stdio.h>

int main()
{
    int i,j,sum;
    int a[61]= {0};
    a[60]=-1;
    for(i=2; i<=60; i++)
    {
        sum = 0;
        for(j=1; j<i; j++)
            if(i%j==0)
                sum+=j;
        if(sum==i)
            a[i]=1;
        else if(sum>i)
            a[i]=2;
    }
    printf("E: ");
    for(i=2; i<=60; i++)
    {
        if(a[i]==1&&i!=28)
            printf("%d ",i);
        else if(i==28)
            printf("%d\n",i);
    }
    printf("G: ");
    for(i=2; i<=60; i++)
    {
        if(a[i]==2&&i!=60)
            printf("%d ",i);
        else if(i==60)
            printf("%d",i);
    }
    return 0;
}


