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
    
    return 0;
}