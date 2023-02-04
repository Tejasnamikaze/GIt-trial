// Selection sort in C

#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) 
    {

      if (array[i] < array[min_idx])
        min_idx = i;
    }

    swap(&array[min_idx], &array[step]);
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int main() {
  int data[] = {20, 12, 10, 15, 2};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  printf("Sorted array in Acsending Order:\n");
  printArray(data, size);
}

//pattern matching
#include <stdio.h>
#include <string.h>
int main (){
   char txt[] = "tutorialsPointisthebestplatformforprogrammers";
   char pat[] = "a";
   int M = strlen (pat);
   int N = strlen (txt);
   for (int i = 0; i <= N - M; i++){
      int j;
      for (j = 0; j < M; j++)
         if (txt[i + j] != pat[j])
      break;
      if (j == M)
         printf ("Pattern matches at index %d \n", i);
   }
   return 0;
}
//quicksort
// Quick sort in C

#include <stdio.h>

void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

// function to find the partition position
int partition(int array[], int low, int high) {
  
  // select the rightmost element as pivot
  int pivot = array[high];
  
  // pointer for greater element
  int i = (low - 1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
        
      // if element smaller than pivot is found
      // swap it with the greater element pointed by i
      i++;
      
      // swap element at i with element at j
      swap(&array[i], &array[j]);
    }
  }

  // swap the pivot element with the greater element at i
  swap(&array[i + 1], &array[high]);
  
  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high);
    
    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);
    
    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}

// function to print array elements
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// main function
int main() {
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  
  int n = sizeof(data) / sizeof(data[0]);
  
  printf("Unsorted Array\n");
  printArray(data, n);
  
  // perform quicksort on data
  quickSort(data, 0, n - 1);
  
  printf("Sorted array in ascending order: \n");
  printArray(data, n);
}
//mergesort
// Merge sort in C

#include <stdio.h>  
  
/* Function to merge the subarrays of a[] */  
void merge(int a[], int beg, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - beg + 1;    
    int n2 = end - mid;    
      
    int LeftArray[n1], RightArray[n2]; //temporary arrays  
      
    /* copy data to temp arrays */  
    for (int i = 0; i < n1; i++)    
    LeftArray[i] = a[beg + i];    
    for (int j = 0; j < n2; j++)    
    RightArray[j] = a[mid + 1 + j];    
      
    i = 0; /* initial index of first sub-array */  
    j = 0; /* initial index of second sub-array */   
    k = beg;  /* initial index of merged sub-array */  
      
    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] <= RightArray[j])    
        {    
            a[k] = LeftArray[i];    
            i++;    
        }    
        else    
        {    
            a[k] = RightArray[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        a[k] = LeftArray[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        a[k] = RightArray[j];    
        j++;    
        k++;    
    }    
}    
  
void mergeSort(int a[], int beg, int end)  
{  
    if (beg < end)   
    {  
        int mid = (beg + end) / 2;  
        mergeSort(a, beg, mid);  
        mergeSort(a, mid + 1, end);  
        merge(a, beg, mid, end);  
    }  
}  
  
/* Function to print the array */  
void printArray(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
    printf("\n");  
}  
  
int main()  
{  
    int a[] = { 12, 31, 25, 8, 32, 17, 40, 42 };  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting array elements are - \n");  
    printArray(a, n);  
    mergeSort(a, 0, n - 1);  
    printf("After sorting array elements are - \n");  
    printArray(a, n);  
    return 0;  
}  
// Kruskals algorithm

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int ne=1,min_cost=0;
void main()
{
    int n,i,j,min,a,u,b,v,cost[20][20],parent[20];
    
    printf("Enter the no. of vertices:");
    scanf("%d",&n);
    printf("\nEnter the cost matrix:\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&cost[i][j]);
    for(i=1;i<=n;i++)
        parent[i]=0;
    printf("\nThe edges of spanning tree are\n");
    while(ne<n)
    {
        min=999;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(cost[i][j]<min)
                {
                    min=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        while(parent[u])
        {
            u=parent[u];
        }
        while(parent[v])
        {
            v=parent[v];
        }
        if(u!=v)
        {
        printf("Edge %d\t(%d->%d)=%d\n",ne++,a,b,min);
        min_cost=min_cost+min;
        parent[v]=u;
        }
        cost[a][b]=999;//COULD BE cost[b][a]==999
    }
        
printf("\nMinimum cost=%d\n",min_cost);
        
}
//PRIMS algorithm
#include<stdio.h>
int ne=1,min_cost=0;
void main()
{
    int n,i,j,min,cost[20][20],a,u,b,v,source,visited[20];
    printf("Enter the no. of nodes:");
    scanf("%d",&n);
    printf("Enter the cost matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
        scanf("%d",&cost[i][j]);
        }
    }
    for(i=1;i<=n;i++)
        visited[i]=0;
    printf("Enter the root node:");
    scanf("%d",&source);
    visited[source]=1;
    printf("\nMinimum cost spanning tree is\n");
    while(ne<n)
    {
        min=999;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
            if(cost[i][j]<min)
                if(visited[i]==0)
                continue;
            else
                {
                    min=cost[i][j];
                    a=u=i;
                    b=v=j;
                }
            }
        }
        if(visited[u]==0||visited[v]==0)
        {
            printf("\nEdge %d\t(%d->%d)=%d\n",ne++,a,b,min);
            min_cost=min_cost+min;
            visited[b]=1;
        }
        cost[a][b]=cost[b][a]=999;
    }
    printf("\nMinimum cost=%d\n",min_cost);
}
//DFS
#include<stdio.h> 
 
void DFS(int); 
int G[10][10],visited[10],n;    //n is no of vertices and graph is sorted in array G[10][10] 
 
void main() 
{ 
    int i,j; 
    printf("Enter number of vertices:"); 
    scanf("%d",&n); 
 
    //read the adjecency matrix 
    printf("\nEnter adjecency matrix of the graph:"); 
    for(i=0;i<n;i++) 
        for(j=0;j<n;j++) 
            scanf("%d",&G[i][j]); 
 
    //visited is initialized to zero 
    for(i=0;i<n;i++) 
        visited[i]=0; 
 
    DFS(0); 
} 
 
void DFS(int i) 
{ 
    int j; 
    printf("\n%d",i); 
    visited[i]=1; 
    for(j=0;j<n;j++) 
        if(!visited[j]&&G[i][j]==1) 
            DFS(j); 
} 
//bfs
#include<stdio.h>
void BFS(int a[20][20],int source,int visited[20],int n);
void main()
{
    int n,a[20][20],i,j,visited[20],source;
    printf("Enter the number of vertices:");
    scanf("%d",&n);
    printf("\nEnter the adjacency matrix:\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    for(i=1;i<=n;i++)
        visited[i]=0;
    printf("\nEnter the source node:");
    scanf("%d",&source);
    visited[source]=1;
    BFS(a,source,visited,n);
    for(i=1;i<=n;i++)
        {
        if(visited[i]!=0)
            printf("\n Node %d is reachable",i);
        else
            printf("\n Node %d is not reachable",i);
        }
}
    void BFS(int a[20][20],int source,int visited[20],int n)
    {
        int queue[20],f,r,u,v;
        f=0;
        r=-1;
        queue[++r]=source;
        while(f<=r)
        {
            u=queue[f++];
            for(v=1;v<=n;v++)
            {
                if(a[u][v]==1 && visited[v]==0)
                {
                queue[++r]=v;
                visited[v]=1;
                }
            } 
        } 
    }
//horspool
#include<stdio.h>

#define MAX 100
int t[MAX];
void shifttable(char p[]) {
	int i,j,m;
	m=strlen(p);
	for (i=0;i<MAX;i++)
	  t[i]=m;
	for (j=0;j<m-1;j++)
	  t[p[j]]=m-1-j;
}
int horspool(char src[],char p[]) {
	int i,j,k,m,n;
	n=strlen(src);
	m=strlen(p);
	printf("\nLength of text=%d",n);
	printf("\n Length of pattern=%d",m);
	i=m-1;
	while(i<n) {
		k=0;
		while((k<m)&&(p[m-1-k]==src[i-k]))
		   k++;
		if(k==m)
		   return(i-m+1); else
		   i+=t[src[i]];
	}
	return -1;
}
void main() {
	char src[100],p[100];
	int pos;
	printf("Enter the text in which pattern is to be searched:\n");
	gets(src);
	printf("Enter the pattern to be searched:\n");
	gets(p);
	shifttable(p);
	pos=horspool(src,p);
	if(pos>=0)
	  printf("\n The desired pattern was found starting from position %d",pos+1); else
	  printf("\n The pattern was not found in the given text\n");
}
//floyds
#include<stdio.h>
void floyd(int a[4][4], int n)
{
	for(int k=0;k<n;k++)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i][j]>a[i][k]+a[k][j])
				{
					a[i][j]=a[i][k]+a[k][j];
				}
		    }
	    }
	}
	printf("All Pairs Shortest Path is :\n");
		for(int i=0;i<n;i++)
	    {
	    	for(int j=0;j<n;j++)
	    	{
	    		printf("%d ",a[i][j]);
			}
	    	printf("\n");
		}
}
int main()
{
	int cost[4][4] = {{0, 3, 999, 5}, {2, 0, 999, 4}, {999, 1, 0, 999}, {999, 999, 2, 0}}; 
	int n = 4;

	floyd(cost,n);
}
//HEAPSORT
#include <stdio.h>
  void swap(int *a, int *b) 
  {
    int tmp = *a;
    *a = *b;
    *b = tmp;
  }
  
  void heapify(int arr[], int n, int i) {
    int max = i; 
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;
    
    if (leftChild < n && arr[leftChild] > arr[max])
      max = leftChild;
  
    if (rightChild < n && arr[rightChild] > arr[max])
      max = rightChild;
  
    if (max != i) 
    {
      swap(&arr[i], &arr[max]);
      heapify(arr, n, max);
    }
  }
  
  void heapSort(int arr[], int n) {
    
    for (int i = n / 2 - 1; i >= 0; i--)
      heapify(arr, n, i);
      
    for (int i = n - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]); 
      heapify(arr, i, 0); 
    }
  }

  void display(int arr[], int n) 
  {
    for (int i = 0; i < n; ++i)
      printf("%d ", arr[i]);
    printf("\n");
  }
  
  int main() {
    int arr[] = {11, 34, 9, 5, 16, 10,12,8};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array:\n");
    display(arr, n);
    heapSort(arr, n);
    printf("Sorted array:\n");
    display(arr, n);
  }
 // detect cycle 
 
#include<iostream>
#include<set>
#define NODE 5
using namespace std;

int graph[NODE][NODE] = {
   {0, 1, 0, 0, 0},
   {1, 0, 1, 1, 0},
   {0, 1, 0, 0, 1},
   {0, 1, 0, 0, 1},
   {0, 0, 1, 1, 0}
};

bool dfs(int vertex, set<int>&visited, int parent) {
   visited.insert(vertex);
   for(int v = 0; v<NODE; v++) {
      if(graph[vertex][v]) {
         if(v == parent)   
            continue;
         if(visited.find(v) != visited.end())    
            return true;
         if(dfs(v, visited, vertex))
            return true;
      }
   }
   return false;
}

bool hasCycle() {
   set<int> visited;     
   for(int v = 0; v<NODE; v++) {
      if(visited.find(v) != visited.end()) 
         continue;
      if(dfs(v, visited, -1)) {   
         return true;
      }
   }
   return false;
}

int main() {
   bool res;
   res = hasCycle();
   if(res)
      cout << "The graph has cycle." << endl;
   else
      cout << "The graph has no cycle." << endl;
}