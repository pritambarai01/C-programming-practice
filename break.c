#include <stdio.h>
int main()
{
    int n, i=0;
    for(i=0;i<=10;i++){
        printf("enter n: ");
        scanf("%d", &n);
        if(n %2 !=0)
        break;
    }
    printf("thank you");
    
    return 0;
}