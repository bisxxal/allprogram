
import java.util.Scanner;

class myClass {
   private int id;
   private String name;

    public void getid(){
        System.out.println("enter id and name :");
        Scanner sc = new Scanner(System.in);
        this.id = sc.nextInt();
        name = sc.nextLine();
        sc.close();

    }
    public void setid(){
        System.out.println("NAME is "+name+" ID is "+id);
    }
}
public class getter_setter {
    public static void main(String[] args) {
        
        myClass obj = new myClass();
        // obj.id  = 23;
        // System.out.println(obj.id);
        obj.getid();
        obj.setid();
    }
}