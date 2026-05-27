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
struct node *delete_at_paticular_position(struct node *head,int position){
    struct node *temp=head,*prev;

    // Check empty list
    if(head == NULL)
    {
        printf("List is empty\n");
        return head;
    }

    if(position==1){
        head=temp->link;
        free(temp);
    }
    else{
        for(int i=0;i<position-1 && temp!=NULL;i++){
          prev=temp;
          temp=temp->link;
        }
        if(temp==NULL){
            printf("invalid position");
            return head;
        }
        prev->link=temp->link;
        free(temp);
        return head;

    }
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
    printf("\nLinked List:\n");
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->link;
    }
    printf("NULL \n");
    return 0;
}


