#include<stdio.h>

int nthFibonacci(int n)
{
    int n1=0;
    int n2=1;
    int count=2,sum=0;
    if(n==1)
        return 0;
    
    else if(n==2)
        return 1;
    
    else if(n<0)
        return -1;
    
    else{
         while(count<n)
        {
            sum=n1+n2;
            n1=n2;
            n2=sum;
            count++;
        }
    }
    return sum;
}

int main()
{
    int n=5;
    printf("%d",nthFibonacci(n));
    
}