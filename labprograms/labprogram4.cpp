#include<iostream>
using namespace std;

class matrix
{
    public:
    int m,n;
    int mat[30][30];
    
    void read()
    {
     cout<<"enter row and col :";
     cin>>m>>n;
     cout<<"enter vlaues";
     for(int i=0;i<m;i++)
      for(int j=0;j<n;j++)
      cin>>mat[i][j];   
    }
    friend void transpose(matrix obj);
};
void transpose(matrix obj)
{
    cout<<"the transpose is ";
    for(int i=0;i<obj.n;i++)
    { 
        cout<<endl;
     for(int j=0;j<obj.m;j++)
     {
      cout<<" "<<obj.mat[j][i];
     }

    }
}
int main()
{
    matrix o;
    o.read();
    transpose(o);
    return 0;
}
