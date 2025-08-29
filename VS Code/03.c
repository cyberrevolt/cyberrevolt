#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;  
        else if (key < arr[mid])
            return binarySearch(arr, low, mid - 1, key);  
        else
            return binarySearch(arr, mid + 1, high, key); 
    }

    return -1; 
}

int main() {
    int arr[100], n, key, result;

    printf("Enter the number of elements (sorted in ascending order): ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, 0, n - 1, key);

    if (result != -1)
        printf("Element found at index %d (position %d).\n", result, result + 1);
    else
        printf("Element not found in the list.\n");

    return 0;
}
