#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
bool isPalindrome(int x)
{
    if(x<0)
    return false;
    int count=0;
    int i=0;
    int arr[100];
    while(x>0)
    {
        arr[i]=x%10;
        i++;
        count++;
        x=x/10;
    }
    for(i=0;i<count;i++,count--)
    {
        if(arr[i]!=arr[count-1])
        return false;
        else
        continue;
    }
    return true;
}
int main(int argc,char*argv[])
{
    if(argc!=2)
    {
        printf("false\n");
        return 0;
    }
    printf("%s\n",isPalindrome(atoi(argv[1])==true)?"true":"false");
    return 0;
}
