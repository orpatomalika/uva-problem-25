
#include<stdio.h>
#include<string.h>
int main()
{
    int i,word,count=0;
    char t[100000];
    while(gets(t))
    {
        for(i=0; t[i]!='\0'; i++)
        {
            if((t[i]>='a' && t[i]<='z') || (t[i]>='A' && t[i]<='Z'))
            {
                word=1;
            }
            else
            {
                if(word)
                {
                    count++;
                    word=0;
                }
            }
        }
        printf("%d\n",count);
        count=0;
    }

    return 0;
}
