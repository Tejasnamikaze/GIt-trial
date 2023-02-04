using namespace std;
#include<iostream>

class emp
{
    public:
    int n;
    void read();
    void print();

}e[20];
void emp::read()
{
   
   cout<<"enter number=\n";
    cin>>n;
    print();
}
void emp::print()
{
    cout<<"\n the entered number is="<<n;
}
int main()
{
    for(int i=0;i<20;i++)
    {
        e[i].read();
        
    }
}