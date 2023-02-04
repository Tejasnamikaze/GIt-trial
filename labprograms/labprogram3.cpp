#include<iostream>
using namespace std;
class complex
{
    int real;
    int imag;
    public:
    friend complex add(int a,complex s);
    friend complex add(complex s1,complex s2);
    void print();
   

};
 complex add(int a,complex s)
{
    complex t;
    cout<<"enter real and imag for s to be added with a(5)=";
    cin>>s.real>>s.imag;
    t.real=a+s.real;
    t.imag=s.imag;
    return t;
}
 complex add(complex s1,complex s2)
{
  cout<<"enter real and imag for s1=";
    cin>>s1.real>>s1.imag; 
    complex t;
    cout<<"enter real and imag for s2=";
    cin>>s2.real>>s2.imag;
    t.real=s1.real+s2.real;
    t.imag=s1.imag+s2.imag;
    return t;
}
 void complex::print()
    {
        cout<<" The real:"<<real<<" the imag:"<<imag;
        //cout<<"the real:"<<b.real<<"the imag:"<<b.imag; 
    }
int main()
{
    complex s1,s2,s,a,b;
   a=add(5,s);
   b=add(s1,s2);
    a.print();
    b.print();
    return 0;
}