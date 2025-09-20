//write a program in C for the selection sort.

#include<stdio.h>
void selection_sort(int arr[],int n){
    int i,j,minimum,temp;
    for(int i=0;i<n-1;i++){
        minimum=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minimum]){
                minimum=j;
            }
        }
        temp=arr[minimum];
            arr[minimum]=arr[i];
            arr[i]=temp;
    }
}

int main(){
    int arr[100],n;
    printf("Enter the size of array:");
    scanf("%d",&n); //take the size of array as an input from the user
    printf("\nEnter the %d elements in the array:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);    //take the input of numbers in array
    }
    
    selection_sort(arr,n);  //calling the fuction

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);    //printing the resultant(sorted) array
    }

return 0;
}