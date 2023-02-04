#include <stdio.h>
#include <conio.h>S
struct node
{
    int value;
    struct node *next;
};

struct node *deleteion(struct node *head, int n)
{
    struct node *p, *q, *r;
    int l = 0;
    while (r->next != NULL)
    {
        l++;
        r = r->next;
    }
    int i = 0;
    while (i < l)
    {
        p = head;
        q = head;
        int sum = 0;
        while (p->next != NULL)
        {
            sum = sum + p->value;
            p = p->next;
        }
        if (sum <= n)
        {
            return q;
        }
        else
        {
            i++;
            head = head->next;
            q->next = NULL;
        }
    }
    void main()
    {
        int n = 4;
        struct node *newNode, *tmp;
        int num, i;
        firstnode = (struct node *)malloc(sizeof(struct node));

        if (firstnode == NULL) // check whether the firstnode is NULL and if so no memory allocation
        {
            printf(" Memory can not be allocated.");
        }
        else
        {
            // reads data for the node through keyboard
            printf(" Input data for node 1 : ");
            scanf("%d", &num);
            firstnode->num = num;
            firstnode->next = NULL; // links the address field to NULL
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
                    scanf(" %d", &num);

                    newNode->num = num;   // links the num field of newNode with num
                    newNode->next = NULL; // links the address field of newNode with NULL

                    tmp->next = newNode; // links previous node i.e. tmp to the newNode
                    tmp = tmp->next;
                }
            }
        }
        struct node *newNode1;
        newnode1 = deletion(newNode, 20);
        while (newnode1 != NULL)
        {
            printf("%d", newNode1->value, " ");
        }
    }
