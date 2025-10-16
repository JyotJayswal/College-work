/*Write a program in C that obtains the minimum and maximum element from the array.
Modify this program to give the second largest and second smallest element of the array.*/

// this code fails if you enter 1 as your 1st element of array.
#include<stdio.h>
int maximum(int n,int arr[]){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int minimum(int n,int arr[]){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int second_largest(int n,int arr[]){
    int max=maximum(n,arr);
    int second_max= arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>second_max && arr[i]<max){
            second_max=arr[i];
        }
    }
    return second_max;
}

int second_smallest(int n,int arr[]){
    int min=minimum(n,arr);
    int second_min= arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<second_min && arr[i]>min){
            second_min=arr[i];
        }
    }
    return second_min;
}

#include<stdio.h>
int main(){
    printf("Enter the size of array:");
    int n;
    scanf("%d",&n); //take the size of array as an input from the user
    int arr[n];
    printf("Enter any %d integer numbers in array:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);    // take number as input from the user
    }

    printf("Maximum number in array is: %d\n",maximum(n,arr));
    printf("Minimum number in array is: %d\n",minimum(n,arr));
    printf("Second largest number in array is: %d\n",second_largest(n,arr));
    printf("Second smallest number in array is: %d\n",second_smallest(n,arr));
return 0;
}