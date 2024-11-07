class myClass {

    myClass(){

      System.out.println("i am bse 1 cons ");
    }
    myClass(int x ){

      System.out.println("i am bse 1 cons with "+ x);
    }

}
class Derived1 extends myClass{

  Derived1(){
    System.out.println("i am derived 1 cons ");
  }

  Derived1(int x){
    super(45);
    System.out.println("i am derived 1 cons with "+ x);
  }

}

class Derived2 extends Derived1 {
    Derived2(){

    super(23);
    System.out.println("i am main constucter ");
    }
    
    Derived2(int x ){
    super(23);
    System.out.println("i am main constucter with "+ x);
    }
}
public class inheritance_constructer {
    public static void main(String[] args) {
        new Derived2(20);
    }
}
