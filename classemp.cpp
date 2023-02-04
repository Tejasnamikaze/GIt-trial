using namespace std;
#include<iostream>

class emp
{
    public:
    int n,id,sal;
    void read();
    void print();

}e[3];
emp()
{
    id=0;
    sal=0;

}
emp(int x)
{
    id=x;
    sal=0;

}
emp(int x,int y)
{
    id=x;
    sal=y;
}
void emp::read()
{
   
   cout<<"enter id=\n";
    cin>>id;
    print();
}
void emp::print()
{
    cout<<"\n the entered id is="<<id;
    cout<<"\n the entered sal="<<sal;
    
}
int main()
{
    /*for(int i=0;i<3;i++)
    {
        e[i].read();
        
    }*/
    emp e,e1(10),e2(20,300);
    e.print();
    e1.print();
    e2.print();
    
}