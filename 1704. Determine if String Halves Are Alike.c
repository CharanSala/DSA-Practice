int findCount(char *s,int start,int stop)
{
    int count=0;
    for(int i=start;i<stop;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            count++;
        } 
        printf("\n%d",count);
    }
    return count;
}
bool halvesAreAlike(char* s) { 


    int len=strlen(s);
    int half=len/2;

    int count1= findCount(s,0,half); 
    int count2=findCount(s,half,len); 

    if(count1==count2)
        return true;
    return false;
    
}