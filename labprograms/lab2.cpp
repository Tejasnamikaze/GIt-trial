#include<iostream>
using namespace std;
class student
{
    private:
      string usn;
      double t1[3],t2[3],t3[3],t4[3];
      double avg;
      public:
      void input(){
          int i;
          cout<<"enter usn"<<endl;
          cin>>usn;
          cout<<endl<<"enter sub1 :";
          for(i=0;i<3;i++)
          cin>>t1[i];
          cout<<endl<<"enter sub2 :";
          for(i=0;i<3;i++)
          cin>>t2[i];
          cout<<endl<<"enter sub3 :";
          for(i=0;i<3;i++)
          cin>>t3[i];
          cout<<endl<<"enter sub4 :";
          for(i=0;i<3;i++)
          cin>>t4[i];
      }
      int getmin(double a[3])
      {
          double min=a[0];
          int mini=0;
          for(int i=0;i<3;i++)
          {
              if(a[i]<min)
              {
              min=a[i];
              mini=i;
              }

          }
          return mini;
      }
      double calcavg(double a[3],int m)
      {
          double avg=0.0;
          for(int i=0;i<3;i++)
          {
              if(i!=m)
              avg=avg+a[i];
          }
          return avg/2.0;
      }
      void cal()
      {
          cout<<endl<<"avg marks:"<<calcavg(t1,getmin(t1));
          cout<<endl<<"avg marks:"<<calcavg(t2,getmin(t2));
          cout<<endl<<"avg marks:"<<calcavg(t3,getmin(t3));
          cout<<endl<<"avg marks:"<<calcavg(t4,getmin(t4));
      }

     

};
int main()
{
    student s;
    s.input();
    s.cal();
    return 0;
}