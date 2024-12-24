1)
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *createNode(int data){
    struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}

void insertEnd(struct Node* *head,int data){
    struct Node *newnode=createNode(data);
    if(*head==NULL){
         *head=newnode;
    }else{
    struct Node *temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    }
}

void sort(struct Node* *head){
    if(*head==NULL || (*head)->next==NULL){
        return;
    }
    struct Node *i=*head;
    while(i!=NULL){
        struct Node *j=i->next;
        while(j!=NULL){
            if(i->data > j->data){
                int temp=i->data;
                i->data=j->data;
                j->data=temp;
            }
            j=j->next;
        }
        i=i->next;
    }
}

void reverse(struct Node* *head){
    struct Node *prev=NULL;
    struct Node *curr=*head;
    struct Node *nextn=NULL;

    while(curr!=NULL){
        nextn=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextn;
    }
    *head=prev;
}

void concate(struct Node* *head1,struct Node* *head2){
    if(*head1==NULL){
        *head1=*head2;
    }
    struct Node *temp=*head1;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=*head2;
    *head2=NULL;
}
void display(struct Node* head){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void main()
{
    struct Node *list1=NULL;
    struct Node *list2=NULL;
    int data,choice;

    while(true){
        printf("1.Insert into list1.\n");
        printf("2.Insert into list 2.\n");
        printf("3.Sort list 1\n");
        printf("4.Reverse list 1\n");
        printf("5.Concatination\n");
        printf("6.Display\n");
        printf("7.Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:printf("enter data to insert into list1: \n");
                   scanf("%d",&data);
                   insertEnd(&list1,data);
                   break;
            case 2:printf("enter data to insert into list2: \n");
                   scanf("%d",&data);
                   insertEnd(&list2,data);
                   break;
            case 3:sort(&list1);
                   printf("Done\n");
                   break;
            case 4:reverse(&list1);
                   printf("Done\n");
                   break;
            case 5:concate(&list1,&list2);
                   printf("Done\n");
                   break;
            case 6:printf("List1:");
                   display(list1);
                   printf("List2:");
                   display(list2);
                   break;
            case 7:exit(0);
                   break;
            default:printf("Invalid Choice....\n");
                   break;

        }
    }
}


//OUTPUT
1.Insert into list1.
2.Insert into list 2.
3.Sort list 1
4.Reverse list 1
5.Concatination
6.Display
7.Exit
Enter your choice: 1
enter data to insert into list1:
78
1.Insert into list1.
2.Insert into list 2.
3.Sort list 1
4.Reverse list 1
5.Concatination
6.Display
7.Exit
Enter your choice: 1
enter data to insert into list1:
56
1.Insert into list1.
2.Insert into list 2.
3.Sort list 1
4.Reverse list 1
5.Concatination
6.Display
7.Exit
Enter your choice: 2
enter data to insert into list2:
67
1.Insert into list1.
2.Insert into list 2.
3.Sort list 1
4.Reverse list 1
5.Concatination
6.Display
7.Exit
Enter your choice: 45
Invalid Choice....
1.Insert into list1.
2.Insert into list 2.
3.Sort list 1
4.Reverse list 1
5.Concatination
6.Display
7.Exit
Enter your choice: 6
List1:78 56
List2:67
1.Insert into list1.
2.Insert into list 2.
3.Sort list 1
4.Reverse list 1
5.Concatination
6.Display
7.Exit
Enter your choice: 2
enter data to insert into list2:
78
1.Insert into list1.
2.Insert into list 2.
3.Sort list 1
4.Reverse list 1
5.Concatination
6.Display
7.Exit
Enter your choice: 6
List1:78 56
List2:67 78
1.Insert into list1.
2.Insert into list 2.
3.Sort list 1
4.Reverse list 1
5.Concatination
6.Display
7.Exit
Enter your choice: 3
Done
1.Insert into list1.
2.Insert into list 2.
3.Sort list 1
4.Reverse list 1
5.Concatination
6.Display
7.Exit
Enter your choice: 6
List1:56 78
List2:67 78
1.Insert into list1.
2.Insert into list 2.
3.Sort list 1
4.Reverse list 1
5.Concatination
6.Display
7.Exit
Enter your choice: 5
Done
1.Insert into list1.
2.Insert into list 2.
3.Sort list 1
4.Reverse list 1
5.Concatination
6.Display
7.Exit
Enter your choice: 6
List1:56 78 67 78
List2:
1.Insert into list1.
2.Insert into list 2.
3.Sort list 1
4.Reverse list 1
5.Concatination
6.Display
7.Exit
Enter your choice: 3
Done
1.Insert into list1.
2.Insert into list 2.
3.Sort list 1
4.Reverse list 1
5.Concatination
6.Display
7.Exit
Enter your choice: 6
List1:56 67 78 78
List2:
1.Insert into list1.
2.Insert into list 2.
3.Sort list 1
4.Reverse list 1
5.Concatination
6.Display
7.Exit
Enter your choice: 4
Done
1.Insert into list1.
2.Insert into list 2.
3.Sort list 1
4.Reverse list 1
5.Concatination
6.Display
7.Exit
Enter your choice: 6
List1:78 78 67 56
List2:
1.Insert into list1.
2.Insert into list 2.
3.Sort list 1
4.Reverse list 1
5.Concatination
6.Display
7.Exit
Enter your choice: 7

Process returned 0 (0x0)   execution time : 79.779 s
Press any key to continue.


    
2.WAP to Implement Singly Linked List to stimulate stack and queue operations.
 
I)
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node{
    int data;
    struct Node *next;
};

void push(int x,struct Node* *top){
    struct Node newnode=(struct Node)malloc(sizeof(struct Node));
    newnode->data=x;
    newnode->next=*top;
    *top=newnode;
}

void pop(struct Node* *top){
    if(*top==NULL){
        printf("Empty\n");
    }
    struct Node *temp=*top;
    *top=(*top)->next;
    free(temp);
}
void peek(struct Node* top) {
    if (top == NULL) {
        printf("Empty\n");
    } else {
        printf("%d \n", top->data);
    }
}

void display(struct Node* top) {
    struct Node* temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;  
    }
    printf("\n");
}

void main(){
    int data,choice;
    struct Node *top=NULL;

    while(true){
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:printf("Enter data:");
                   scanf("%d",&data);
                   push(data,&top);
                   break;
            case 2:pop(&top);
                   break;
            case 3:peek(top);
                   break;
            case 4:display(top);
                   break;
            case 5:exit(0);
                   break;
            default:printf("Invalid Choice\n");
                    break;
        }
    }
}

//OUTPUT
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice: 1
Enter data:12
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice: 1
Enter data:45
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice: 1
Enter data:78
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice: 1
Enter data:89
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice: 4
89 78 45 12 
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice: 3
89 
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice: 2
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice: 2
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice: 4
45 12 
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice: 3
45 
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice: 5
Process returned 0 (0x0)   execution time : 79.779 s
Press any key to continue.

    
II)
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void enqueue(struct Node* front,struct Node *rear,int data){
    struct Node newnode=(struct Node)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=NULL;
    
    if(*front==NULL && *rear==NULL){
        *front=*rear=newnode;
    }
    else{
        (*rear)->next=newnode;
        *rear=newnode;
    }
}

void dequeue(struct Node* front,struct Node *rear){
    if(*front==NULL && *rear==NULL){
        printf("Queue is empty\n");
    }
    else if(*front==*rear){
        *front=*rear=NULL;
    }
    else{
        *front=(*front)->next;
    }
}

void display(struct Node* front){
    struct Node *temp=front;
    if(front==NULL){
        printf("Queue is empty\n");
    }
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void main(){
    int data,choice;
    struct Node *front=NULL;
    struct Node *rear=NULL;
    
    while(1){
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        
        printf("Enter your choice:");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:printf("Enter data:");
                   scanf("%d",&data);
                   enqueue(&front,&rear,data);
                   break;
            case 2:dequeue(&front,&rear);
                   break;
            case 3:display(front);
                   break;
            case 4:exit(0);
                   break;
            default:printf("Invalid choice\n");
        }
    }
}

//OUTPUT

1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:1
Enter data:11
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:1
Enter data:22
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:1
Enter data:33
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:1
Enter data:44
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:3
11 22 33 44 
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:2
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:2
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:3
33 44 
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:2
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:2
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:3
Queue is empty

1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:2
Queue is empty
1.Enqueue
2.Dequeue
3.Display
4.Exit
Enter your choice:4


=== Code Execution Successful ===
