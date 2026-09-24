//Simple Interest
#include <stdio.h>
int main(){
    int p,r,t; printf("please enter your principal, ROI, Time: : "); scanf("%d %d %d", &p, &r, &t); printf("your Total amount with Interest will be: %d", (p*r*t/100)+p); 
    return 0;
}