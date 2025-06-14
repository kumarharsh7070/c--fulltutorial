#include <stdio.h>

// int main() {
//   printf("%d\n", 10 == 10); // Returns 1 (true), because 10 is equal to 10
//   printf("%d\n", 10 == 15); // Returns 0 (false), because 10 is not equal to 15
//   printf("%d", 5 == 55); // Returns 0 (false) because 5 is not equal to 55
  
//   return 0;
// }


int main() {
  int myAge = 25;
  int votingAge = 18;

  if (myAge >= votingAge) {
    printf("Old enough to vote!");
  } else {
    printf("Not old enough to vote.");
  }
  
  return 0;
}