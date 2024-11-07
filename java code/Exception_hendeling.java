/**
 * Myexp
extends Ex */
  class Myexp extends Exception{
    public Myexp(String s){
        super(s);
    }
}
public class Exception_hendeling {
    public static void main(String[] args) {
        int m = 9;
        int k = 0;
        // try{
        // System.out.println(m/k);
        // }
        // catch(Exception n){
            // System.out.println(n);
        //     n.printStackTrace();             // methods to handel execption
        //     System.out.println(n.toString());            // methods to handel execption
        //    System.out.println( n.getMessage());            // methods to handel execption

            try{
                throw new Myexp("bisxx");
            }
        
 catch(Myexp e ){
            System.out.println("exception is ________"+e);
            System.out.println("Exceptionnn is in getMethod ()"+e.getMessage());
              System.out.println(e.toString()); 
        }
    }
}
