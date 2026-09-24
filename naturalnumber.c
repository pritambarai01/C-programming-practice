#include <stdio.h>
int main()
{
    int n;
    printf("enter a number: ");
    scanf("%d", &n);
    if (n >= 1)
    {
        printf("natural number");
    }
    else
    {
        printf("not natural number");
    }
    return 0;
}