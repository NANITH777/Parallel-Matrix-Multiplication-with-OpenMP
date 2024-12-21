#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>


int main(int argc, char *argv[])
{
    if (argc != 4) {
        printf("Error: Incorrect number of arguments.\n");  
        printf("Usage: %s <matrix_a.txt> <matrix_b.txt> <sonuclar.txt>\n", argv[0]);
        printf("Please provide three files:\n");
        return 1;
    }

    // Open input files
    FILE *fa = fopen(argv[1], "r");
    FILE *fb = fopen(argv[2], "r");
    if (fa == NULL || fb == NULL) {
        printf("Error opening input files.\n");
        return 1;
    }

    // Read matrix dimensions
    int a_rows, a_cols, b_rows, b_cols;
    fscanf(fa, "%d %d", &a_rows, &a_cols);
    fscanf(fb, "%d %d", &b_rows, &b_cols);


    // Validate dimensions for matrix multiplication
    if (a_cols != b_rows) {
        printf("Error: Incompatible matrix dimensions for multiplication.\n");
        fclose(fa);
        fclose(fb);
        return 1;
    }

    // Allocate memory for matrices
    int *a = (int *)malloc(a_rows * a_cols * sizeof(int));
    int *b = (int *)malloc(b_rows * b_cols * sizeof(int));
    int *c = (int *)calloc(a_rows * b_cols, sizeof(int));

     // Read matrix elements
    for (int i = 0; i < a_rows * a_cols; i++) {
        fscanf(fa, "%d", &a[i]);
    }
    for (int i = 0; i < b_rows * b_cols; i++) {
        fscanf(fb, "%d", &b[i]);
    }

    fclose(fa);
    fclose(fb);

    // Display matrices A and B
    printf("Matrice A (%d x %d):\n", a_rows, a_cols);
    for (int i = 0; i < a_rows; i++) {
        for (int j = 0; j < a_cols; j++) {
            printf("%d ", a[i * a_cols + j]);
        }
        printf("\n");
    }

     printf("\n");

    printf("Matrice B (%d x %d):\n", b_rows, b_cols);
    for (int i = 0; i < b_rows; i++) {
        for (int j = 0; j < b_cols; j++) {
            printf("%d ", b[i * b_cols + j]);
        }
        printf("\n");
    }
    return 0;
}