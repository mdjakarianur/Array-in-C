#include <stdio.h>

int main() {
    int i, j, r, c, divisor;
        printf("Enter the number of rows: ");
        scanf("%d", &r);
        printf("Enter the number of columns: ");
        scanf("%d", &c);

    int arr[r][c];
    int remainder[r][c];

    printf("Enter %d by %d Array Element: \n", r,c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Enter the divisor: ");
    scanf("%d", &divisor);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            remainder[i][j] = arr[i][j] % divisor;
        }
    }
    printf("Remainders of the elements when divided by %d:\n", divisor);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", remainder[i][j]);
        }
        printf("\n");
    }
    return 0;
}
