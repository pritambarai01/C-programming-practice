// calculating total percentage of marks
#include <stdio.h>
int main(){
    float m1, m2, m3, m4;
    printf("enter your english marks: ");scanf("%f", &m1);
    printf("enter your hindi marks: ");scanf("%f", &m2);
    printf("enter your chemistry marks: ");scanf("%f", &m3);
    printf("enter your physics marks: ");scanf("%f", &m4);
    printf("your total marks is: %f\n", m1+m2+m3+m4);
    printf("and your total percentage is: %f\n", (m1+m2+m3+m4)/4);

    return 0;
}