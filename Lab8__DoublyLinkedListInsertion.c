#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *createNode(int data){
    struct Node *newnode=(struct Node *)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
}

void insertBeg(struct Node* *head,struct Node* *tail,int data){
    struct Node *newnode=createNode(data);
    if(*head==NULL){
        *head=*tail=newnode;
        newnode->prev=NULL;
        newnode->next=NULL;
    }
    else{
        newnode->next=*head;
        (*head)->prev=newnode;
        *head=newnode;
    }
}

void insertEnd(struct Node* *head,struct Node* *tail,int data){
    struct Node *newnode=createNode(data);
    if(*head==NULL){
        *head=*tail=newnode;
        newnode->prev=NULL;
        newnode->next=NULL;
    }
    newnode->prev=*tail;
    (*tail)->next=newnode;
    *tail=newnode;
}

void insertpos(struct Node* *head,struct Node* *tail,int data,int pos){
    struct Node *newnode=createNode(data);
    if(pos==1){
        insertBeg(head,tail,data);
    }
    struct Node *temp=*head;

    for(int i=1;i<pos-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        printf("Position out of range\n");
        free(newnode);
    }
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next->prev=newnode;
}

void display(struct Node *head){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void main(){
    int data,choice,pos;
    struct Node *head=NULL;
    struct Node *tail=NULL;

    while(1){
       printf("1.Insertion at beg\n");
       printf("2.Insertion at end\n");
       printf("3.Insertion at pos\n");
       printf("4.Display\n");
       printf("5.Exit\n");

       printf("Enter your choice: ");
       scanf("%d",&choice);

       switch(choice){
        case 1:printf("Enter data:");
              scanf("%d",&data);
              insertBeg(&head,&tail,data);
              break;
        case 2:printf("Enter data:");
              scanf("%d",&data);
              insertEnd(&head,&tail,data);
              break;
        case 3:printf("Enter pos:");
               scanf("%d",&pos);
              printf("Enter data:");
              scanf("%d",&data);
              insertpos(&head,&tail,data,pos);
              break;
        case 4:display(head);
               break;
        case 5:exit(0);
               break;
        default:printf("Invalid Choice\n");
                break;
       }
    }
}

//OUTPUT
1.Insertion at beg
2.Insertion at end
3.Insertion at pos
4.Display
5.Exit
Enter your choice: 1
Enter data:10
1.Insertion at beg
2.Insertion at end
3.Insertion at pos
4.Display
5.Exit
Enter your choice: 1
Enter data:79
1.Insertion at beg
2.Insertion at end
3.Insertion at pos
4.Display
5.Exit
Enter your choice: 4
79 10
1.Insertion at beg
2.Insertion at end
3.Insertion at pos
4.Display
5.Exit
Enter your choice: 2
Enter data:56
1.Insertion at beg
2.Insertion at end
3.Insertion at pos
4.Display
5.Exit
Enter your choice: 4
79 10 56
1.Insertion at beg
2.Insertion at end
3.Insertion at pos
4.Display
5.Exit
Enter your choice: 3
Enter pos:2
Enter data:58
1.Insertion at beg
2.Insertion at end
3.Insertion at pos
4.Display
5.Exit
Enter your choice: 4
79 58 10 56
1.Insertion at beg
2.Insertion at end
3.Insertion at pos
4.Display
5.Exit
Enter your choice: 5

