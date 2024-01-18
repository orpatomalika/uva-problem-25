#include<stdio.h>
int main()
{
    long long int hasmat,oppsition;
    while(scanf("%lld%lld",&hasmat,&oppsition) !=EOF)
    {
        if(hasmat>oppsition)
            printf("%lld\n",hasmat-oppsition);
        else
            printf("%lld\n",oppsition-hasmat);
    }
    return 0;
}
