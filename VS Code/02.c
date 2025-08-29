#include <stdio.h>
#include <limits.h>

int main() {
    int arr[100], n, i;
    int largest = INT_MIN, secondLargest = INT_MIN;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("Largest element = %d\n", largest);
        printf("Second largest element = %d\n", secondLargest);
    }

    return 0;
}
