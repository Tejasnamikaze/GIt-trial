import java.io.FileInputStream; 
import java.io.FileOutputStream;
 public class Library {
public static void main(String[] args) { 
    System.out.println("Writing in File"); 
    try {
FileOutputStream fout = new FileOutputStream("demo.txt");
String str = "Name of the book :A suitable boy ,Author:Vikram Seth, Total_Page:1500";
 byte b[] = str.getBytes();
fout.write(b);
fout.close();
System.out.println("successful write.");
} catch (Exception e) {
     System.out.println(e);
}
System.out.println("Reading From File");
try {
FileInputStream fin = new FileInputStream("demo.txt");
int i = 0;
while ((i = fin.read()) != -1) {
     System.out.print((char) i);
}
fin.close();
} catch (Exception e) { System.out.println(e.getMessage());
}
}
}