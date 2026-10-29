/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int * sort(int *nums, int numsSize)
{
    for(int i=0;i<numsSize;i++)
    {
        int max=i;
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[j]>nums[max])
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
int* maxKDistinct(int* nums, int numsSize, int k, int* returnSize) { 

    nums=sort(nums,numsSize);

    int *ans=malloc(sizeof(int)*100);
    int index=0;

    int count=0;

    for(int i=0;i<numsSize;i++)
    {
        int found=0;
    
        if(count==k)
            break;
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]==nums[j])
            {
                found=1;
                break;
            }
                
        }
        if(found==0)
        {
            ans[index++]=nums[i];
            count++;
        }

    }
    *returnSize=index;

    return ans;
}