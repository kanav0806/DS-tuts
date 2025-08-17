#include <stdio.h>

int main() {
    int arr[] = {2, 3, 4, 2, 3, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n;) {
            if (arr[i] == arr[j]) {
                arr[j] = arr[n - 1];
                n--;
            } else {
                j++;
            }
        }
    }

    printf("Unique elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}