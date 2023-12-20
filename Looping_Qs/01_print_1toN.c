#include<stdio.h>

int main(){
    int n;
    printf("Enter n");
    scanf("%d",&n);
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            printf("%d",i);
        }
    }
    else{
        for(int i=1;i>=n;i--)
        {
            printf("%d ",i);
        }
    }
}