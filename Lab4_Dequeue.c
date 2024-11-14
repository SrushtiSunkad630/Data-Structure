#include<stdio.h>
#include<stdlib.h>
# define n 5
int dq[n];
int rear=-1, front=-1;

void enqueueFront(int x){
    if(front==0 && rear==n-1 || front==rear+1){
        printf("Queue is full\n");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        dq[front]=x;
    }
    else if(front==0){
        front=n-1;
        dq[front]=x;
    }
    else{
        front--;
        dq[front]=x;
    }
}

void enqueueRear(int x){
    if(front==0 && rear==n-1 || front==rear+1){
        printf("Queue is full\n");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        dq[rear]=x;
    }
    else if(rear==n-1){
        rear=0;
        dq[rear]=x;
    }
    else{
        rear++;
        dq[rear]=x;
    }
}

void dequeueFront(){
    if(front==-1 && rear==-1){
        printf("Queue is Empty\n");
    }
    else if(rear==front){
        front=rear=-1;
    }
    else if(front==n-1){
        front=0;
    }
    else {
        front++;
    }
}

void dequeueRear(){
    if(front==-1 && rear==-1){
        printf("Queue is Empty\n");
    }
    else if(rear==front){
        front=rear=-1;
    }
    else if(rear==0){
        rear=n-1;
    }
    else {
        rear--;
    }
}


void display(){
    if(front==-1 && rear==-1){
        printf("Queue is empty\n");
    }
    else{
        for(int i=front;i!=rear;i=(i+1)%n){
            printf("%d ",dq[i]);
        }
        printf("%d",dq[rear]);
    }
}

void main(){
    int choice,data;
    while(1){
        printf("\n1.EnqueueFront \n2.EnqueueRear \n3.DequeueFront \n4.DequeueRear \n5.Display \n6.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:printf("Enter a data to insert: ");
                   scanf("%d",&data);
                   enqueueFront(data);
                   break;
            case 2:printf("Enter a data to insert: ");
                   scanf("%d",&data);
                   enqueueRear(data);
                   break;
            case 3:dequeueFront();
                   break;
             case 4:dequeueRear();
                   break;
            case 5:display();
                   break;
            case 6:exit(0);
                  break;
            default:printf("Invalid choice.");
        }
    }
}

//OUTPUT

1.EnqueueFront 
2.EnqueueRear 
3.DequeueFront 
4.DequeueRear 
5.Display 
6.Exit
Enter your choice: 1
Enter a data to insert: 10

1.EnqueueFront 
2.EnqueueRear 
3.DequeueFront 
4.DequeueRear 
5.Display 
6.Exit
Enter your choice: 1
Enter a data to insert: 20

1.EnqueueFront 
2.EnqueueRear 
3.DequeueFront 
4.DequeueRear 
5.Display 
6.Exit
Enter your choice: 2
Enter a data to insert: 30

1.EnqueueFront 
2.EnqueueRear 
3.DequeueFront 
4.DequeueRear 
5.Display 
6.Exit
Enter your choice: 2
Enter a data to insert: 40

1.EnqueueFront 
2.EnqueueRear 
3.DequeueFront 
4.DequeueRear 
5.Display 
6.Exit
Enter your choice: 2
Enter a data to insert: 50

1.EnqueueFront 
2.EnqueueRear 
3.DequeueFront 
4.DequeueRear 
5.Display 
6.Exit
Enter your choice: 1
Enter a data to insert: 60
Queue is full

1.EnqueueFront 
2.EnqueueRear 
3.DequeueFront 
4.DequeueRear 
5.Display 
6.Exit
Enter your choice: 5
20 10 30 40 50
1.EnqueueFront 
2.EnqueueRear 
3.DequeueFront 
4.DequeueRear 
5.Display 
6.Exit
Enter your choice: 3

1.EnqueueFront 
2.EnqueueRear 
3.DequeueFront 
4.DequeueRear 
5.Display 
6.Exit
Enter your choice: 4

1.EnqueueFront 
2.EnqueueRear 
3.DequeueFront 
4.DequeueRear 
5.Display 
6.Exit
Enter your choice: 5
10 30 40
1.EnqueueFront 
2.EnqueueRear 
3.DequeueFront 
4.DequeueRear 
5.Display 
6.Exit
Enter your choice: 3

1.EnqueueFront 
2.EnqueueRear 
3.DequeueFront 
4.DequeueRear 
5.Display 
6.Exit
Enter your choice: 3

1.EnqueueFront 
2.EnqueueRear 
3.DequeueFront 
4.DequeueRear 
5.Display 
6.Exit
Enter your choice: 4

1.EnqueueFront 
2.EnqueueRear 
3.DequeueFront 
4.DequeueRear 
5.Display 
6.Exit
Enter your choice: 4
Queue is Empty

1.EnqueueFront 
2.EnqueueRear 
3.DequeueFront 
4.DequeueRear 
5.Display 
6.Exit
Enter your choice: 5
Queue is empty

1.EnqueueFront 
2.EnqueueRear 
3.DequeueFront 
4.DequeueRear 
5.Display 
6.Exit
Enter your choice: 6
  
