// Program 6 - Queues 1.Queue using arrays
#include <stdio.h>
int queue[10],
    size = 10;
int top = -1, rear = -1;
void eq(int n)
{
    if (rear == (size - 1))
    {
        printf("Queue is full\n");
    }
    else if (rear == -1)
    {
        top++;
        rear++;
        queue[rear] = n;
    }
    else
    {
        rear++;
        queue[rear] = n;
    }
}
void dq()
{
    if (top == -1)
    {
        printf("Empty queue\n");
    }
    else if (top == rear)
    {
        top = rear = -1;
    }
    else
    {
        printf("Removed element-%d\n", queue[top]);
        top++;
    }
}
void display()
{
    if (top == rear)
    {
        printf("Empty queue\n");
    }
    else
    {
        for (int i = top; i <= rear; i++)
        {
            printf("%d\t", queue[i]);
        }
    }
}
void peek()
{
    if (top == -1)
    {
        printf("Empty queue\n");
    }
    else
    {
        printf("First element-%d\n", queue[top]);
    }
}
int main()
{
    int c, n;
loop:
    printf("1 for enqueue\n2 for dequeue\n3 for display\n4 for peek\n5 to
exit-\n");
    scanf("%d",&c);
switch(c) {
    case 1:
        printf("Enter element-");
        scanf("%d", &n);
        eq(n);
        goto loop;
    case 2:
        dq();

        goto loop;
    case 3:
        display();
        goto loop;
    case 4:
        peek();
        goto loop;
    case 5:
        break;
    }
return 0;
} /*
 2.Queue using LL
 #include <stdio.h>
 #include <stdlib.h>
     struct Student
 {
     int rno;
     struct Student *link;
 } * top, *end;
 void dequeue()
 {
     if (top == NULL)
     {
         printf("Empty queue");
     }
     else if (top == end)
     {
         top = end = NULL;
     }
     else
     {
         top = top->link;
     }
 }
 void enqueue()
 {
     struct Student *temp = (struct Student *)malloc(sizeof(struct Student));
     printf("Enter rno-");
     scanf("%d", &temp->rno);

     if (top == NULL)
     {
         top = end = temp;
         temp->link = NULL;
     }
     else
     {
         end->link = temp;
         temp->link = NULL;
         end = temp;
     }
 }
 void display()
 {
     struct Student *temp = top;
     while (temp->link != NULL)
     {
         printf("Rno-%d\n", temp->rno);
         temp = temp->link;
     }
     printf("Rno-%d\n", temp->rno);
 }
 int main()
 {
     top = end = NULL;
     int ch;
 loop:
     printf("Enter 1 to enqueue\nEnter 2 to dequeue\nEnter 3 to
 display\nEnter 4 to exit-");
     scanf("%d",&ch);
 switch(ch) {
     case 1:
         enqueue();
         goto loop;
     case 2:
         dequeue();
         goto loop;
     case 3:
         display();
         goto loop;
     case 4:
         break;

  }
 return 0;
 }
 3.Circular queue using arrays
 #include <stdio.h>
     int queue[5],
     size = 5;
 int top = -1, rear = -1;
 void eq(int n)
 {
     if ((rear == (size - 1) && top == 0) || top == (rear + 1))
     {
         printf("Queue is full\n");
     }
     else if (rear == -1)
     {
         top++;
         rear++;
         queue[rear] = n;
     }
     else
     {
         rear = (rear + 1) % size;
         queue[rear] = n;
     }
 }
 void dq()
 {
     if (top == -1)
     {
         printf("Empty queue\n");
     }
     else if (top == rear)
     {
         printf("Removed element-%d\n", queue[top]);
         top = rear = -1;
     }
     else
     {
         printf("Removed element-%d\n", queue[top]);
         top = (top + 1) % size;
     }
 }
 void display()
 {
     int i;
     if (top == -1)
     {
         printf("Empty queue\n");
     }
     else
     {
         for (i = top; i != rear; i = (i + 1) % size)
         {
             printf("%d\t", queue[i]);
         }
         printf("%d\n", queue[i]);
     }
 }
 int main()
 {
     int c, n;
 loop:
     printf("1 for enqueue\n2 for dequeue\n3 for display\n4 to exit-\n");
     scanf("%d", &c);
     switch (c)
     {
     case 1:
         printf("Enter element-");
         scanf("%d", &n);
         eq(n);
         goto loop;
     case 2:
         dq();
         goto loop;
     case 3:
         display();
         goto loop;
     case 4:
         break;
     }
     return 0;
 }*/