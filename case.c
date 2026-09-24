#include <stdio.h>
int main()
{
    int a,choice;
    printf("please enter your favpurite colour betwern RGB");
    scanf("%d", &a);
    switch(a)
    {
        case 1:
        printf("you selected Red");
        break;
        case 2:
        printf("Ypou selected Green");
        break;
        case 3:
        printf("you selected Blue");
        break;
        default:
        printf("nothing");
    }
    return 0;
}