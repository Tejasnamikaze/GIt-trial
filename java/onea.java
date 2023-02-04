import java.util.*;
class RetailItem
{
private String Description; int units; float price; 
RetailItem()
{
}
RetailItem(String a,int u,float p) {
Description=a; units=u; price=p; }
String retdes()
{
return Description;
}
int retu()
{
return units;
}
float retp()
{
return price; }
void display() {
System.out.println("Product name and description: "+retdes()); 
System.out.println("Number of units: "+retu()); 
System.out.println("Price of each unit: "+retp()); 
System.out.println("Total price: "+retu()*retp());
}
}
public class onea
{
public static void main(String args[])
{
Scanner s=new Scanner(System.in); System.out.println("Enter the number of objects: ");
 int n=s.nextInt();
RetailItem obj[]=new RetailItem[n]; 
for(int i=0;i<n;i++)
{

Scanner sc=new Scanner(System.in);
System.out.println("Enter the name of the product along wih the description:");
String a = sc.nextLine(); System.out.println("Enter the number of units: "); int u=sc.nextInt(); System.out.println("Enter the price of each product: "); float p=sc.nextFloat();
obj[i]= new RetailItem(a,u,p);
}
for(int i=0;i<n;i++)
 obj[i].display();
}
}
