import java.util.Scanner;

public class multiple_catch_block {
    public static void main(String[] args) {
        
        // String n = null;
        // int s =3;
        int[] arr = {1,2,3,43,12,12,34};
        Scanner sc = new Scanner(System.in);
        System.out.println("enter array index ");
        int index = sc.nextInt();
        System.out.println("enter number ");
        int n = sc.nextInt();
        try{
            // System.out.println(n.length());
            // System.out.println(s/0);
            System.out.println("index = "+arr[index]);
            System.out.println("NUMber divided by  = "+arr[index]/n);
            sc.close();
        }
        catch(ArithmeticException e){
            System.out.println("arthid "+e);
        }
        catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Array "+e);
        }
        catch(StringIndexOutOfBoundsException e){
            System.out.println("String lala "+e);
        }
        catch(Exception e){
            System.out.println("normal lala "+e);
        }
    }
}
