#include<stdio.h>
#include<math.h>
void numone(int, int);
void numtwo(int, int);

int main(){
    int n,m;
    printf("enter both your number: ");
    scanf("%d %d", &n, &m);
    if(n>m){
        numone(n,m);
    }
    else{
        numtwo(n,m);
    }
    return 0;
}

void numone(int a, int b){
    printf("%d is greater than %d", a, b);
}
void numtwo(int a, int b){
    printf("%d is greater than %d", b , a);
}