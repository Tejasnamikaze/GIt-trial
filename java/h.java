import java.util.InputMismatchException; 
public class studentexception {
    public static void main(String[] args) { 
     double totalmarks = 0, percentage;
    String name = args[0];
    int marks[] = new int[6];
    try {
    for (int i = 1; i <= 6; i++)
     {

    marks[i - 1] = Integer.parseInt(args[i]);
    if (marks[i - 1] >= 0 && marks[i - 1] <= 50) 
    {
    totalmarks += marks[i - 1];
    } 
    else
    throw new InputMismatchException("Exception: Marks must be in the range of 0 to 50");
    }
    percentage = (totalmarks / (6 * 50)) * 100; 
    System.out.println("Student Details-: "); 
    System.out.println("Name: " + name); 
    System.out.print("Marks in 6 subjects: ");
    for (int i = 0; i < 6; i++)
    System.out.println(marks[i] + " ");
     System.out.println("\nTotal Marks: " + totalmarks);
      System.out.println("Percentage: " + percentage);
    } 
    catch (InputMismatchException e)
     { 
        System.out.println(e.getMessage());
    }
    }
    }
    
}