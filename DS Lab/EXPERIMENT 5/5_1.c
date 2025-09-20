// Implement a stack using an array and using a linked list.

#include <stdio.h>
#include <stdlib.h>

struct stack{   //implementing the structure for stack
    int top;
    int size;
    int *array;
};

struct stack* createstack(int size){    //fuction for creating the stack
    struct stack* s=(struct stack*) malloc (sizeof(struct stack));  //assign the total memory for stack
    s->size=size;   
    s->top=-1;
    s->array=(int *)malloc(sizeof(int)* size);
    return s;
}

// isempty fuction
int isempty(struct stack *s){
    
    if(s->top==-1){
        printf("The stack is empty.\n");
        return 1;
    }
    else{
        printf("The stack is not-empty.\n");
        return 0;
    }
}

// isfull fuction
int isfull(struct stack *s){
    if(s->top==(s->size-1)){
        printf("Stack is full.\n");
        return 1;
    }
    else{
        printf("Stack is not full.\n");
        return 0;
    }
}

// push function
int push(struct stack *s){
    int value;  // variable for taking the input 
    int checkfull=isfull(s);    //call the isfull function before pushing into a stack
    
    if(checkfull==0){
        printf("Enter the value to push into the stack:");
        scanf("%d",&value);
        s->top = s->top + 1; //increment the top variable before pushing the value in stack
        s->array[s->top]=value;
        printf("pushed successfully.\n");
        return 0;
    }
    return 0;
}

//pop fuction
int pop(struct stack *s){
    int checkempty=isempty(s);

    if(checkempty==0){
        s->top = s->top - 1; //decrement the top variable(reason: top points to the previous element of stack)
        printf("poped successfully.\n");
        return 0;
    }
    else{
        return 0;
    }
}

// fucntion to print the top value of stack
void print_top(struct stack *s){
    printf("The topmost element of stack: %d\n",s->array[s->top]);
}

int main(){
    int size;
    printf("Enter the size of stack:");
    scanf("%d",&size);
    struct stack *s = createstack(size);

    printf("Enter a value to perform particular operation:\n");
    int x;
    
    while(1){
        printf("1. push operation:\n2. pop operation:\n3. topmost value of stack:\n");
        printf("4. check if stack is full:\n5. check if stack is empty:\n6. exit\n");
        scanf("%d",&x);

        switch(x)
        {
            case 1:
                push(s);
                break;
            case 2:
                pop(s);
                break;
            case 3:
                print_top(s);
                break;
            case 4:
                isfull(s);
                break;
            case 5:
                isempty(s);
                break;
            case 6: 
                exit(0);
        }
    }  
}
