
import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class File_read {
    public static void main(String[] args) {
        try {
            File r = new File("C:\\Users\\bishal\\Documents\\all programs\\python VS\\myfile.txt");
            Scanner sc = new Scanner(r);
            while (sc.hasNextLine()) {
                System.out.println(sc.nextLine());
            }
            sc.close(); // Don't forget to close the scanner when done.
        } catch (Exception e) {
            e.printStackTrace(); // Print the full exception stack trace.
            // System.out.println(e);
        }
    


            try   {
            FileWriter f = new FileWriter("exam.txt");
            FileReader fr = new FileReader("C:\\Users\\bishal\\Documents\\all programs\\python VS\\myfile.txt");
            int i;
            while((i = fr.read())!= -1){
                f.write((char)i);
            }
            f.close();
            fr.close();

        } catch (IOException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
}
}