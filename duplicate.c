#include <stdio.h>

void duplicate(int nums[], int size) {
    int count[size];
    for (int i = 0; i < size ; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < size; i++) {
        count[nums[i]]++;
        if (count[nums[i]] == 2) {
            printf("The duplicate element is %d\n", nums[i]);
            return;
        }
    }
    printf("No duplicate element\n");
}

int main() {
    int nums[] = {1, 2, 3,3, 4, 4};
    int size = sizeof(nums) / sizeof(nums[0]);
    duplicate(nums, size);
    return 0;
}
