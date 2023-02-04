#include<iostream>
using namespace std;
class Student
{
   char USN[9];
   float avg[6];
   float sub1[3],sub2[3],sub3[3],sub4[3],sub5[3],sub6[3];
   public:
   void input()
   {

     cout<<"Enter you USN"<<endl;
     cin>>USN;
     cout<<"Enter Maths marks"<<endl;
     for(int i=0;i<3;i++)
     {
         cin>>sub1[i];
     }
     cout<<"Enter DSC marks"<<endl;
     for(int i=0;i<3;i++)
     {
         cin>>sub2[i];
     }
     cout<<"Enter DLD marks"<<endl;
     for(int i=0;i<3;i++)
     {
         cin>>sub3[i];
     }
     cout<<"Enter WAD marks"<<endl;
     for(int i=0;i<3;i++)
     {
         cin>>sub4[i];
     }
     cout<<"Enter EED marks"<<endl;
     for(int i=0;i<3;i++)
     {
         cin>>sub5[i];
     }
     cout<<"Enter Java marks"<<endl;
     for(int i=0;i<3;i++)
     {
         cin>>sub6[i];
     }



   }
   int getMin(float a[3])
   {
       float min=a[0];
       int mini=0;
       for(int i=1;i<3;i++)
       {
           if(a[i]<min)
           {
               min=a[i];
               mini=i;
           }
       }
       return mini;
   }
   float calcAvg(float a[3],int mini)
   {
       float avg=0;
       if(mini!=-1)
       {
          for(int i=0;i<3;i++)
          {
              if(i!=mini)
              {
                  avg+=(a[i]/2.0f);
              }
          }
       }
       return avg;

   }
   void calc()
   {
       cout<<endl;
       cout<<"Average of best two marks of Maths are:";
       cout<<calcAvg(sub1,getMin(sub1));
       cout<<endl;
       cout<<"Average of best two marks of DSC are:";
       cout<<calcAvg(sub2,getMin(sub2));
       cout<<endl;
       cout<<"Average of best two marks of DLD are:";
       cout<<calcAvg(sub3,getMin(sub3));
       cout<<endl;
       cout<<"Average of best two marks of WAD are:";
       cout<<calcAvg(sub4,getMin(sub4));
       cout<<endl;
       cout<<"Average of best two marks of EED are:";
       cout<<calcAvg(sub5,getMin(sub5));
       cout<<endl;
       cout<<"Average of best two marks of Java are:";
       cout<<calcAvg(sub6,getMin(sub6));
       cout<<endl;
   }

};
int main()
{
   Student obj;
   obj.input();
   obj.calc();
}