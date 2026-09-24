#include <stdio.h>
int main()
{
    int n;
    int c=37;
    int i=0;
    for(i=0;i<=5;i++)
    {
        printf("Guess a number: ");
        scanf("%d", &n);
        if(i>4 && n!=c)
        {
            printf("Game Over");
            break;
        }
        if(n>c)
        {
            printf("Too High\n");
        }
        else if(n<c)
        {
            printf("Too low\n");
        }
        else
        {
            printf("CORRECT\n");
            break;
        }

    }
    return 0;
}