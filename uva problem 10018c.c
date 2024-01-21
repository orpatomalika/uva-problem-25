
#include<stdio.h>
int main()
{
    long long int n,temp,sum;
    int i,T,r,count;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        scanf("%lld",&n);
        count=0;
iterator:
        temp=n;
        sum=0;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum*10 + r;
            temp=temp/10;
        }
        n=n+sum;
        temp=n;
        sum=0;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum*10 + r;
            temp=temp/10;
        }
        if(n!=sum)
        {
            count++;
            goto iterator;
        }
        else
        {
            count++;
            printf("%d %lld\n",count,n);
        }
    }
    return 0;
}
