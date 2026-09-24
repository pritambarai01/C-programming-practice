#include <stdio.h>

void indian();
void french();

int main()
{
    char user;
    printf("enter f for france and i for india: ");
    scanf("%s", &user);
    if(user== 'i'){
    indian();
    }
    else
    {
    french();
    }
    return 0;
}

void indian() {
    printf("Namaste\n");
}
void french() {
    printf("Bonjour\n");
}