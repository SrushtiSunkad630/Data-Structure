#include<stdio.h>
#include<stdlib.h>
#define max 4
int stack[max];
int top=-1;

void push(int x){
    if(top==max-1){
        printf("Stack is full\n");
    }
    else{
        top++;
        stack[top]=x;
    }
}

void pop(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        top--;
    }
}

void peek(){
    if(top!=-1){
        printf("%d",stack[top]);
    }
}

void display(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}

void main(){
    int choice,data;
    while(1){
        printf("\n1.Push \n2.Pop \n3.Peek \n4.Display \n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:printf("Enter a data to insert: ");
                   scanf("%d",&data);
                   push(data);
                   break;
            case 2:pop();
                   break;
            case 3:peek();
                   break;
            case 4:display();
                   break;
            case 5:exit(0);
                  break;
            default:printf("Invalid choice.");
        }
    }
}
