#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* longestCommonPrefix(char** strs, int strsSize) 
{
    if(strsSize==0)
    {
        char*res=(char*)malloc(1);
        if(res)
        {
            res[0]='\0';
        }
        return res;
    }
    int i=0;
    while(strs[0][i]!='\0')
    {
        char ch=strs[0][i];
        for(int j=1;j<strsSize;++j)
        {
            if(strs[j][i]!=ch)
            {
                  char *res=(char*)malloc(i+1);
                if(!res)
                return NULL;
                strncpy(res,strs[0],i);
                res[i]='\0';
                return res;
            }
        }
        ++i;
    }
    char*res=(char*)malloc(i+1);
    if(!res)
    return NULL;
    strncpy(res,strs[0],i);
    res[i]='\0';
    return res;
}
