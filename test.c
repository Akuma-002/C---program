#include<stdio.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push(int data){
    if (top < MAX-1){
        top++;
        stack[top] = data;
    }
    else{
        printf("Stack if Full");            
    }
}
void pop(){
    if(top != -1){
        stack[top] = 0;
        top--;
    }
    else{
        printf("Stack is empty");
    }
}
void display(){
    if (top != -1){
        int i;
        for(i = 0; i <= top; i++){
            printf("%d ", stack[i]);
        }
    }
    else{
        printf("Stack is empty");
    }
}

int main(){
    push(2);
    push(3);
    push(5);
    pop();
    display();
    return 0;
}