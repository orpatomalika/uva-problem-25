
#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,tensColumn ,n1,result;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        result =abs((((((n*567)/9)+7492)*235)/47)-498);

        n1=result/10;
        tensColumn=n1%10;
        printf("%d\n",tensColumn);
    }
    return 0;
}
