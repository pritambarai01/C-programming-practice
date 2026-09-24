#include<stdio.h>

int isPrime(int);
int notPrime(int);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i=2;
    for(i=2; i<n; i++){
        if(n % i == 0){
        notPrime(n);
            return 0;
        }
        }
    isPrime(n);
    return 0;
    }

int isPrime(int n){
    printf("prime\n");
}
int notPrime(int n){
    printf("not Prime\n");
}