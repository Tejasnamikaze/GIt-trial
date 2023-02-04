#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;

} * firstnode, *temp, *newnode;

void createnodes(int n)
{

    firstnode = (struct node *)malloc(sizeof(struct node *));
    if (firstnode == NULL)
        printf("memory not allocated");

    else
    {
        printf("\n Enter 1st node value=");
        scanf("%d", &firstnode->data);
        firstnode->next = NULL;
        firstnode->prev = NULL;
        temp = firstnode;
        //newnode = firstnode; //very important
        for (int i = 2; i <= n; i++)
        {
            newnode = NULL;
            printf(" \n Enter %d node's value=", i);
            newnode = (struct node *)malloc(sizeof(struct node));
            scanf("%d", &newnode->data);
            newnode->prev = temp;
            temp->next = newnode;
            newnode->next = NULL;
            temp = newnode;
            if (i == n)
                newnode->next = NULL;
            else
                newnode = newnode->next;
        }
    }
}

void inserthead(int val)
{
    struct node *temp1;
    temp1 = (struct node *)malloc(sizeof(struct node));
    temp1->data = val;
    temp1->prev = NULL;
    temp1->next = firstnode;
    firstnode->prev = temp1;
    firstnode = temp1;
}
void addend(int val)
{
    struct node *temp1;
    temp1 = (struct node *)malloc(sizeof(struct node));
    temp1->data = val;
    temp1->prev = newnode;
    temp1->next = NULL;
    newnode->next = temp1;
    newnode = temp1;
}
void addinbtw(int val, int pos, int z)
{
    int k = val;
    struct node *x, *y, *new, *head;
    new = (struct node *)malloc(sizeof(struct node));
    int c = 0;
    x = firstnode;
    y = firstnode->next;
    for (int i = 1; i < z; i++)
    {
        c++;
        if (pos == 0)
            inserthead(k);
        if (pos == z)
            addend(k);
        if (c == pos)
        {

            new->data = val;
            new->prev = x;
            new->next = y;
            x->next = new;
            y->prev = new;
        }
        x = x->next;
        y = y->next;
    }
    printf("\n added in btw");
    head = firstnode;
    while (head != NULL)
    {
        printf("\nThe nodes are= %d", head->data);
        head = head->next;
    }
}
void print(struct node *head)
{
    while (head != NULL)
    {
        printf("\nThe nodes are= %d", head->data);
        head = head->next;
    }
}
void deletebeg()
{
    struct node *temp1;
    temp1 = firstnode;
    temp1->next->prev = NULL;
    firstnode = firstnode->next;
    free(temp1);
}
void deleteend()
{
    struct node *temp1;
    temp1 = newnode;
    temp1->prev->next = NULL;
    newnode = newnode->prev;
    free(temp1);
}
void deletepos(int pos, int z)
{

    struct node *x, *y;

    int c = 0, d = 0;
    x = firstnode;
    y = firstnode->next;
    for (int i = 1; i < z && d == 0; i++)
    {
        c++;

        if (pos == z)
        {
            printf(";;;");
            deleteend();
            d = 1;
        }
        if (pos == c)
        {
            if (pos == 1)
            {
                printf(",,,");
                deletebeg();
                d = 1;
            }
            else
            {
                printf("...");
                x->prev->next = y;
                y->prev = x->prev;
                free(x);
                d = 1;
            }
        }

        x = x->next;
        y = y->next;
    }
}
int main()
{
    int n, v, e, m, p, z, k;
    printf("enter the number of doublu linked list nodes you wanna create=");
    scanf("%d", &n);
    createnodes(n);
    z = n;
    printf("\nEnter pos to be deleted\n");
    scanf("%d", &k);
    deletepos(k, z);
    print(firstnode);
    /*printf("\nDeletion in the beg\n");
    deletebeg();
    print(firstnode);*/
    /* printf("\nDeletion in the end\n");
    deleteend();
    print(firstnode);
*/
    /*printf("\n Enter value to be added in the beginning");
    scanf("%d", &v);
    inserthead(v);
    print(firstnode);
    printf("\n Enter value to be added in the ending");
    scanf("%d", &e);
    addend(e);
    print(firstnode);*/
    /*printf("\n Enter value to be added in btw and pos and no of nodes");
    scanf("%d%d%d", &m, &p, &z);
    addinbtw(m, p, z);*/

    return 0;
}
//Represent a node of the doubly linked list
/*struct node
{
    int data;
    struct node *previous;
    struct node *next;
};

//Represent the head and newnode of the doubly linked list
struct node *head, *newnode = NULL;

//addAtStart() will add a node to the starting of the list
void addAtStart(int data)
{
    //Create a new node
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;

    //If list is empty
    if (head == NULL)
    {
        //Both head and newnode will point to newnode
        head = newnode = newnode;
        //head's previous will point to NULL
        head->previous = NULL;
        //newnode's next will point to NULL, as it is the last node of the list
        newnode->next = NULL;
    }
    //Add newnode as new head of the list
    else
    {
        //head's previous node will be newnode
        head->previous = newnode;
        //newnode's next node will be head
        newnode->next = head;
        //newnode's previous will point to NULL
        newnode->previous = NULL;
        //newnode will become new head
        head = newnode;
    }
}

//display() will print out the nodes of the list
void display()
{
    //Node current will point to head
    struct node *current = head;
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("Adding a node to the start of the list: \n");
    while (current != NULL)
    {
        //Prints each node by incrementing pointer.
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    //Adding 1 to the list
    addAtStart(1);
    display();
    //Adding 2 to the list
    addAtStart(2);
    display();
    //Adding 3 to the list
    addAtStart(3);
    display();
    //Adding 4 to the list
    addAtStart(4);
    display();
    //Adding 5 to the list
    addAtStart(5);
    display();

    return 0;
}*/