
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
} * firstnode;
void push();
int pop();
void createNodeList(int n);
void reverse();
void displayList();
void push(int val)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    if (t == NULL)
    {
        printf("linkedlist not available");
    }
    else
    {
        if (firstnode == NULL) //inserting in the beginning
        {
            t->link = NULL;
            t->data = val;
            firstnode = t;
        }
        else
        {
            t->data = val;
            t->link = firstnode;
            firstnode = t;
        }
        printf("item pushed= %d\n", val);
    }
}
int pop()
{
    struct node *t;
    int i;
    if (firstnode == NULL)
        return -1;
    else
    {
        i = firstnode->data;
        t = firstnode;
        firstnode = firstnode->link;
        free(t);
        return i;
    }
}
void createNodeList(int n)
{
    struct node *newNode, *tmp;
    int data, i;
    firstnode = (struct node *)malloc(sizeof(struct node));

    if (firstnode == NULL) //check whether the firstnode is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
        // reads data for the node through keyboard
        printf(" Input data for node 1 : ");
        scanf("%d", &data);
        firstnode->data = data;
        firstnode->link = NULL; // links the address field to NULL
        tmp = firstnode;
        // Creating n nodes and adding to linked list
        for (i = 2; i <= n; i++)
        {
            newNode = (struct node *)malloc(sizeof(struct node));
            if (newNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &data);

                newNode->data = data; // links the data field of newNode with data
                newNode->link = NULL; // links the address field of newNode with NULL

                tmp->link = newNode; // links previous node i.e. tmp to the newNode
                tmp = tmp->link;
            }
        }
    }
}
void reverse()
{
    printf("noumber of nodes in a list=");
    int a;
    scanf("%d", &a);
    createNodeList(a);
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    firstnode = t;
    t->link = NULL;
    for (int i = 1; i <= a; i++)
    {
        //t->data=pop();
        //t=t->link;
        printf("%d \n", pop());
    }
    //t->link=NULL;
    displayList();
}

void displayList()
{
    struct node *tmp;
    if (firstnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = firstnode;
        int i = 1;
        while (tmp != NULL)
        {
            printf(" Node %d Data= %d\n", i, tmp->data); // prints the data of current node
            tmp = tmp->link;                             // advances the position of current node
            i++;
        }
    }
}

int main()
{

    push(20);
    push(22);
    push(67);
    displayList();
    pop();
    pop();
    displayList();

    pop();
    displayList();
    pop();
    displayList();
    // reverse();
}