#include <stdio.h>
int main(){
    int marks;
    printf("pls enter your marks: ");
    scanf("%d", &marks);
    marks>30?printf("pass"):printf("fail");
    return 0;
}