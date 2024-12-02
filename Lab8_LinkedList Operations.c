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
