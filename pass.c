#include <stdio.h>
int main()
{
    int n;
    int i=0;
    for(i=0;i<3;i++)
    {
        printf("Enter your Password: ");
        scanf("%d", &n);
        if(n== 1234)
        {
            printf("access granted");
            break;
        }
        if(n!=1234 && i<2)
        {
            printf("try again\n");
        }
    }
    if(i>2)
    {
        printf("access denied");
    }
    return 0;
}