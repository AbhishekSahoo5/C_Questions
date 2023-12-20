#include<stdio.h>

long xpn(int x,int n)
{
    int result=1;
    if(n>0)
    {
        while(n>0)
        {
            result*=x;
            n--;
        }
    }
    else{
        while(n<0)
        {
            result*=x;
            n++;
        }
    }
    return result;
}

int main()
{
    int x=2;
    int n=-2;
    if(n>0)
    {
        printf("%lf",xpn(x,n));
    }
    else if(n<0)
    {
        printf("%lf",1/xpn(x,n));
    }
    

}