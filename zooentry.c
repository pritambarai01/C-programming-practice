#include <stdio.h>
int main(){
    int height,age;
    printf("please enter your age: ");
    scanf("%d", &age);
    if(age>=18)
    {
        printf("please enter your height in cm: ");
        scanf("%d", &height);
        if(height>160)
        {
         printf("you are eligible");
        }
        else
        {
            printf("you are not eligible");
        }
    }
    else if(age<18)
    {
        printf("YOU ARE NOT ELIGIBLE");

    }
    else
    {
        printf("thank you");
    }
    return 0;
}