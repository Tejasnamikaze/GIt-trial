import java.io.*;
class TicketBooking implements Runnable {
     int ticketsAvailable = 1;
public void run() { 
    System.out.println("Waiting to book ticket for : " + Thread.currentThread().getName());
     synchronized (this) {
if (ticketsAvailable > 0) {
     System.out.println("Booking ticket for: " + Thread.currentThread().getName());
 try {
Thread.sleep(1000);
} 
catch (Exception e) {
} 
ticketsAvailable--; 
System.out.println("Ticket BOOKED for : " + Thread.currentThread().getName());
 System.out.println("currently ticketsAvailable = " + ticketsAvailable);
} else {
System.out.println("Ticket NOT BOOKED for : " + Thread.currentThread().getName());
}
}//end of synchronization block
} 
}
public class Busreserve {
public static void main(String[] args) { 
    TicketBooking obj = new TicketBooking();
Thread customer1 = new Thread(obj, "customer1 ");//Thread(obj);
Thread customer2 = new Thread(obj, "customer2");//Thread(obj);
customer1.start();
customer2.start();
} }
