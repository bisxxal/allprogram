public class LOCAK_innerclass {


  public void display() { 

    class inner3{

    void myFunt(){
        System.out.println("in loccal cllass ");
    }
}
    inner3 ob = new inner3();
    ob.myFunt();
    
}
    public static void main(String[] args) {
        
        LOCAK_innerclass obj2 = new LOCAK_innerclass();

        obj2.display();
    }
}
