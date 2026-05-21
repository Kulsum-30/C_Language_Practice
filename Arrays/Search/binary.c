#include <stdio.h>

int binary_search(int arr[], int low, int high, int key) {

    if(high < low) {

        return -1;
    }

    int mid = (low + high) / 2;

    if(arr[mid] == key) {

        return mid;
    }

    // Search left half
    if(arr[mid] > key) {

        return binary_search(arr, low, mid - 1, key);
    }

    // Search right half
    return binary_search(arr, mid + 1, high, key);
}

int main() {

    int size;

    printf("Enter size : ");
    scanf("%d", &size);

    int arr[100];

    printf("Enter sorted array elements : \n");

    for(int i = 0; i < size; i++) {

        scanf("%d", &arr[i]);
    }

    int key;

    printf("Enter key : ");
    scanf("%d", &key);

    int result = binary_search(arr, 0, size - 1, key);

    if(result != -1) {

        printf("Element found at index : %d\n", result);
    }
    else {

        printf("Element not found\n");
    }

    return 0;
}