#include <stdio.h>
int main(){
    char ch, ph, input;
    printf("which product do you want? we have two products: WHEY PROTEIN, CREATINE; Select by 1 or 2: ");
    scanf("%c", &input);

    if(input== '1')
    {
     printf("you selected WHEY PROTEIN and your total bill will be: %d\n", 1499+(1499*18/100));
    }
    else if(input== '2')
    {
     printf("you selected CREATINE and your total bill will be: %d\n", 999+(1499*18/100));
    }


    return 0;
}