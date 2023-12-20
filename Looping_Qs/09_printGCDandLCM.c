#include<stdio.h>

int gcd(int a, int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int lcf(int a,int b)
{
    return a*b/gcd(a,b);
}

int main()
{
    int a=14,b=21;
    int gcd_=gcd(a,b);
    printf("%d \n",gcd_);

    int lcf_=lcf(a,b);
    printf("%d",lcf_);


}