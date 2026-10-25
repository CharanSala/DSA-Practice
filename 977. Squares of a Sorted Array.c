/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 int * sort(int *nums,int numsSize)
 {
    for(int i=0;i<numsSize;i++)
    {
        int max=i;
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[j]<nums[max])
            {
                max=j;
            }
        }
        int temp=nums[i];
        nums[i]=nums[max];
        nums[max]=temp;
    }
    return nums;
 }
int* sortedSquares(int* nums, int numsSize, int* returnSize) {

    int *ans=malloc(sizeof(int)*numsSize);
    for(int i=0;i<numsSize;i++)
    {
        ans[i]=nums[i]*nums[i];
    }
    *returnSize=numsSize;
    ans=sort(ans,numsSize);
    return ans;
}