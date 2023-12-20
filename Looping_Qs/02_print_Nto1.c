#include<stdio.h>

int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    if(n>0)
    {
        for(int i=n;i>=1;i--)
        {
            printf("%d ",i);
        }
    }
    if(n<0)
    {
        for(int i=n;i<=1;i++)
        {
            printf("%d ",i);
        }
    }
}