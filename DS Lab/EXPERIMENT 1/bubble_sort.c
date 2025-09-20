// write a program in C of the bubble sort.

#include<stdio.h>
int main(){
    int n,temp,flag;
    printf("Enter the size of array:");
    scanf("%d",&n);     //take the size of array as an input from the user
    
    int arr[n];

    printf("\nEnter the %d elements in the array:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);   //take the input of numbers in array
    }

    for(int i=0;i<n-1;i++){     //for accessing each element of array
        flag=0;
            for(int j=0;j<n-i-1;j++){   //for comparing the elements
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    flag=1;
                }
            }
        if(flag!=1){
            break;
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
   
}