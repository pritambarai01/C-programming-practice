#include <stdio.h>

float inputMarks(float a, float b, float c);
float calculatepercentage(float a, float b, float c);
float percentage(Total);

int main(){
    float a,b,c;
    printf("Enter your 1st subject marks");
    scanf("%f", &a);
    printf("Enter your 2nd subject marks");
    scanf("%f", &b);
    printf("Enter your 3rd subject marks");
    scanf("%f", &c);
    float total= calculateTotal(a,b,c);
    if(a>0 && a<=100 &&
        b>0 && b<=100 &&
        c>0 && c<=100){
        printf("your 1st subject marks: %f\n", "your 2nd subject marks %f\n", "your third subject marks %f\n", a,b,c);
        calculateTotal(a,b,c);
        printf("your total percentage is: %f", percentage());
        if(total>=90){
            printf('A');
        }
        else if(total<=90 && total>=75){
            printf('B');
        }
        else if(total>=60 && total<=75){
            printf('C');
        }
        else if(total>=75 && percentage<=40){
            printf('D');
        }
        else
        {
            printf('F');
        }
    }
}

float calculatepercentage(float a, float b, float c)
    {
      return a + b +c;
    }
    float percentage(percentage){
        return percentage/3;
    }
