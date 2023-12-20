#include <stdio.h>

int main() {
    int n=10;
    int n1=0;
    int n2=1;
    int nextNum;
    for(int i=3;i<=10;i++)
    {
        nextNum=n1+n2;
        printf("%d ",nextNum);
        n1=n2;
        n2=nextNum;
    }
    return 0;
}