#include <stdio.h>
int main()
{
    int n;
    printf("please enter a n; ");
    scanf("%d", &n);
    for(int i=1; i<=10; i++){
        printf("table: %d\n", i*n);
    }
    return 0;
}