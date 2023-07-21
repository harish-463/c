#include <stdio.h>

int subarray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == 0) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (subarrayExists(arr, n)) {
        printf("Subarray with zero-sum exists\n");
    } else {
        printf("Subarray with zero-sum does not exist\n");
    }

    return 0;
}
