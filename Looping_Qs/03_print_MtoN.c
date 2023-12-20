#include <stdio.h>

int main() {
    int m=-10,n=-20;

    if(m>n)
    {
        //forward
        for(int i=n;i<=m;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
        //reverse
        for(int i=m;i>=n;i--)
        {
            printf("%d ",i);
        }
    }
    else if(n>m){
        //forward
        for(int i=m;i<=n;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
        //reverse
        for(int i=n;i>=m;i--)
        {
            printf("%d ",i);
        }
    }

    return 0;
}