package apack;
import java.util.*;

public class A
{
int x;
private int y;
public int z;
protected int w;
public A()
{}
public A(int a,int b,int c,int d)
{
x=a;
y=b;
z=c;
w=d;
}
}
/* 
package bpack;
import apack.A;
import java.util.*;
public class B extends A
{
public B()
{}
public B(int a,int v,int c,int d)
{
super(a,v,c,d);
}
publc void display()
{
System.out.println("x from class B= "+x); //error
System.out.println("y from class B= "+y); //error
System.out.println("z from class B= "+z);
System.out.println("w from class B= "+w);
}
}
package cpack;
import java.util.*;
import apack.*;
public class C
{

public C()
{}
public void display()
{
A obj=new A(11,22,33,44);
//System.out.println(&quot;x from class C= &quot;+obj.x); //error
//System.out.println(&quot;y from class C= &quot;+obj.y); //error
System.out.println("z from class C= "+obj.z);
//System.out.println(&quot;w from clas C= &quot;+obj.w); //error
}
}
package dpack;
import apack.*;
import bpack.*;
import cpack.*;
import java.util.*;
public class protectedDemo
{
protectedDemo()
{}
public static void main(String args[])
{
B obj1=new B(10,20,30,40);
C obj2=new C();
obj1.display();
obj2.display();
}
}*/