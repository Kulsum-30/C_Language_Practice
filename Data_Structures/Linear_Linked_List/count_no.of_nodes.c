// #include<stdio.h>
// #include<stdlib.h>

// struct node
// {
//     int data;
//     struct node *link;
// };

// int main()
// {
//     // creating nodes manually
//     struct node *head = (struct node *)malloc(sizeof(struct node));
//     struct node *second = (struct node *)malloc(sizeof(struct node));
//     struct node *third = (struct node *)malloc(sizeof(struct node));

//     // assigning data
//     head->data = 10;
//     second->data = 20;
//     third->data = 30;

//     // linking nodes
//     head->link = second;
//     second->link = third;
//     third->link = NULL;

//     // counting nodes
//     int count = 0;
//     struct node *temp = head;

//     while(temp != NULL)
//     {
//         count++;
//         temp = temp->link;
//     }

//     printf("Count of nodes: %d\n", count);

//     return 0;
// }

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

int count_nodes(struct node * head){
    struct node *temp;
    temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->link;
        count++;
    }
    return count;
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
    //count of nodes
    int result=count_nodes(head);
    printf("count of no.of nodes of linked list : %d",result);
    return 0;
}


