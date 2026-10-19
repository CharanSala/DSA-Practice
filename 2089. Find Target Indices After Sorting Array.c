/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

 int * sortNums(int *nums,int numsSize)
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
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {

    nums=sortNums(nums,numsSize);
    
    int *ans=malloc(sizeof(int)*100);
    int ind=0;

    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==target)
        {
            ans[ind++]=i;
        }
    }

    
    *returnSize=ind;
    return ans;
}