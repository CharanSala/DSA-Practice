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
int findNonMinOrMax(int* nums, int numsSize) {

    if(numsSize<=2)
        return -1;

    nums=sort(nums,numsSize);
    return nums[1];

    

    
}