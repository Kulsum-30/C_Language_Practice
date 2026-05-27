/*
ALGORITHM

1. Start the program.
2. Define a structure node with:
      - data field
      - link field pointing to next node
3. Read the number of nodes from the user.
4. Create the linked list:
      a. Allocate memory for each node.
      b. Read data into the node.
      c. Set link as NULL.
      d. Attach node to the linked list.
5. Display the created linked list.
6. Read the position where new node should be inserted.
7. Create a new node for insertion.
8. If position is 1:
      a. Insert node at beginning.
9. Else:
      a. Traverse to previous node of required position.
      b. Adjust links.
10. Display updated linked list.
11. Stop.
*/

#include<stdio.h>
#include<stdlib.h>

/* Structure definition for linked list node */
struct node
{
    int data;
    struct node *link;
};

/* Function to create linked list */
struct node *create_node(int n)
{
    // Initialize pointers
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *newnode = NULL;

    // Loop to create n nodes
    for(int i = 0; i < n; i++)
    {
        // Allocate memory for new node
        newnode = (struct node *)malloc(sizeof(struct node));

        // Read data into node
        printf("enter the data of %d node : ", i + 1);
        scanf("%d", &newnode->data);

        // Last node points to NULL
        newnode->link = NULL;

        // If first node
        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            // Connect new node to linked list
            temp->link = newnode;

            // Move temp to newly created node
            temp = newnode;
        }
    }

    // Return head pointer
    return head;
}

/* Function to insert node at given position */
struct node *insert_at_position(struct node *head, int position)
{
    struct node *temp;

    // Allocate memory for new node
    struct node *newnode = (struct node *)malloc(sizeof(struct node));

    // Read data for new node
    printf("enter the data of node : ");
    scanf("%d", &newnode->data);

    // Initialize link as NULL
    newnode->link = NULL;

    // Insert at beginning
    if(position == 1)
    {
        newnode->link = head;
        head = newnode;
    }
    else
    {
        temp = head;

        // Traverse to previous node
        for(int i = 1; i < position - 1; i++)
        {
            temp = temp->link;
        }

        // Check invalid position
        if(temp == NULL)
        {
            printf("Invalid position");
            return head;
        }

        // Link adjustments
        newnode->link = temp->link;
        temp->link = newnode;
    }

    // Return updated head
    return head;
}

/* Main function */
int main()
{
    int n;

    // Read number of nodes
    printf("Enter the no.of nodes: ");
    scanf("%d", &n);

    // Head stores address of first node
    struct node *head = create_node(n);

    // Temporary pointer for traversal
    struct node *temp = NULL;

    /* Display original linked list */
    temp = head;

    printf("\nLinked List:\n");

    while(temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->link;
    }

    printf("NULL\n");

    int position;

    // Read insertion position
    printf("enter position to insert: ");
    scanf("%d", &position);

    // Insert node at required position
    head = insert_at_position(head, position);

    /* Display updated linked list */
    temp = head;

    printf("\nUpdated Linked List:\n");

    while(temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->link;
    }

    printf("NULL\n");

    return 0;
}