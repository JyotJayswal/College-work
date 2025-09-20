// Write a program in C to perform linear.

#include <stdio.h>
int linear_search(int n,int arr[],int target){
    for(int i=0;i<n;i++) {
        if(arr[i] == target)
            return i;
    }
    return -1;
}

int main() {

    int n,target;
    printf("Enter the size of the array:");
    scanf("%d",&n);    //take size of the array as an input from user
    
    int arr[n];    //declare an array of size n
    
    printf("Enter any %d numbers in the array:",n); 
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);    //take input from user
    }

    printf("\nEnter the target number:");
    scanf("%d",&target);    //take target number as an input from user

    int result = linear_search(n,arr,target);   //call the function
    
    if(result != -1)    //condition if the element was found   
        printf("\nElement was found at index: %d",result);
    else
        printf("\nElement was not found");
    return 0;
}