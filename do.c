#include <stdio.h>
int main()
{
    int n,i=0,sum = 0;
    printf("enter number: ");
    scanf("%d", &n);
    for(i=0;i<=n;i++){
        sum=(sum+i);
    }
    printf("sum is %d\n", sum);

    for(int k=n; k>=1; k--){
        printf("reverse %d\n", k);
    }
    return 0;
}