#include <stdio.h>

// Function
int binarySearch(int arr[], int low, int high, int target) {
    if (high >= low) {
        int mid = low + (high - low) / 2;

        // If element is present at the middle itself
        if (arr[mid] == target)
            return mid;

        // If element is smaller than mid, then it is present in the left subarray
        if (arr[mid] > target)
            return binarySearch(arr, low, mid - 1, target);

        // Otherwise, the element is present in the right subarray
        return binarySearch(arr, mid + 1, high, target);
    }

    // if Element is not present in the array
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Element is present at index %d\n", result);
    } else {
        printf("Element is not present in array\n");
    }

    return 0;
}
