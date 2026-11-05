#include<stdio.h>
#include<string.h>
int lengthOfLongestSubstring(char* s)
{
    int a=strlen(s);
    int count=0;
    for(int i=0;i<a;i++)
    {
        int seen[256]={0};
        for(int j=i;j<a;j++)
        {
            if(seen[(unsigned char)s[j]]==1)
                break;
            seen[(unsigned char)s[j]]=1;
            if(j-i+1>count)
                count=j-i+1;
        }
    }
    return count;
}
int main(int argc,char*argv[])
{
    if(argc!=2)
    return 0;
    printf("%d\n",lengthOfLongestSubstring(argv[1]));
    return 0;
}