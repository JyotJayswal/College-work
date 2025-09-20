/*Write a program in C to implement arrays of pointers and pointers to arrays.*/

#include<stdio.h>

void main(){

    char *names[]={"siri","alexa","gemini","chatGPT","perplexity"}; //array of pointers

    int num_names=sizeof(names)/sizeof(names[0]);

    printf("Array of pointers (Printing names):\n");
    for(int i=0; i<num_names;i++){
        printf("name[%d]= %s\n",i+1,names[i]);
    }

    int arr[5]={10,20,30,40,50};
    int (*ptr)[5];  // pointer to the array arr[5]
    ptr = &arr;

    printf("\npointer to an array (printing numbers):\n");
    for(int i=0;i<5;i++){
        printf("arr[%d] = %d\n",i,(*ptr)[i]);   // (*ptr)[i] dereferences the pointer to access array elements
    }
}