#include<stdio.h>
#include<math.h>
int main()
{
   long long int a,b,n;
   while(scanf("%lld",&n)==1) {
    if(n==0){
        break;
    }
    a=sqrt(n);
    b=a*a;
    if(b==n){
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
   }
   return 0;
}
