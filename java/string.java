class string {
   public String toString() {
       return "GOOD MORNING!";
   }
 
   public String bo(int n) {
       if (n == 0) {
           return "False";
       } else {
           return "True";
       }
   }
}
 
public class Main {
   public static void main(String args[]) {
       char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
       String str = new String(arr, 2, 3);
       String st = new String(str);
       System.out.println("string = " + st);
       System.out.println("string = " + st);
       System.out.println("string = " + str);
 
       String str1 = "hello World !";
       String str2 = "BMS College";
       String str3 = str1 + str2;
       System.out.println("string = " + str3);
 
       string obj = new string();
       System.out.println("string = " + obj);
 
       String q = "hello";
       System.out.println("string = " + q.replace(q.charAt(1), 'o'));
 
       String s4 = new String("Hello JAVA Programming");
       char c[] = s4.toCharArray();
       System.out.println("{ ");
       for (int i = 0; i < s4.length(); i++) {
           System.out.println(c[i] + " ");
       }
       System.out.println("} ");
 
       String s1 = "Hello world";
       String s2 = "Hello world";
       String s3 = "Good Morning";
       // System.out.println("s1.compareTo(s2) : " + bo(s1.compareTo(s2)));
       // System.out.println("s2.compareTo(s3) : " + bo(s2.compareTo(s3)));
       System.out.println("s1 == s2 :" + (s1 == s2));
       System.out.println("s2 == s3 :" + (s2 == s3));
       System.out.println("s1.equals(s2) : " + s1.equals(s2));
 
       String s8 = "good morning";
       String s9 = "good morning Started";
       int i = s8.indexOf("good");
       if (i >= 0) {
           System.out.println("The word 'good' is found in the String 'Good morning' in the position :" + (i + 1));
       } else {
           System.out.println("The world 'good' is not found in the string");
       }
       i = s9.indexOf("good");
       if (i >= 0)
           System.out.println("The Word Good is found in the string 'Morning' started in the position : " + (i + 1));
       else
           System.out.println("The Word 'good' is not found in the string ");
       String s10 = s8.substring(s8.indexOf("good"), "good".length());
       System.out.println("String = " + s10);
       System.out.println(s8.indexOf("r"));
       String s11 = new String("Hello World");
       System.out.println(s11.replace("Hello", "greetings"));
       String s12 = new String("Hello BMSCE Good Morning");
       System.out.println(s12.replace(" ", ""));
       String arry[] = { "xyz", "24" };
       String s14 = "xyz@gmail.com";
       String s15 = "999999999";
       s14 = s14 + arry[0];
       s15 = s15 + arry[1];
       System.out.println("String s14 : " + s14);
       System.out.println("String s15 : " + s15);
   }
}