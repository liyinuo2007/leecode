#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* longestPalindrome(char* s) 
{
    int n=strlen(s);
    int start=0;
    int maxlen=0;
    for(int i=0;i<n;i++)
    {
        int l=i,r=i;
        while(l>=0&&r<n&&s[l]==s[r])
        if(r-l+1>maxlen)
        {
            maxlen=r-l+1;
            start=l;
        }
        l--;
        r++;
    }
    char *res=(char*)malloc(maxlen+1);
    strncpy(res,start+s,maxlen);
    res[maxlen]='\0';
    return res;
}
int main(int argc,char*argv[])
{
    if(argc!=2)
    {
        return 0;
    }
    printf("%s\n",longestPalindrome(argv[1]));
    return 0;
}