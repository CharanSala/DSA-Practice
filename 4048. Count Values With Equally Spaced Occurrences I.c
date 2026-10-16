int check(int num,int *nums,int numsSize)
{
    int hashtable[100]={0};
    int dif;
    int prev=-1;
    for(int i=0;i<numsSize;i++)
    {
        if(nums[i]==num)
        {
            if(prev==-1)
            {
                prev=i;
            }
            else{ 

                dif=abs(i-prev); 
                prev=i;
              

                printf("\nbefore %d", hashtable[dif]);

            hashtable[dif] = hashtable[dif] + 1;

                printf("\nafter %d", hashtable[dif]);
            }
              
            

        }
    }
    printf("%d",hashtable[dif]);
    if(hashtable[dif]==2)
        return 1;
    return 0;
}
int countSpecialIntegers(int* nums, int numsSize) {


    int hashtable[1000]={0};

    int *thriceAppeardNumbers=malloc(sizeof(int)*100);
    int ind=0;

    for(int i=0;i<numsSize;i++)
    {
        hashtable[nums[i]]+=1;

    } 

    for(int i=0;i<numsSize;i++)
    {
        if(hashtable[nums[i]]==3)
        {
            thriceAppeardNumbers[ind++]=nums[i];
            hashtable[nums[i]]=0;
        }
    }
    int count=0;
    for(int i=0;i<ind;i++)
    {
        int status=check(thriceAppeardNumbers[i],nums,numsSize);
        if(status==1)
            count++;
    }

    return count;
    
}