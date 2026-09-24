//Calculating age
#include <stdio.h>
int main(){
    int dob, current_year;
    printf("Please enter your DOB; ");scanf("%d", &dob);
    printf("Please enter current year; ");scanf("%d", &current_year);
    printf("Your age is: %d", current_year - dob);
    return 0;
}