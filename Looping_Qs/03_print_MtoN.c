#include <stdio.h>

int main() {
    int m=-10,n=20;
    for(int i=m;i<=n;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    for(int i=n;i>=m;i--)
    {
        printf("%d ",i);
    }

    return 0;
}