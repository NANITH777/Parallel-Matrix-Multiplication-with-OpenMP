#include <stdio.h>
#include <stdlib.h>

int main() {
    int a_rows = 1000, a_cols = 1000;
    int b_rows = 1000, b_cols = 1000;

    FILE *fa = fopen("matrix_c.txt", "w");
    FILE *fb = fopen("matrix_d.txt", "w");

    if (fa == NULL || fb == NULL) {
        printf("Error.\n");
        return 1;
    }

    fprintf(fa, "%d %d\n", a_rows, a_cols);
    fprintf(fb, "%d %d\n", b_rows, b_cols);

    for (int i = 0; i < a_rows; i++) {
        for (int j = 0; j < a_cols; j++) {
            fprintf(fa, "%d ", rand() % 10);
        }
        fprintf(fa, "\n");
    }

    for (int i = 0; i < b_rows; i++) {
        for (int j = 0; j < b_cols; j++) {
            fprintf(fb, "%d ", rand() % 10); 
        }
        fprintf(fb, "\n");
    }

    fclose(fa);
    fclose(fb);

    return 0;
}
