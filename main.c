#include <stdio.h>
 
int main(void){
    int a;
    for (a = a; a <= 100; a++){
        if (a % 15 == 0){
            printf("FizzBuzz\n");
        }
        else if (a % 3 == 0){
            printf("Fizz\n");
        }
        else if (a % 5 == 0){
            printf("Buzz\n");
        }
        else{
            printf("%d\n", a);
        }
    }
    return 0;
}