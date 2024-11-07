 public class InnerClass{

    private int data = 12;

    class Inner2{
        void msg(){
        System.out.print("data is" + data);
    }}

    public static void main(String[] args) {
        
        InnerClass obj = new InnerClass();
        InnerClass.Inner2 n = obj.new Inner2();
        n.msg();
    }
 }