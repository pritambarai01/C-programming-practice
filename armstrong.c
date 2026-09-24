#include <stdio.h>
int main(){
    int n,a,b,c;
    printf("please enter 3 number: ");
    scanf("%d", &n);
    a= n/100;
    b= (n/10)%10;
    c= n%10;
    int sum = a*a*a + b*b*b + c*c*c;

    if(sum==n)
    {
    printf("armstrong");
    }
    else
    {
        printf("no armstrong");
    }
    return 0;
}