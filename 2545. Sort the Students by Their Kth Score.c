/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** sortTheStudents(int** score, int scoreSize, int* scoreColSize, int k, int* returnSize, int** returnColumnSizes) { 

    *returnSize= scoreSize;

    *returnColumnSizes = malloc(sizeof(int) * scoreSize);
    
    for (int i = 0; i < scoreSize; i++)
    {
        (*returnColumnSizes)[i] = scoreColSize[i];
    }

    for(int i=0;i<scoreSize;i++)
    {
        int *maxMarksStudent=score[i];
        int ind=i;

        for(int j=i+1;j<scoreSize;j++)
        {
            int *studentsMarks1=score[j];
            if(studentsMarks1[k]>maxMarksStudent[k])
            {
                maxMarksStudent=studentsMarks1; 
                ind=j;
            }
        } 
        int *temp=score[i];
        score[i]=score[ind];
        score[ind]=temp;
        
    }

    return score;
    
}