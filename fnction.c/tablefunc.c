#include<stdio.h>
int table(int n);

int main(){
    int n;
    printf("enter a digit: ");
    scanf("%d", &n);
    table(n);
}

int table(int n){
    int i;
    for(i=1;i<11;i++){
        printf("%d * %d = %d\n", n,i, n*i);
    }
}