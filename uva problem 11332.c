
#include<stdio.h>
int main()
{
    long long int n;
    int r,sum;
    while(scanf("%lld",&n)==1 && n)
    {
print:
        sum=0;
        while(n!=0)
        {
            r=n%10;
            sum=sum+r;
            n=n/10;
        }
        if(sum==0||sum==1||sum==2||sum==3||sum==4||sum==5||sum==6||sum==7||sum==8||sum==9)
        {
            printf("%d\n",sum);
        }
        else
        {
            n=sum;
            goto print;
        }
    }
    return 0;
}
