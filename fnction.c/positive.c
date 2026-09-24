#include<stdio.h>

void positive(int);
void negative(int);
void zero(int);

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n>0){
        positive(n);
    }
    else if(n<0){
        negative(n);
    }
    else
    {
        zero(n);
    }
}

void positive(int n){
    printf("%d is positive", n);
}
void negative(int n){
    printf("%d is negative", n);
}
void zero(int n){
    printf("%d is zero", n);
}