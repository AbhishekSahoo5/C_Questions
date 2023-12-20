#include <stdio.h>

int main() {
    int n=5;
    int product=1;
    for(int i=1;i<=n;i++)
    {
        product*=i;
    }
   printf("%d",product);
    return 0;
}