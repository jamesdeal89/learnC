#include <stdio.h>

int main() {
    int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int i = 0;

    while (i < 10) {
        /* your code goes here */
        if (array[i] < 5){
            /* don't print it but continue loop */
            i++;
            continue;
        } else if (array[i] > 10) {
            /* don't print it and break the loop*/
            break;
        }
        printf("%d\n", array[i]);
        i++;
    }

    return 0;
}