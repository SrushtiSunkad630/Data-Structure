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

void deleteAtFront(struct Node* *head){
    if(*head==NULL){
        printf("List is Empty\n");
    }
    struct Node *temp1=*head;
    struct Node *temp2=temp1->next;
    *head=temp2;
    free(temp1);
}

void deleteAtEnd(struct Node* *head){
    if(*head==NULL){
        printf("List is empty\n");
    }
    
    struct Node *temp1=*head;
    struct Node *temp2=NULL;
    
    if(temp1->next==NULL){
        free(temp1);
        *head=NULL;
    }
    
    while(temp1->next!=NULL){
        temp2=temp1;
        temp1=temp1->next;
    }
    temp2->next=NULL;
    free(temp1);
}

void deleteAtPos(struct Node* *head,int pos){
    if(*head==NULL){
        printf("List is empty\n");
    }
    struct Node *temp1=*head;
    struct Node *temp2=NULL;
    if(pos==1){
        *head=temp1->next;
        free(temp1);
    }
    for(int i=1;i<pos-1 && temp1!=NULL;i++){
        temp1=temp1->next;
    }
    if(temp1==NULL || temp1->next==NULL){
        printf("Position out of range\n");
    }
    temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);
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
        printf("\n1.Insertion  \n2.Delete At Front \n3.Delete At End \n4.Delete At Position \n5.Display \n6.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:printf("Enter a data to be insert: ");
                   scanf("%d",&data);
                   insertAtEnd(&head,data);
                   break;
            case 2:deleteAtFront(&head);
                   break;
            case 3:deleteAtEnd(&head);
                   break;
            case 4:printf("Enter a position: ");
                   scanf("%d",&pos);
                   deleteAtPos(&head,pos);
                   break;
            case 5:display(head);
                   break;
            case 6:exit(0);
                   break;
            default:printf("Invalid choice.");
             
        }
    }
}

//OUTPUT


1.Insertion  
2.Delete At Front 
3.Delete At End 
4.Delete At Position 
5.Display 
6.Exit
Enter your choice: 1
Enter a data to be insert: 10

1.Insertion  
2.Delete At Front 
3.Delete At End 
4.Delete At Position 
5.Display 
6.Exit
Enter your choice: 1
Enter a data to be insert: 20

1.Insertion  
2.Delete At Front 
3.Delete At End 
4.Delete At Position 
5.Display 
6.Exit
Enter your choice: 1
Enter a data to be insert: 30

1.Insertion  
2.Delete At Front 
3.Delete At End 
4.Delete At Position 
5.Display 
6.Exit
Enter your choice: 1
Enter a data to be insert: 40

1.Insertion  
2.Delete At Front 
3.Delete At End 
4.Delete At Position 
5.Display 
6.Exit
Enter your choice: 1
Enter a data to be insert: 50

1.Insertion  
2.Delete At Front 
3.Delete At End 
4.Delete At Position 
5.Display 
6.Exit
Enter your choice: 5
10 20 30 40 50 
1.Insertion  
2.Delete At Front 
3.Delete At End 
4.Delete At Position 
5.Display 
6.Exit
Enter your choice: 2

1.Insertion  
2.Delete At Front 
3.Delete At End 
4.Delete At Position 
5.Display 
6.Exit
Enter your choice: 5
20 30 40 50 
1.Insertion  
2.Delete At Front 
3.Delete At End 
4.Delete At Position 
5.Display 
6.Exit
Enter your choice: 3

1.Insertion  
2.Delete At Front 
3.Delete At End 
4.Delete At Position 
5.Display 
6.Exit
Enter your choice: 5
20 30 40 
1.Insertion  
2.Delete At Front 
3.Delete At End 
4.Delete At Position 
5.Display 
6.Exit
Enter your choice: 4
Enter a position: 2

1.Insertion  
2.Delete At Front 
3.Delete At End 
4.Delete At Position 
5.Display 
6.Exit
Enter your choice: 5
20 40 
1.Insertion  
2.Delete At Front 
3.Delete At End 
4.Delete At Position 
5.Display 
6.Exit
Enter your choice: 6
