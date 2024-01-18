#include<stdio.h>
int main(){
int i,T,a,b,c;
scanf("%d",&T);
for(i=1;i<=T;i++)
{
    scanf("%d%d%d",&a,&b,&c);

    if((a<b&&a>c)||(b<a&&c>a))
    {
    printf("Case %d: %d\n",i,a);
    }
        else if((b<a&&b>c)||(a<b&&c>b))
        {
    printf("Case %d: %d\n",i,b);
        }
    else
    {
    printf("Case %d: %d\n",i,c);
    }

}

return 0;

}
