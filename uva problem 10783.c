#include<stdio.h>
int main()
{
    int i,T;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
            int a,b;
       scanf("%d%d",&a,&b) ;
     int  sum=0;
           for(int j=a;j<=b;j++)
            {
                if(j%2!=0)
            sum=sum+j;
           }

       printf("Case %d: %d\n",i,sum);

    }
    return 0;
}
