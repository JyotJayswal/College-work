//write a program in C of the insertion sort.

#include <stdio.h>
void insertion_sort(int arr[],int n) {
    int i,j,key;
    for (i=1;i<n;i++) {
        key = arr[i];         
        j = i-1;

        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

int main() {

    int arr[100],n;
    printf("Enter the size of array:");
    scanf("%d",&n);     //take the size of array as an input from the user
    printf("\nEnter the %d elements in the array:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);   //take the input of numbers in array
    }

    insertion_sort(arr, n);

    printf("Sorted array using Insertion Sort:\n");
    for (int i=0;i<n;i++) {
        printf("%d ", arr[i]);
    }
return 0;
}
