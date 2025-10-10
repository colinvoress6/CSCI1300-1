#include <stdio.h>

int main() {
    // A 3D array: 2 blocks, 2 rows, 3 columns
    int arr[2][2][3] = {
        { {1, 2, 3}, {4, 5, 6} },
        { {7, 8, 9}, {10, 11, 12} }
    };

    // Show it block by block
    printf("As a 3D array (2 blocks of 2x3):\n");
    for (int block = 0; block < 2; block++) {
        printf("Block %d:\n", block);
        for (int row = 0; row < 2; row++) {
            for (int col = 0; col < 3; col++) {
                printf("%2d ", arr[block][row][col]);
            }
            printf("\n");
        }
        printf("\n");
    }

    // In memory
    printf("In memory (block by block, row by row):\n");
    for (int block = 0; block < 2; block++) {
        for (int row = 0; row < 2; row++) {
            for (int col = 0; col < 3; col++) {
                printf("%2d ", arr[block][row][col]);
            }
        }
    }
    printf("\n");

    return 0;
}
