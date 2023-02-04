#include<stdio.h>
#include<stdlib.h>
void createNodeList(int n);
void addnode();
void displayList();
void addnodeb();
 void addnodeend();
 void max();
struct node 
{
    int num;                        //Data of the node
    struct node *next;           //Address of the next node
}*firstnode,*n1;
 


int main()
{
    max();
    
     addnode();
}

  void createNodeList(int n)
{
    struct node *newNode, *tmp;
    int num, i;
    firstnode = (struct node *)malloc(sizeof(struct node));
 
    if(firstnode == NULL) //check whether the firstnode is NULL and if so no memory allocation
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
        for(i=2; i<=n; i++)
        {
 newNode = (struct node *)malloc(sizeof(struct node));
            if(newNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
 
                newNode->num = num;      // links the num field of newNode with num
                newNode->next = NULL; // links the address field of newNode with NULL
 
                tmp->next = newNode; // links previous node i.e. tmp to the newNode
                tmp = tmp->next; 
            }
        }
    }
  
}
void addnode()
{   int n;
    printf("enter number of nodes");
     scanf("%d",&n);
     createNodeList(n);
    
    struct node*t,*t1;
    n1=NULL;
    n1=(struct node*)malloc(sizeof(struct node));

    printf("enter the new node=");
    scanf("%d",&n1->num);
    n1->next=NULL;
    t=firstnode;
    t1=firstnode->next;
    if(((n1->num)<(t->num))&& ((n1->num)<(t1->num)))
    {
        addnodeb();
        
    }
    else if(((n1->num)>(t->num))&& ((n1->num)>(t1->num)))
    {
        addnodeend();
    }
    else 
    {
        
    
    while(t1!=NULL)
    {
        if(((n1->num)>(t->num))&& ((n1->num)<(t1->num)))
        {
            t->next=n1;
            n1->next=t1;

        }
        t=t->next;
        t1=t->next;
    }
    displayList();
    }
}

void displayList()
{
    struct node *tmp;
    if(firstnode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = firstnode;
        int i=1;
        while(tmp != NULL)
        {
            printf(" Node %d Data  = %d\n",i, tmp->num);       // prints the data of current node
            tmp = tmp->next;// advances the position of current node
            i++;        
        }
    }
}
 void addnodeb()
    {
        struct node *t;
        
        t=firstnode; //first node is global as created outside
        n1->next=t;
        t=n1;//new first node
        int i=1;
        while(t!=NULL)
        {
            printf("node %d data=%d\n",i,t->num);
            t=t->next;
            i++;   }
        
    }
  void addnodeend()
    { 
   

         struct node *t;
        
        t=firstnode; 

        while(t!=NULL)
        {
            
            if(t->next==NULL)
            {
                t->next=n1;
                t=n1;
                break;
            }
            t=t->next;
            
        }
        displayList();
    }

void max()
{
    createNodeList(5);
    struct node *temp,*temp1;
    temp=firstnode;
    temp1=firstnode->next;
    int max=0;
    while(temp1!==NULL)
    {
        if(temp1->num>temp->data)
        max=temp1->num;
        else
        max=temp->num;

        temp=temp->next;
        temp1=temp1->next;

    }
    printf("max element=%d",max);
}
void split()
{
    struct node* h1,*h2,*t,*newnode;
   h1 =(struct node*)malloc(sizeof(struct node));
     h2=(struct node*)malloc(sizeof(struct node));
     //h1->next=NULL;
     h1=NULL;
     
     h2->next=NULL;
     createNodeList(5);
     t=firstnode;
     while(t!=NULL)
     {
         if(t->data%2==0)
         {
             if(h1->data==NULL)
             {
                 h1->data==temp->data
             }
             newnode=(struct node*)malloc(sizeof(struct node));
             newnode->num=t->data;
             h1->next=newnode;
             newnode->next=NULL;
         h1->data=t->data;
        
     }
     }
      tmp = h1;
        int i=1;
        while(tmp != NULL)
        {
            printf(" Node %d Data  = %d\n",i, tmp->num);       // prints the data of current node
            tmp = tmp->next;// advances the position of current node
            i++;        
        }
}


