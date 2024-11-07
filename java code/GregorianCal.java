import java.util.Calendar;
import java.util.GregorianCalendar;
import java.util.Locale;
import java.util.TimeZone;

public class GregorianCal {
    public static void main(String[] args) {
        
          Calendar cal = Calendar.getInstance();
  
        GregorianCalendar gcal = new GregorianCalendar();
 
        /* Displaying Current Date using
             Calendar Class */
        System.out.println("Calendar date: "  + cal.getTime());
 
        System.out.print("Gregorian date: "+ gcal.getTime());

         String month[] = { "Jan", "Feb", "Mar", "Apr",
                           "May", "Jun", "Jul", "Aug",
                           "Sep", "Oct", "Nov", "Dec" };
 
        // declaring an array to store AM or PM
        String amPm[] = { "AM", "PM" };
 
 
        // displaying the date, time, time zone and locale
  
      System.out.print("Date: "+ month[gcal.get(Calendar.MONTH)] + " "  + gcal.get(Calendar.DATE) + ", "
                       
                         + gcal.get(Calendar.YEAR) + "\n"
                         + "Time: "
                         + gcal.get(Calendar.HOUR) + ":"
                         + gcal.get(Calendar.MINUTE) + ":"
                         + gcal.get(Calendar.SECOND) + " "
                         + amPm[gcal.get(Calendar.AM_PM)] + "\n"
                         + "Time Zone: " + gcal.getTimeZone().getDisplayName()
                         + "\n"
                         + "Locale: "
                         + Locale.getDefault().getDisplayName());

                         TimeZone tz = TimeZone.getDefault();  
  
                        // setting the time zone ID  
                        tz.setID("GMT + 07:01");  
                        
                        // checking for the time zone ID  
                        System.out.println("The Time zone ID is: " + tz.getID());  
    }
}
