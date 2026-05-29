#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *previous;
    struct node * next;
};

struct node *create_nodes(int n){
    struct node *head=NULL;
    struct node *temp=NULL;
    for(int i=0;i<n;i++){
        struct node *newnode=(struct node *)malloc(sizeof(struct node));
        printf("enter %d data",i+1);
        scanf("%d",&newnode->data);
        newnode->previous=NULL;
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            newnode->previous=temp;
            temp=newnode;
            if(head!=NULL){
                newnode->next=head;
                head->previous=newnode;
            }
        }
    }
    return head;
}
struct node *insert_at_begining(struct node *head){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter the struct node data:");
    scanf("%d",&newnode->data);
    newnode->previous=NULL;
    newnode->next=NULL;

      // empty list
    if(head == NULL)
    {
        newnode->next = newnode;
        newnode->previous = newnode;
        return newnode;
    }

    struct node *last = head->previous;

    newnode->next = head;
    newnode->previous = last;

    last->next = newnode;
    head->previous = newnode;

    head = newnode;

    return head;
}
void display(struct node *head){
    if(head == NULL){
        printf("List is empty\n");
        return;
    }

    struct node *temp = head;

    do{
        printf("%d <-> ", temp->data);
        temp = temp->next;
    } while(temp != head);

    printf("(back to head)\n");
}

int main(int argc, char const *argv[])
{
    int n;
    struct node *head;
    printf("enter no.of nodes");
    scanf("%d",&n);
    head=create_nodes(n);
    display(head);
    head=insert_at_begining(head);
    printf("\nenter the inserted list\n");
    display(head);
    return 0;
}
