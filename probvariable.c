#include <stdio.h>
int main(){
    int num1,num2,num3;
    printf("enter three number: ");
    scanf("%d %d %d", &num1,&num2, &num3);
    printf("average= %d ", (num1+num2+num3)/3);
    return 0;
}