//Write a program in C to perform binary search.

#include <stdio.h>
int binary_search(int arr[],int n,int target) {
    int low =0, high =n-1;

    while (low <= high) {
        int mid = (low + high)/2;   //accessing the middle element of array

        if (arr[mid]==target)
            return mid;
        else if (arr[mid]<target)
            low = mid + 1; //Search in right side of list because the target is greater than the mid element
        else
            high = mid - 1; //Search in left side of list because the target is mer than the mid element
    }

    return -1;  // Target not found
}

int main() {
    int n, target;
    printf("Enter the size of the array:"); // binary search only works on sorted array
    scanf("%d",&n);

    int arr[n]; //declaring the array of size n

    printf("\nEnter %d elements in sorted way :\n", n);
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }

    printf("Enter the number you want to search: ");
    scanf("%d", &target);

    int result = binary_search(n, arr[n], target);

    if (result != -1)
        printf("Element found at index: %d\n", result);
    else
        printf("Element not found in the array.\n");

    return 0;
}
