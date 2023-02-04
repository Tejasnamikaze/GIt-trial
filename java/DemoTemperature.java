import java.util.*; 
 class Temperature { 
    float temp;
Temperature() {
Scanner in = new Scanner(System.in); 
System.out.print("Enter temperature: "); 
temp = in.nextFloat();
in.close();
}
void check() {
try {
if (temp == 0) {
throw new NullPointerException("Exception: Temperature can not be ZERO");
}
System.out.println("Temperature = " +temp);
}
 catch (NullPointerException e) { 
    System.out.println(e.getMessage());
}
}
}
class DemoTemperature {
public static void main(String[] args) {
Temperature ob = new Temperature();
ob.check();
} }