#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i,j;
    int *result=NULL;
    for(i=0;i<numsSize-1;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                result = (int*)malloc(sizeof(int)*2);
                result[0]=i;
                result[1]=j;
                return result;
            }
        }
    }
    return result;
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i,j;
    int *result=NULL;
    *returnSize=2;
    for(i=0;i<numsSize-1;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                 result=(int*)malloc(sizeof(int)*2);
                 result[0]=i;
                 result[1]=j;
                 return result;
            }
        }
    }
    return result;
}
int main(){
    int numsSize=4;
    int nums[4]={2,4,7,15};
    int target = 9;
    int *result=twoSum(nums,numsSize,target,NULL);
    for(int i =0;i<2;i++){
        printf("%d",result[i]);
    }
    return 0;
}
