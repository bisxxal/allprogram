//                      6 -> an argument in a constructer
class A{
    B obj;
    A(B obj){
        this.obj = obj;
     obj.display();
        // System.out.println("inside parametrized cons "+data);
    }
}
class B{
    int x = 5;
    B(){
        new A(this);
    }
    void display(){
        System.out.println("valu of x in class derived " + x);
    }
}
public class thisk {
    public static void main(String[] args) {
        
         new B();
    }
}

//                                                2->
// class baseNew{
//     int data;
//     baseNew(int data){
//         this.data = data;
//         System.out.println("inside parametrized cons "+data);
//     }
//     baseNew(){
//         this(10);
//         System.out.println("inside defult cons");
//     }
// }
// public class thisk {
//     public static void main(String[] args) {
        
//          new baseNew();
//     }
// }
  ///                       1->
// class baseNew{
//     int data;
//     baseNew(int data){
//         this.data = data;
//         System.out.println(data);
//     }
// }
// public class thisk {
//     public static void main(String[] args) {
        
//          new baseNew(32);
//     }
// }
  