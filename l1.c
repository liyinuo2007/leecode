#include<stdlib.h>
int *twoSum(int *nums,int numssize,int target,int *retsize)
{
    int *ret=(int *)malloc(2*sizeof(int));
    *retsize=2;
    for(int i=0;i<numssize;i++)
    {
        for(int j=i+1;j<numssize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                ret[0]=i;
                ret[1]=j;
                return ret;
            }
        }
    }
    *retsize=0;
    return ret;
}