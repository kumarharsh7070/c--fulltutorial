#include <stdio.h>
#include<math.h>

// int main(){
//     int a =22;
//     int b=a;
//     int c= b*6;
//     int d=1, e;

//     int oldage = 22;
//     int years =2;
//     int  newage = oldage+years;

//     int x,y,z;
//     x=y=z=5;
// }
// -----------------------operators-------------------------------------------------------
// int main(){
//     int a =1, b= 2;
//     int sum =a +b;
//     int multiply = a*b;
//     int divide = a/b;
//     int power = pow(a,b);
//     printf("%d", power);
//     printf("%d", 8%3);
//     return 0;
// }
// int main(){
//          printf("%d", 8%3);
//          return 0;

// }
// int main(){
//     int a=1.9999;
//     printf("%d",a);
//     return 0;
// }

// precedence operators---------------------------------------------
// *,/,%----------same precedence
// +,------------------same precedence
// = assignment--------------
// Associativity(for same precedence)
// left to right x=4*3/6*2=4

// int main(){
//     int a = 4 * 3 / 6 * 2;
//     printf("%d \n", a);
//     return 0;
// }
// int main(){
//     int a = 5 * 2 - 2 * 3;
//     printf("%d \n", a);
//     return 0;
// }
// int main(){
//     int a = 5 * 2 / 2 * 3;
//      printf("%d \n", a);
//      return 0;
// }
// int main(){
//     int a = 5 * (2 / 2 )* 3;
//      printf("%d \n", a);
//      return 0;
// }
// int main(){
//     int a = 5 + 2/2*3;
//      printf("%d \n", a);
//      return 0;
// }

// control instruction-------------------------------------
// used to determine flow of program------------------------------
// 1-sequence control
// 2-decision control 
// 3-loop control
// 4-case control
// Arithmetic Operators
// int main() {
//   int x = 5;
//   int y = 3;
//   printf("%d", x + y);
//   return 0;
// }
// int main() {
//   int x = 5;
//   int y = 2;
//   printf("%d", x % y);
//   return 0;
// }

// Assignment Operators

// int main(){
//     int  a=6;
//     printf("%d",a);
// }
// int main(){
//     int  a=6;
//     a *=3;
//     printf("%d",a);
// }
// comparison oerators----------------------
// int main() {
//   int x = 5;
//   int y = 3;
  
//   // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
//   printf("%d", x > 3 && x < 10);
//   return 0;
// }

int main(){
    int ismonday=1;
    int isunday=1;
    printf("%d", ismonday==ismonday);
    return 0;
}