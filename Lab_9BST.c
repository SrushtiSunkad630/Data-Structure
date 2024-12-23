#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left,*right;
};

struct Node *createNode(int data){
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
};

struct Node*insert(struct Node *root,int data){
    if(root==NULL){
        return createNode(data);
    }
    if(data<root-data){
        root->left=insert(root->left,data);
    }
    else if(data>root->data){
        root->right=insert(root->right,data);
    }
    return root;
};
void inOrder(struct Node*root){
    if(root!=NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}
void preOrder(struct Node *root){
    if(root!=NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(struct Node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}

void main(){
    struct Node *root=NULL;
    int choice,data;
    while(1){
        printf("1.Insert into BST \n2.In-Order Traversal \n3.Pre-Order Traversal \n4.Post-order Traversal \n5.exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1:printf("Enter the value to insert:");
                   scanf("%d",&data);
                   root=insert(root,data);
                   break;
            case 2:printf("In-Order Traversal: ");
                   inOrder(root);
                   printf("\n");
                   break;
            case 3:printf("Pre-Order Traversal: ");
                   preOrder(root);
                   printf("\n");
                   break;
            case 4:printf("Post-Order Traversal: ");
                   postOrder(root);
                   printf("\n");
                   break;
            case 5:exit(0);
                   break;
            default:printf("Invalid choice...\n");
        }
    }
}
//OUTPUT
1.Insert into BST
2.In-Order Traversal
3.Pre-Order Traversal
4.Post-order Traversal
5.exit
Enter your choice: 1
Enter the value to insert:60
1.Insert into BST
2.In-Order Traversal
3.Pre-Order Traversal
4.Post-order Traversal
5.exit
Enter your choice: 1
Enter the value to insert:50
1.Insert into BST
2.In-Order Traversal
3.Pre-Order Traversal
4.Post-order Traversal
5.exit
Enter your choice: 1
Enter the value to insert:30
1.Insert into BST
2.In-Order Traversal
3.Pre-Order Traversal
4.Post-order Traversal
5.exit
Enter your choice: 2
In-Order Traversal: 30 50 60
1.Insert into BST
2.In-Order Traversal
3.Pre-Order Traversal
4.Post-order Traversal
5.exit
Enter your choice: 3
Pre-Order Traversal: 60 50 30
1.Insert into BST
2.In-Order Traversal
3.Pre-Order Traversal
4.Post-order Traversal
5.exit
Enter your choice: 4
Post-Order Traversal: 30 50 60
1.Insert into BST
2.In-Order Traversal
3.Pre-Order Traversal
4.Post-order Traversal
5.exit
Enter your choice: 5

Process returned 0 (0x0)   execution time : 17.878 s
Press any key to continue.
