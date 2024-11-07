import java.time.LocalDate;
import java.time.LocalTime;
import java.util.Calendar;
import java.util.Date;

public class Date_and_Time {
    public static void main(String[] args) {
       
        Date d = new Date();
 
        // Printing the value stored in above object
        System.out.println("Current date is " + d);
        System.out.println("get time "+d.getTime());
        System.out.println("get Date "+d.getDate());
        System.out.println("get Seconds "+d.getSeconds());
        System.out.println("get Minutes "+d.getMinutes());
        System.out.println("get year "+d.getYear());         // from 1900 
        System.out.println(System.currentTimeMillis());

        LocalTime myObj = LocalTime.now();
        System.out.println("Time is "+myObj);

        LocalDate dt = LocalDate.now();
        System.out.println("Date is "+dt);
          // Creating an object of Calendar class
          Calendar c = Calendar.getInstance();
 
          // Print corresponding instances by passing
          // required some as in arguments
          System.out.println("Day of week : "+ c.get(Calendar.DAY_OF_WEEK));
          System.out.println("Day of year : "+ c.get(Calendar.DAY_OF_YEAR));
          System.out.println("Week in Month : "+ c.get(Calendar.WEEK_OF_MONTH));
          System.out.println("Week in Year : "+ c.get(Calendar.WEEK_OF_YEAR));
         System.out.println( "Day of Week in Month : "+ c.get(Calendar.DAY_OF_WEEK_IN_MONTH));
          System.out.println("Hour : "  + c.get(Calendar.HOUR));
          System.out.println("Minute : "+ c.get(Calendar.MINUTE));
          System.out.println("Second : " + c.get(Calendar.SECOND));
          System.out.println("AM or PM : " + c.get(Calendar.AM_PM));
          System.out.println("Hour (24-hour clock) : "+ c.get(Calendar.HOUR_OF_DAY));
                             
    }
}
