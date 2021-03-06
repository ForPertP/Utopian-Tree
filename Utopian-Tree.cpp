int utopianTree1(int n)
{
    int result = 1;
    
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 != 0)
        {
            result += 1;   
        }
        else
        {
            result *= 2;
        }
    }
    
    return result;
}

int utopianTree(int n)
{
    int result = 1;

    if (n % 2 != 0)
    {
        result = pow( 2, ((n+1)/2)+1 ) - 2;
    }
    else
    {
        result = pow( 2, (n/2)+1 ) - 1;        
    }
    
    return result;
}
