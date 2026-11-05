#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int reverse(int x)
{
    if(x==0||x>INT_MAX||x<INT_MIN)
    return 0;
    int i=0;
    int arr[10000];
    while(x!=0)
    {
        arr[i]=x%10;
        x/=10;
        i++;
    }
    int j=i;
    long long r=0;
    for(i=0;i<j;i++)
    {
        r=r*10+arr[i];
    }
    if(r>INT_MAX||r<INT_MIN)
    return 0;
    return r;
}
int main(int argc,char*argv[])
{
    if(argc!=2)
    {
        printf("0\n");
        return 0;
    }
    printf("%d\n",reverse(atoi(argv[1])));
}