#include <stdio.h>

// int main() {
//     int age;
//     printf("enter age - ");
//     scanf("%d", &age);
//     printf("age is : %d", age);
// }
// basic program
int main(){
    int num1;
    int num2;
    int sum;
    printf("Enter first numer - ");
    scanf("%d", &num1);
    printf("Enter second number - ");
    scanf("%d", &num2);
    sum= num1 + num2;
    printf("sum of num1 and num2 - %d", sum);
    return 0;
}