#include<stdio.h>
int main()
{
    long long int a,b,t;
    scanf("%lld",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%lld%lld",&a,&b);
        if(a<b)
            printf("<\n");
        else if(a>b)
            printf(">\n");
        else
            printf("=\n");
    }
    return 0;
}
