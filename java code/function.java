import java.util.Scanner;

public class function {

    public static void myFun(int a , int b){

        int temp = a;
        a = b;
        b = temp;
        System.out.println("Inside the function " + a);
        System.out.println("Inside the function " + b);
        //                                 return a;
    }
    public static void main(String[] args) {

        try (Scanner sc = new Scanner(System.in)) {
            int a = sc.nextInt();
            int b = sc.nextInt();
              myFun(a,b);
      System.out.println(a );
      System.out.println(b);

      
        }
    }
}
