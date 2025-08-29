#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i; 
    }
    return -1; 
}

int main() {
    int arr[100], n, key, result;

    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    result = linearSearch(arr, n, key);

    if (result != -1)
        printf("Element found at index %d (position %d).\n", result, result + 1);
    else
        printf("Element not found in the list.\n");

    return 0;
}