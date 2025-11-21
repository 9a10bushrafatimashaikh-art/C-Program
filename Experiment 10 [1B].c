#include <stdio.h>

int main() {
    int arr[100], n;
    int *ptr;  // pointer declaration

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Make the pointer point to the last element
    ptr = &arr[n - 1];

    printf("\nArray elements in reverse order:\n");
    for (int i = n; i > 0; i--) {
        printf("%d ", *ptr);
        ptr--;  // move pointer to previous element
    }

    printf("\n");
    return 0;
}
