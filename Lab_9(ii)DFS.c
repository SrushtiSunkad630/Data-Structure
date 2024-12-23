#include<stdio.h>
#define max 2

void dfs(int adj[][max],int vis[],int start){
    int stack[max];
    int top=-1;
    for(int k=0;k<max;k++){
        vis[k]=0;
    }
    stack[++top]=start;
    vis[start]=1;
    while(top!=-1){
        start=stack[top--];
        printf("%d ",start);
        for(int i=0;i<max;i++){
            if(adj[start][i] && vis[i]==0){
                stack[++top]=i;
                vis[i]=1;
            }
        }
    }
}
void main(){
    int vis[max]={0};
    int adj[max][max];
    int option,size;

    do{
        printf("1.Enter values in graph \n2.DFS Traversal \n3.Enter your choice:\n");
        scanf("%d",&option);

        switch(option){
            case 1:printf("Enter adjacency matrix:");
                  for(int i=0;i<max;i++){
                    for(int j=0;j<max;j++){
                        scanf("%d",&adj[i][j]);
                    }
                  }
                  break;
            case 2:printf("DFS Traversal:");
                   dfs(adj,vis,0);
                   break;
            default:printf("Invalid Choice..\n");
        }
    }
    while(option!=2);
}
//OUTPUT
1.Enter values in graph
2.DFS Traversal
3.Enter your choice:
1
Enter adjacency matrix:
0 1
1 0
1.Enter values in graph
2.DFS Traversal
3.Enter your choice:
2
DFS Traversal:0 1
Process returned 2 (0x2)   execution time : 12.828 s
Press any key to continue.

