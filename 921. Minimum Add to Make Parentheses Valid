int minAddToMakeValid(char* s) {
    

    char stack[1000];
    int ind=0;

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='(')
        {
            stack[ind++]=s[i];
        }
        if(s[i]==')')
        {
            if(ind>0 && stack[ind-1]=='(')
            {
                ind--;
            }
            else{
                stack[ind++]=s[i];
            }
        }
    }
    return ind;

}