#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *create_node(int n){

    //intialize is mandatory as by default it contain garbage values
   struct node *head=NULL;
   struct node *temp=NULL;
   struct node *newnode=NULL;

   for(int i=0;i<n;i++){
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data of %d node :",i+1);
    scanf("%d",&newnode->data);
    newnode->link=NULL;
    if(head==NULL){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->link=newnode;
        temp=newnode;
    }
   }
   return head;
}
struct node * insert_node_at_end(struct node *head){
    struct node *temp=NULL;
    temp=head;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data node :");
    scanf("%d",&newnode->data);
    newnode->link=NULL;
    while(temp->link !=NULL){
        temp=temp->link;
    }
    temp->link=newnode;
    temp=newnode;
    return head;
}
int main(int argc, char const *argv[])
{
    int n,i;
    printf("Enter the no.of nodes: ");
    scanf(" %d",&n);
    struct node * temp=NULL;//head contains the address of the first node 
    struct node *head = create_node(n);
    //for printing the nodes 
    temp=head;
    printf("\nLinked List before insertion at the end:\n");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->link;
    }
    printf("NULL \n");
    head=insert_node_at_end(head);
    temp=head;
    printf("\nLinked List after insertion at the end:\n");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->link;
    }
    printf("NULL \n");
    return 0;
}


