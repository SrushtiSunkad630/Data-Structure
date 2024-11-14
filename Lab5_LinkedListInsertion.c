#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node *CreateNode(int data){
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}

void insertAtFirst(struct Node* *head,int data){
    struct Node* newnode=CreateNode(data);
        newnode->next=*head;
        *head=newnode;
}

void insertAtEnd(struct Node* *head,int data){
    struct Node* newnode=CreateNode(data);
    if(*head==NULL){
        *head=newnode;
        return;
    }
    struct Node *temp=*head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
}

void insertAtPos(struct Node* *head,int data,int pos){
    struct Node* newnode=CreateNode(data);
    if(pos==1){
        newnode->next=*head;
        *head=newnode;
        return;
    }
    struct Node *temp=*head;
    for(int i=1;i<pos-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    if(temp==NULL){
        printf("Position out of range.\n");
        free(newnode);
        return;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}

void display(struct Node *head){
    struct Node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void main(){
    struct Node *head=NULL;
    int data, choice,pos;
    while(1){
        printf("\n1.Insert At Front \n2.Insert At End \n3.Insert At Position \n4.Display \n5.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:printf("Enter a data to be insert: ");
                   scanf("%d",&data);
                   insertAtFirst(&head,data);
                   break;
            case 2:printf("Enter a data to be insert: ");
                   scanf("%d",&data);
                   insertAtEnd(&head,data);
                   break;
            case 3:printf("Enter a position: ");
                   scanf("%d",&pos);
                   printf("Enter a data to be insert: ");
                   scanf("%d",&data);
                   insertAtPos(&head,data,pos);
                   break;
            case 4:display(head);
                   break;
            case 5:exit(0);
                   break;
            default:printf("Invalid choice.");
             
        }
    }
}

//OUTPUT


1.Insert At Front 
2.Insert At End 
3.Insert At Position 
4.Display 
5.Exit
Enter your choice: 1
Enter a data to be insert: 10

1.Insert At Front 
2.Insert At End 
3.Insert At Position 
4.Display 
5.Exit
Enter your choice: 1
Enter a data to be insert: 20

1.Insert At Front 
2.Insert At End 
3.Insert At Position 
4.Display 
5.Exit
Enter your choice: 2
Enter a data to be insert: 30

1.Insert At Front 
2.Insert At End 
3.Insert At Position 
4.Display 
5.Exit
Enter your choice: 2
Enter a data to be insert: 40

1.Insert At Front 
2.Insert At End 
3.Insert At Position 
4.Display 
5.Exit
Enter your choice: 3
Enter a position: 2
Enter a data to be insert: 50

1.Insert At Front 
2.Insert At End 
3.Insert At Position 
4.Display 
5.Exit
Enter your choice: 4
20 50 10 30 40 
1.Insert At Front 
2.Insert At End 
3.Insert At Position 
4.Display 
5.Exit
Enter your choice: 5
