#include<stdio.h>

int main()
{

    int n;
    double p;
    while(scanf("%d %lf",&n,&p)==2)
    {

        printf("%.0lf\n",pow(p,(1.0/n)));
    }
    return 0;
}
