#include <stdio.h>
void duplicate1(int nums[], int size) {
    int count[size-1 ];
    for (int i = 0; i < size-1 ; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < size-1; i++) {
        count[nums[i]]++;
        if (count[nums[i]] == 2) {
            printf("The duplicate element is %d\n", nums[i]);
            return;
        }
    }
    printf("No duplicate element\n");
}

int main() {
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int nums[size];
    printf("Enter elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    duplicate1(nums, size);
    return 0;
}
