
// interface Test{
//     default void show (){
//         System.out.println("i am  defult method ");
//     }
//     void normal ();
//     static void stact (){
//         System.out.println("i am  static method ");
//     }
// }
// interface Test3{
//     default void show (){
//         System.out.println("i am  defult method ");
//     }
    
// }
// class Test2 implements Test ,Test3{
//     public void normal(){
//         System.out.println(" i am normal function ");
//     }

//     public void show(){
//         System.out.println("calling the suupper clsassa ");
//         Test.super.show();
//     }
// }
// public class defult_and_static_interface {
//     public static void main(String[] args) {
        
//         Test2 onj = new Test2();
//         onj.show();
//         onj.normal();
//         Test.stact();
             
         
//     }
// }





interface Test{
    default void show (){
        System.out.println("i am  defult method ");
    }
    void normal ();
    // static void stact (){
    //     System.out.println("i am  static method ");
    // }
}
interface Test3{
    default void show (){
        System.out.println("in test 3 ");
    };
}
class Test2 implements Test ,Test3 {
    public void normal(){
        System.out.println(" i am normal function in side the class Test 2 !! ");
    }

    public void show(){
        System.out.println("calling the suupper clsassa ");
        Test.super.show();
        Test3.super.show();
    }
}
public class defult_and_static_interface {
    public static void main(String[] args) {
        
        Test2 onj = new Test2();
        onj.normal();
        onj.show();
        // Test.stact();
             
         
    }
}