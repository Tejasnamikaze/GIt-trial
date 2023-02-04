class Queue <E> {
E[] a;
int front,rear; 
Queue()
{
 a=(E[])new Object[10]; 
 front =0;
rear=0;
}
void enqueue(E m) {
if(rear==10)
{
growable(); 
} 
a[rear]=m;
 rear++;
}
E dequeue()
{
E item;
item=a[front];
front++;
return item;
}
boolean haselement()
{
return front!=rear;
}
void growable()
{
int n= 10*2;
E newarr[];
newarr=(E[])new Object[n];
int tmpfront=front;
int tmprear=0;
while(true)
{ 
     newarr[tmprear++]=a[tmpfront];
     tmpfront++;
if(tmpfront==10)
{
tmpfront=0;
break;
}
}
a=newarr;
front=0;
rear=tmprear;
}

 }
class student
{
String name;
int id;
student(String m,int n)
{
name=m;
id=n;
}
public String toString()
{
return name+" "+id;
}
}
public class genericqueue
{
public static void main (String[] args)
{
Queue<Integer> obj=new Queue<Integer>(); 
Queue<Double> obj1=new Queue<Double>(); 
Queue<student> obj2=new Queue<student>(); 
obj.enqueue(1);
obj.enqueue(2);
obj.enqueue(3);
obj.enqueue(4);
obj.enqueue(5);
obj.enqueue(6);
obj.enqueue(7);
obj.enqueue(8);
obj.enqueue(9);
obj.enqueue(10);
obj.enqueue(11);
obj.enqueue(12);
obj.enqueue(13);
obj.enqueue(14);
obj.enqueue(15);
obj1.enqueue(1.2);
obj1.enqueue(2.4);
obj1.enqueue(3.6);
obj1.enqueue(4.4);
obj1.enqueue(5.55);
obj2.enqueue(new student("Ram",1)); 
obj2.enqueue(new student("Krish",2)); 
obj2.enqueue(new student("Ganesh",3));

obj2.enqueue(new student("Kiran",4)); 
while(obj.haselement())
{
System.out.println(obj.dequeue());
}
while(obj1.haselement())
{ System.out.println(obj1.dequeue()); }
while(obj2.haselement())
{ System.out.println(obj2.dequeue()); }
}
}