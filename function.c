//#include <stdio.h>

//void printhello(); //declaration/protoype

//int main()
//{
    //printhello(); //function call
    //return 0;
//}

//void printhello(){ //function definition
   // printf("hello world");
   // printf("good bye");
//}

#include <stdio.h>

void printhello();
void goodbye();

int main()
{
    printhello();
    goodbye();
    return 0;
}

void printhello(){
    printf("hello\n");
}
void goodbye(){
    printf("good bye");
}