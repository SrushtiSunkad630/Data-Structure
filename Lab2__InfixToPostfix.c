#include<stdio.h>
#include<string.h>
#define max 30
char s1[max];//postfix
char s2[max];//infix
int t1=-1,t2=-1;

int precedence(char x){
    if(x=='*' || x=='/'){
        return 2;
    }
    else if(x=='+' || x=='-'){
        return 1;
    }
    else if(x=='^'){
        return 3;
    }
    return 0;
}

void push1(char x){
    if(t1==max-1){
        printf("Stack is full\n");
        return;
    }
    else{
        t1++;
        s1[t1]=x;
    }
}

void push2(char x){
    if(t2==max-1){
        printf("Stack is full\n");
        return;
    }
    else{
        t2++;
        s2[t2]=x;
    }
}

char pop1(){
    if(t1==-1){
        printf("Stack is empty\n");
        return '\0';
    }
    return s1[t1--];
}

char pop2(){
    if(t2==-1){
        printf("Stack is empty\n");
        return '\0';
    }
    return s2[t2--];
}

char peek2(){
    if(t2!=-1){
        return s2[t2];
    }
    return '\0';
}

void main(){
    char str[max];
    printf("Enetr a expression: ");
    scanf("%s",str);
    
    for(int i=0;i<strlen(str);i++){
        char ch=str[i];
        
        if(ch=='('){
            push2(ch);
        }
        else if(ch==')'){
            while(peek2()!='('){
                push1(pop2());
            }
            pop2();
        }
        else if(ch=='+'|| ch=='-'|| ch=='*' || ch=='/' || ch=='^'){
            while(t2>-1 && precedence(peek2())>=precedence(ch)){
                push1(pop2());
            }
            push2(ch);
        }
        else if(ch>='a' && ch<='z'){
            push1(ch);
        }
    }
    
    while(t2>-1){
        push1(pop2());
    }
    for(int i=0;i<=t1;i++){
        printf("%c",s1[i]);
    }
}

//OUTPUT

Enetr a expression: a+b*(c^d-e)^(f+g*h)-i
abcd^e-fgh*+^*+i-
