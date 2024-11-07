// abstract class t2 {
//    abstract void funct1();
//    t2(){
//     System.out.println("base cons");
//    }
// }
public class tryy {
  tryy(){
    System.out.println("derived cons");
  }
   void funct1 (){
    System.out.println("hii");
  }
   
    public static void main(String[] args) {
      tryy t = new tryy();
      // t2 t2 = new t2();
      t.funct1();
      // t2.funct1();
    }
}