#include <stdio.h>

void fibonacci(int n){
    int n1=0,n2=1,sum=0;
    printf("%d ",n1);
    // printf("%d ",n2);
    while(n2<n)
    {
        sum=n1+n2;
        printf("%d ",n2);
        n1=n2;
        n2=sum;
    }
}

int main() {
    int n=10;
    fibonacci(n);
    return 0; 
}