//Convert the given infix expression into postfix expression using stack.
// Example- Input: 𝑎+𝑏∗(𝑐^𝑑−𝑒)^(𝑓+𝑔∗ℎ)−𝑖
// Output: 𝑎𝑏𝑐𝑑^𝑒−𝑓𝑔ℎ∗+^∗+𝑖− 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
    int top;
    int size;
    int *array;
};

struct stack* createstack(int size){
    struct stack* s = (struct stack*) malloc (sizeof(struct stack));
    s->size=size;
    s->top=-1;
    s->array=(int *) malloc(sizeof(int)* size);
    return s;
}

int isempty(struct stack *s){
   return s->top = -1;     
}

char peek(struct stack *s){
    return s->array[s->top];
}

char pop(struct stack *s){
    if(!isempty(s)){
        return s->array[s->top--];
    }
    return '$';
}

void push(struct stack *s, char op){
    s->array[++s->top]=op;
}

int isoperand(char ch){
    return (ch>='a' && ch<='z') || (ch>='A' && ch<='Z');
}

int prec(char ch){
    switch(ch){
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;  
        }
    return -1;
}

int inf2post(char *exp){
    int i,k;
    struct stack *s = createstack(strlen(exp));
    if(!s){
        return -1;
    }

    for(int i=0;k=-1; ++i){
        if(isoperand(exp[i])){
            exp[++k]=exp[i];
        }
        else if (exp[i] == '('){
            push(s, exp[i]);
        }

        else if(exp[i] == ')'){
            while(!isempty(s) && peek(s)!='('){
                exp[++k] =pop(s);

                if(!isempty(s) && peek(s)!='('){
                    return -1;
                }
                else{
                    pop(s);
                }
            }
        }

        else{
            while(!isempty(s) && prec(exp[i]) <= prec(peek(s))){
                exp[++k] = pop(s); 
                push(s, exp[i]); 
            }
        }

        while (!isempty(s)){
            exp[++k] = pop(s);
        }

    exp[++k] = '\0';
    printf("%s", exp); 
        
    }
}

int main(){
    char exp[] = "a+b*(c^d-e)^(f+g*h)-i"; 
    // Function call 
    inf2post(exp);
    return 0; }