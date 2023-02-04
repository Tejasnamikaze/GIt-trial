import java.lang.Math; 
import java.util.*;
 interface IPoint
{
int a=20,b=10;
void message();
}
abstract class Shape1 {
double area;
abstract void draw();
abstract void area();
}
class Triangle extends Shape1 implements IPoint {
public void message()
{
System.out.println("Hello Traiangle ");
}
void draw()
{
System.out.println("A triangle drawn");
}
void area()
{
area=0.5*(a*b);
System.out.println("Area of triangle="+area); }
}
class Circle extends Shape1
{
 int r;
Circle(int ra)
{
r=ra;
}
void draw()
{
System.out.println("A circle drawn");
}
void area()
{
area=3.14*r*r;
System.out.println("Area of the circle:"+area); }
}
class ThreeDCircle extends Circle
{
ThreeDCircle(int rd)
{
super(rd);
}
void draw()
{
System.out.println("A sphere drawn");
}
void area()
{
area=4*3.14*r*r;
System.out.println("Area of the sphere:"+area);
}
}
class Hexagon extends Shape1 implements IPoint {
public void message()
{
System.out.println("Hello Hexagon"); }
void draw()
{
System.out.println("A hexagon has been drawn"); }
void area()
{
area=(1.5)*Math.sqrt(3)*a;

System.out.println("Area of the hexagon:"+area); }
}
class Demo
{
public static void main(String args[])
{
Triangle shape1=new Triangle(); shape1.message();
shape1.draw();
shape1.area();
Circle shape2=new Circle(5); shape2.draw();
shape2.area();
ThreeDCircle shape3=new ThreeDCircle(6); shape3.draw();
shape3.area();
Hexagon shape4=new Hexagon(); shape4.message();
shape4.draw();
shape4.area();
} }
