//Perimeter of a rectangle

#include <stdio.h>
int main(){
    int length, width;
    printf("please enter The Length and Width using, : ");
    scanf("%d,%d", &length, &width);
    printf("The perimeter of the object is: %d", 2*(length+width));
    return 0;
}