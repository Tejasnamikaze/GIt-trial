import java.io.*;
class A {
private int a;
private int b;
protected float c;
protected float d;
public int e;
public int f;
int g = 10;
A() {// default constructor
a = 0;
b = 0;
c = 0.0f;
d = 0.0f;// this problem contains hybrid inheritance
e = 0;
f = 0;
}
A(int p, int q, float r, float s, int t, int u) { // parameterized constructor
a = p;
b = q;
c = r;
d = s;
e = t;
f = u;
}
void display() {
System.out.println(" a: " + a + " b: " + b + " c: " + c + " d: " + d + " e: " + e + " f: " + f+"g:"+g);
}
/* final */ 
void read() { // using final keyword to stop method overriding
System.out.println(" value of g : " + g);
}
}
/* final*/ class B extends A { // using final keyword to stop inheritance
int g = 100;
void read() { // method overriding 
System.out.println(" value of g : " + g); 
System.out.println(" value of g : " +super.g);// displays (parent's class) g value of A , as super keyword refers to immediate parent's class instance when it has same variable as child class
}
}
class C extends B {
}
class D extends B {
}
class lab3 {
public static void main(String args[]) {
A a = new A(10, 20, 30.5f, 40.5f, 50, 60);// c
//and d are of float type
a.display();
B b = new B();
b.read();
}
}
