import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class DateTimeFormster {
    public static void main(String[] args) {
        LocalDateTime dt = LocalDateTime.now();
        System.out.println(dt);

        DateTimeFormatter nw = DateTimeFormatter.ofPattern("hh:mm:s a E dd MM yyyy  ");
        String s = dt.format(nw);
        System.out.println(s);


        // yyyy-MM-dd	"1988-09-29"	
        // dd/MM/yyyy	"29/09/1988"	
        // dd-MMM-yyyy	"29-Sep-1988"	
        // E, MMM dd yyyy	"Thu, Sep 29 1988"
    }
}
