import java.util.*;

class D{
 int userInput;
 int computerInput;

   public D(){
         Random ran = new Random();
         computerInput = ran.nextInt(100);
         System.out.println("computer input is "+computerInput);
    
    // void myinput(){
         Scanner sc = new Scanner(System.in);
           userInput = sc.nextInt();

    //      while(){
    //         if(userInput > computerInput)
    //         System.out.println("plese enter small number");
    //         else if(userInput < computerInput)
    //         System.out.println("please enter small number ");
    //      }
    //      System.out.println("equal ");
sc.close();
    }
}
public class guess {
    public static void main(String[] args) {
        
        D obj = new D();
        
    }
}
