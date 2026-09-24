#include <stdio.h>
int main()
{
    int n, a=0;
    printf("please enter a number: ");
    scanf("%d", &n);

    while(a<=n){
    printf("%d\n", a);
    a++;
    }

    return 0;
}