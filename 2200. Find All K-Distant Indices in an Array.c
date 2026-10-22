/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findKDistantIndices(int* nums, int numsSize, int key, int k, int* returnSize) { 

    int arrj[numsSize];
    int ind=0;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==key)
        {
            arrj[ind++]=i;
        }
    }
    int *ans=malloc(sizeof(int)*1000);
    int index=0;

    for(int i=0;i<numsSize;i++)
    {
        for(int j=0;j<ind;j++)
        {
            int lowlimit=arrj[j]-k;
            int highlimit=arrj[j]+k;
            if(i>=lowlimit && i<=highlimit)
            {
                if(abs(i-arrj[j])<=k)
                {
                    ans[index++]=i;
                    break;
                }
            }
        }
    }
    *returnSize=index;
    
    return ans;
}