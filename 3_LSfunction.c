#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int n, target, index;
    
    printf("Enter the size of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the element you want to search: ");
    scanf("%d", &target);

    // Calling the function
    index = linearSearch(arr, n, target);
 // Checking the result
    if (index != -1) {
        printf("Element found at index %d\n", index);
    } else {
        printf("The element is not found in the array.\n");
    }

return 0;
}