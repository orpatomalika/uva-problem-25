#include<stdio.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
{

int n,num[1000];
scanf("%d",&n);
for(int j=0;j<n;j++){
    scanf("%d",&num[j]);
}
int max=num[0];
for(int j=1;j<n;j++){
    if(max<num[j]){
        max=num[j];
    }
}

printf("Case %d: %d\n",i,max);
}
return 0;
}










