
#include<stdio.h>
int main()
{
    int T,numoffarmar,i,j,sum,space,numofanimal,ef;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&numoffarmar);
        sum=0;
        for(j=1;j<=numoffarmar;j++)
        {
            scanf("%d %d %d",&space,&numofanimal,&ef);
            sum=sum+(space*ef);
        }
        printf("%d\n",sum);
    }
    return 0;
}
