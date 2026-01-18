#include <stdio.h>

int main() {
    int arr[] = {5, 1, 4,2, 8};
    int n = 5, i, j, temp;

    for (i = 0; i < n - 1; i++) {
        printf("Pass %d: ", i + 1);

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        // Print array after each pass
        for (int k = 0; k < n; k++)
            printf("%d ", arr[k]);
        printf("\n");
    }

    return 0;
}
