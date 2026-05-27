#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

/* Function to create linked list */
struct node *create_node(int n)
{
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *newnode = NULL;

    for(int i = 0; i < n; i++)
    {
        // Allocate memory for node
        newnode = (struct node *)malloc(sizeof(struct node));

        printf("enter the data of %d node : ", i + 1);
        scanf("%d", &newnode->data);

        // Last node points to NULL
        newnode->link = NULL;

        // First node
        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            // Link new node
            temp->link = newnode;

            // Move temp forward
            temp = newnode;
        }
    }

    return head;
}

/* Function to reverse linked list */
struct node *reverse_linked_list(struct node *head)
{
    // prev points to previous node
    struct node *prev = NULL;

    // current points to current node
    struct node *current = head;

    // next stores next node address
    struct node *next = NULL;

    // Traverse entire linked list
    while(current != NULL)
    {
        // Store next node
        next = current->link;

        // Reverse link
        current->link = prev;

        // Move prev forward
        prev = current;

        // Move current forward
        current = next;
    }

    // prev becomes new head
    head = prev;

    return head;
}

int main()
{
    int n;

    printf("Enter the no.of nodes: ");
    scanf("%d", &n);

    // Create linked list
    struct node *head = create_node(n);

    struct node *temp = head;

    /* Display original linked list */
    printf("\nOriginal Linked List:\n");

    while(temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->link;
    }

    printf("NULL\n");

    // Reverse linked list
    head = reverse_linked_list(head);

    /* Display reversed linked list */
    temp = head;

    printf("\nReversed Linked List:\n");

    while(temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->link;
    }

    printf("NULL\n");

    return 0;
}