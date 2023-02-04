#include<iostream>
using namespace std;
class vehicle
{
    string rno;
    static int count;
    public:
    
   void getregno();
    vehicle()
    {
        count++;
    }
    void setregno()
    {
        cout<<"Enter reg no"<<endl;
        cin>>rno;
    }
    /*void getregno()
    {
        cout<<endl<<"The reg no is:"<<rno<<endl;
    }*/
    static void vcount()
    {
        cout<<endl<<"no of vehicle:"<<count<<endl;
    }
    ~vehicle()
    {
        count--;
        cout<<"the current no of obj is"<<count<<endl;
    }
};
void vehicle:: getregno()
    {
        cout<<endl<<"The reg no is:"<<rno<<endl;
    }
int vehicle::count;
int main()
{
   cout<<"enter no of obj";
   int n,i;
   cin>>n;
   
  
      /*vehicle v1;
  v1.setregno();
  vehicle::vcount();
  v1.getregno();
  }
  vehicle::vcount();
  vehicle v2;
  v2.setregno();
  vehicle::vcount();
  v2.getregno();
*/
  //vehicle obj[n];
   
   for( i=0;i<n;i++)
   {
       vehicle obj[i];
      // vehicle obj[n];
       obj[i].setregno();
       obj[i].getregno();
       
       vehicle::vcount();

   }
   
   return 0;

}