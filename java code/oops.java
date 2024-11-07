class myClassNew{
    int id;
    String name;
    String occupction;
    public void print (String occ){

        occupction = occ;
        System.out.println("And occupation is :"+ occupction);
    }
}
public class oops {
    int roll;
    String s1;
    public static void main(String[] args) {
        
        // inside the class objects 
        oops obj = new oops();
        obj.roll = 34;
        obj.s1 = "bisxxal";
        System.out.println("Inside the class objects are :"+obj.roll+" and name is "+obj.s1);

        // otside the class objects are 
        myClassNew obj2 = new myClassNew();
        obj2.id = 23; 
        obj2.name = "goutam";
        System.out.println("outside the class objects are :"+obj2.id+" and name is "+obj2.name);
        obj2.print("Developer");
 
    }
}
