import java.util.*;
 class car
{
int model; String make; int speed; 
car() {}
car(int m,String b,int s)
{
model=m; make=b; speed=s;
}
int retm()
{
return model;
}
String ma()
{
return make; }
int rets()
{
return speed; }

void Accelerate() {
speed+=5;
}
void Break() {
speed-=5;
}
}
public class oneb
{
public static void main(String args[])
{
Scanner s=new Scanner(System.in); 
System.out.println("Enter the make (brand): "); 
String b=s.nextLine(); 
System.out.println("Enter the model (year): "); 
int y=s.nextInt();
 System.out.println("Enter the current speed: "); 
int sp=s.nextInt();
car c=new car(y,b,sp);
 System.out.println("Model: "+c.ma());
 System.out.println("Make: "+c.retm());
for(int i=0;i<5;i++) {
c.Accelerate();
System.out.println("Current speed is: "+c.rets()); 
}
for(int i=0;i<5;i++)
{
c.Break();
System.out.println("Current speed is: "+c.rets()); }
}
}
