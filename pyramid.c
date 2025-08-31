#include <stdio.h>

int main(void) {
    int rows = 10;
    int i = 1;
    // User name at the top
    printf("Ansu Jabateh\n\n");
    do {
        for (int j = 0; j < rows - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("*");
       }
       printf("\n");
       i++;
    } while (i <= rows);
    return 0;
}
