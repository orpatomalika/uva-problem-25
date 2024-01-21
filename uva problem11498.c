#include<stdio.h>
int main()
{
    int t,a,b,x,y;
    while(scanf("%d",&t)==1 && t)
    {
        if(t==0)
            break;
        scanf("%d%d",&x,&y);
        while(t--)
        {
            scanf("%d%d",&a,&b);
            if(x==a || y==b)
                printf("divisa\n");
            else if(a>x && b>y)
                printf("NE\n");
            else if(a<x && b>y)
                printf("NO\n");
            else if(a<x && b<y)
                printf("SO\n");
            else
                printf("SE\n");

        }
    }
    getch();
}
