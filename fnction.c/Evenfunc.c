#include<stdio.h>
void odd(int);
void even(int);

int main() {
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    if(n % 2== 0){
        even(n);
    }
    else{
        odd(n);
    }
}

void odd(n){
    printf("your number is odd");
}
void even(n){
    printf("Your number is even");
}