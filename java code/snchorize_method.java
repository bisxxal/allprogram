// class Printing {
//     int s;
// synchronized public void Print(String ch){
//         for(int i=0;i <10;i++){
//             for(int j=0;j<i;j++){
//                 System.out.print(ch);
//             }
//             System.out.println();
//         }
//     }
// }
// class sy extends Thread{

//     Printing p;
//     sy(Printing p){
//         this.p = p;
//     }
//      public void run(){
//         p.Print("*");
//     }    
// }
// class sy2 extends Thread{

//     Printing p;
//     sy2(Printing p){
//         this.p = p;
//     }  
//     public void run(){
//         p.Print("#");
//     }
// }
// public class snchorize_method {
//     public static void main(String[] args) {
//         Printing p = new Printing();
//         sy obj = new sy(p);
//         sy2 obj2 = new sy2(p);
//         obj.start();
//         obj2.start();
//     }
// }


// class Bus extends Thread{
//     int avalible =1,passanger;
//     Bus(int passanger ){
//         this.passanger = passanger;
//     }
//     public synchronized void run(){
//         String name  = Thread.currentThread().getName();
//         if(avalible >= passanger){  //0 >= 1
//             System.out.println(name + " reserved seat");
//             avalible -= passanger;
//         }
//         else
//         System.out.println(name + " did not get seat");
//     }
// }
// public class snchorize_method {
//     public static void main(String[] args) {
//         Bus o = new Bus(1);
//          Thread bus1 = new Thread(o);
//          Thread bus2 = new Thread(o);
//          Thread bus3 = new Thread(o);

//         bus1.setName("bisxxal");
//         bus2.setName("musa");
//         bus3.setName("goutam");

//         bus1.start();
//         bus2.start();
//         bus3.start();
//     }
// }
