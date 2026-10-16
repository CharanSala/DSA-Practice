char repeatedCharacter(char* s) { 


    int hashtable[200]={0};
    for(int i=0;i<strlen(s);i++)
    {
        int a=s[i];
        printf("%d\t",a);
        
        if(hashtable[a]==0)
        {
            hashtable[a]=1;
        }
        else{
            return s[i];
        }
    }

    return 'a';
    
}