#include <stdio.h>

long fact(int n)
{
    long fact=1;
    if(n<0)
    {
        return -1;
    }
    else{
        if(n<=1)
        {
            return 1;
        }
        while(n>1)
        {
            fact*=n;
            n--;
        }
    }
    return fact;
}

int main() {
    int n=5;
    printf("%d",fact(n));
    return 0;
}