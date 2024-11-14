#include<stdio.h>
#include<stdlib.h>
# define n 4
int q[n];
int rear=-1, front=-1;

void enqueue(int x){
    if(front==(rear+1)%n){
        printf("Queue is full\n");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        q[rear]=x;
    }
    else{
        rear=(rear+1)%n;
        q[rear]=x;
    }
}

void dequeue(){
    if(front==-1 && rear==-1){
        printf("Queue is Empty\n");
    }
    else if(rear==front){
        front=rear=-1;
    }
    else {
        front=(front+1)%n;
    }
}

void display(){
    if(front==-1 && rear==-1){
        printf("Queue is empty\n");
    }
    else{
        for(int i=front;i!=rear;i++){
            printf("%d ",q[i]);
        }
        printf("%d",q[rear]);
    }
}

void main(){
    int choice,data;
    while(1){
        printf("\n1.Enqueue \n2.Dequeue  \n3.Display \n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:printf("Enter a data to insert: ");
                   scanf("%d",&data);
                   enqueue(data);
                   break;
            case 2:dequeue();
                   break;
            case 3:display();
                   break;
            case 4:exit(0);
                  break;
            default:printf("Invalid choice.");
        }
    }
}

//OUTPUT

1.Enqueue 
2.Dequeue  
3.Display 
4.Exit
Enter your choice: 1
Enter a data to insert: 10

1.Enqueue 
2.Dequeue  
3.Display 
4.Exit
Enter your choice: 1
Enter a data to insert: 20

1.Enqueue 
2.Dequeue  
3.Display 
4.Exit
Enter your choice: 1
Enter a data to insert: 30

1.Enqueue 
2.Dequeue  
3.Display 
4.Exit
Enter your choice: 1
Enter a data to insert: 40

1.Enqueue 
2.Dequeue  
3.Display 
4.Exit
Enter your choice: 1
Enter a data to insert: 50
Queue is full

1.Enqueue 
2.Dequeue  
3.Display 
4.Exit
Enter your choice: 3
10 20 30 40
1.Enqueue 
2.Dequeue  
3.Display 
4.Exit
Enter your choice: 2

1.Enqueue 
2.Dequeue  
3.Display 
4.Exit
Enter your choice: 2

1.Enqueue 
2.Dequeue  
3.Display 
4.Exit
Enter your choice: 3
30 40
1.Enqueue 
2.Dequeue  
3.Display 
4.Exit
Enter your choice: 2

1.Enqueue 
2.Dequeue  
3.Display 
4.Exit
Enter your choice: 2

1.Enqueue 
2.Dequeue  
3.Display 
4.Exit
Enter your choice: 2
Queue is Empty

1.Enqueue 
2.Dequeue  
3.Display 
4.Exit
Enter your choice: 3
Queue is empty

1.Enqueue 
2.Dequeue  
3.Display 
4.Exit
Enter your choice: 4
