#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * prev_node;
    struct node * next_node;
};
struct node *create_nodes(int n){
    struct node *head=NULL;
    struct node *temp=NULL;
    for(int i=0;i<n;i++){
        struct node *newnode=(struct node *)malloc(sizeof(struct node));
        newnode->prev_node=NULL;
        newnode->next_node=NULL;
        printf("enter the data of %d node:",i+1);
        scanf("%d",&newnode->data);
        if(head == NULL){
            head=newnode;
            temp=newnode;
        }
        else{
        temp->next_node=newnode;
        newnode->prev_node=temp;
        temp=newnode;
        }
}
  return head;
}
struct node *delete_at_end(struct node *head){
    struct node *temp=head;
    while(temp->next_node!=NULL){
        temp=temp->next_node;
    }
    temp->prev_node->next_node=NULL;
    free(temp);
    return head;
}
void display_only_data(struct node *head){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        if(temp->next_node !=NULL){
            printf("<->");
        }
        temp=temp->next_node;
    }
}


int main(int argc, char const *argv[])
{
    int n;
    printf("enter the no.of nodes:");
    scanf("%d",&n);
    struct node *head = create_nodes(n);
    printf("\nDoubly Linked List:\n");
    display_only_data(head);
    printf("\n Doubly Linked List after deletion \n");
   head= delete_at_end(head);
   display_only_data(head);
    return 0;
}
