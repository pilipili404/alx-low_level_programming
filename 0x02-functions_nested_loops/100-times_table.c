#include <stdio.h>

void print_times_table(int n) {
    if (n < 0 || n > 15) {
        return; // Do not print anything if n is out of range.
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            int result = i * j;

            if (j == 0) {
                printf("%d", result);
            } else {
                printf(", %d", result);
            }

            // Format the result to have a consistent width of 3 characters.
            if (result < 10) {
                printf("  "); // 2 spaces
            } else if (result < 100) {
                printf(" "); // 1 space
            }
        }
        printf("\n");
    }
}

int main() {
    int n = 12; // Replace with your desired value of n
    print_times_table(n);
    return 0;
}

