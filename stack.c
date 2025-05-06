#include<stdio.h>
#include<stdbool.h>
#define max 10
int stack[max];
int top = -1;
bool isEmpty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}
bool isFull(){
    if(top == max-1){
        return true;
    }
    else{
        return false;
    }
}
int pop(){
    if(isEmpty()){
        printf("Stack is empty");
    }
    else{
        int temp = stack[top];
        top--;
        return temp;
    }
}
void push(int data){
    if(isFull()){
        printf("Stack is full");
    }
    else{
        top++;
        stack[top] = data;
        printf("%d is added to index %d", data, top);
    }
}
int topR(){
    if(isEmpty()){
        printf("Stack is empty");
    }
    else{
        return stack[top];
    }
}
void display(){
    if(isEmpty()){
        printf("Stack is empty");
    }
    else{
        int i;
        for(i = 0; i  < top+1; i++){
            printf("%d\n", stack[i]);
        }
    }
}
int main(){
    while(1){
        int op;
        printf("\n1.Push, 2.Pop, 3.Display\n");
        scanf("%d", &op);
        switch(op){
            case 1 : {
                int d;
                printf("Enter a number : ");
                scanf("%d", &d);
                push(d);
            }
            break;
            case 2 : printf("%d",pop());
            break;
            case 3 : display();
            break;
            default: printf("Choose correct option ");
            break;
        }
    }
}