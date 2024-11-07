
interface cycle {

     int a =90;
  void myfun();
    
} 
interface gadi {

  final  int b =70;
  void gaddichla();
    
} 
class bike implements cycle , gadi{                  //we can also do multiple implements

    @Override
    public void myfun() {

       System.out.println("cars ");

    }
    public void gaddichla(){
        System.out.println("gadi he bhi gaddi he !!!!!!!!");
    }

}

public class interfaceCode {
    public static void main(String[] args) {
        bike obj = new bike();
        obj.myfun();
        System.out.println(obj.a +" "+obj.b);
        obj.gaddichla();
    }
}
