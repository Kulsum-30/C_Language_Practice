#include<stdio.h>
#include <stdlib.h>

struct node    //a node have two parts data and link part 
{
    int data;
    struct node *link;
};
int main(int argc, char const *argv[])
{   struct node *newnode=(struct node *) malloc (sizeof(struct node )); // allocating dynamic memory to the node and hear creation of node takes place
    newnode->data =45; //data is given by user
    newnode->link=NULL;//address of the next node
    printf("%d",newnode->data);
    return 0;
}

