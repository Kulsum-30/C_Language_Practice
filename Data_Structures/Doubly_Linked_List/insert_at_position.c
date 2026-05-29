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

struct node *insert_data_at_position(struct node *head, int position){

    struct node *temp = head;

    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    printf("enter the data:");
    scanf("%d", &newnode->data);

    newnode->prev_node = NULL;
    newnode->next_node = NULL;

    // Insert at beginning
    if(position == 1){

        newnode->next_node = head;

        if(head != NULL){
            head->prev_node = newnode;
        }

        head = newnode;

        return head;
    }

    // Move temp to previous node of insertion point
    for(int i = 1; i < position - 1 && temp != NULL; i++){
        temp = temp->next_node;
    }

    // Invalid position
    if(temp == NULL){
        printf("Invalid Position");
        return head;
    }

    newnode->next_node = temp->next_node;
    newnode->prev_node = temp;

    if(temp->next_node != NULL){
        temp->next_node->prev_node = newnode;
    }

    temp->next_node = newnode;

    return head;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("enter the no.of nodes:");
    scanf("%d",&n);
    struct node *head = create_nodes(n);
    printf("\nDoubly Linked List:\n");
    display_only_data(head);
    printf("\n Linked List after insertion \n");
    int position;
    printf("enter position");
    scanf("%d",&position);
    head= insert_data_at_position(head,position);
    display_only_data(head);
    return 0;
}
