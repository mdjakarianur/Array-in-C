#include <stdio.h>
int findremainder(int arr[][3], int rows, int cols, int n) {
    int mul = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mul = (mul * (arr[i][j] % n)) % n;
        }
    }
    return mul % n;
}
int main() {
    int arr[][3] = {
        { 100, 10, 5 },
        { 25, 35, 14 },
        { 7, 11, 6 }
    };
    int rows = sizeof(arr) / sizeof(arr[0]);
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]);
    int n = 11;
        printf("%d\n", findremainder(arr, rows, cols, n));

    return 0;
}
