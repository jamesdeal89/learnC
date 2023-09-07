#include <stdio.h>

/* function declaration */
void print_big(int number);

int main() {
  int array[] = { 1, 11, 2, 22, 3, 33 };
  int i;
  for (i = 0; i < 6; i++) {
    print_big(array[i]);
  }
  return 0;
}

/* write your function here */
void print_big(int number){
    if (number > 10) {
        char strNum[10];
        sprintf(strNum, "%d", number);
        printf("%s is too big\n",strNum);
    }
}