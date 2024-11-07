class A {

    void myFunction() {
        System.out.println(" i am base class callled ");
    }
}

class B extends A {

   @Override
    void myFunction() {
        System.out.println(" i am derived class callled ");
    }
}
class C extends A {             // in c++ we need to use virtual to achive multiple inheritance but in java the virtual is defult 

   @Override
    void myFunction() {
        System.out.println(" i am grand derived class callled ");
    }
}

public class method_overrideing {
    public static void main(String[] args) {
        A obj3 = new C();
        obj3.myFunction();

        A obj = new A();
        obj.myFunction();

        A obj2 = new B();
        obj2.myFunction();
    }
}
