#include <stdio.h>
int main()
{
    int n, j=0, sum=0;
    printf("enter n: ");
    scanf("%d", &n);
    for(j=0;j<=n;j++){
        sum=sum+j;
    }
    printf("the sum %d", sum);
    return 0;
}