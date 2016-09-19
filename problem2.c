#include <stdio.h>
#include <stdlib.h>

int main(){
  int sum;
  int num1 = 1;
  int num2 = 1;
  int num3 = 2;
  while (num3 < 4000000){
    num3 = num1 + num2;
    if ((num3 % 2) == 0){
      sum+= num3;
    }
    num1 = num2;
    num2 = num3;
  }
  printf("%d\n", sum);
  return 0;
}
