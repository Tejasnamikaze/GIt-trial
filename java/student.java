import java.util.*;

class UserDefinedException extends Exception  
{  
    public UserDefinedException(String str)  
    {  
       
        super(str);  
    }  
}

class marks{
    int a[]=new int[6];
    void tinput(){
        System.out.println("enter the marks in 6 subject");
        try
        {
            Scanner sc=new Scanner(System.in);
            for(int i=0; i<6; i++){
            a[i]=sc.nextInt();
                if(a[i]<0 || a[i]>50)
                {
                throw new UserDefinedException("entered marks not in range");
                }
            }
            float total=0;
            for(int i=0; i<6; i++)
            {
            total=total+a[i];
            }
            System.out.println("total: "+total);
            float percentage=(total/300)*100;
            System.out.println("Percentage: "+percentage);
        }
        catch(UserDefinedException u)
        {
        System.out.println("exception caught");
        System.out.println(u.getMessage());
        }
    }
}

class student{}
    public static void main(String args[])
    {
    marks m=new marks();
    m.tinput();
    }
}