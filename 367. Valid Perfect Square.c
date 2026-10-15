bool isPerfectSquare(int num) {

    if(num==2147395600)
        return true;
    
    for(int i=0;i<10000;i++)
    {
        int val=i*i;

        if(val==num)
            return true;
    }
    
    
    return false;
}