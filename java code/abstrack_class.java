 abstract class Base{
    Base(){
System.out.println("  i am called ");

    }

    public abstract void greet();
    
}

class Derived extends Base{

    Derived(){
        System.out.println("derived called ");
    }
    @Override
    public void greet(){

        System.out.println("good morning ");
    }
}
public class abstrack_class {
 public static void main(String[] args) {
    // Base d = new Base();
    Base d2 = new Derived();
    d2.greet();
 }   
}
