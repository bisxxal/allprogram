class companyOfCars{

      void company(){
        System.out.println("wellcome to car company ");
    }
        public void OnlyCars(){
            System.out.println("i have diffrent cars ");
        }
}
class Bmw extends companyOfCars{

    @Override
      void company(){
        System.out.println("bmw gives you superclass ");
    }

    public void supperCars(){
        System.out.println("Bmw supper cars ");
    }
}
class Mercedes extends companyOfCars{

    @Override
      void company (){
        System.out.println("Mercedes gives you royality");
    }

}
public class dynamic_method_dispach {
    public static void main(String[] args) {
        
        companyOfCars obj2  = new companyOfCars();                 // allowed 
        companyOfCars obj  = new Bmw();                 // allowed 
        companyOfCars obj1  = new Mercedes();                 // allowed 
        // Bmw obj2  = new companyOfCars() ;              /// not allowed man!!!!!!
        
        obj2.company();
        obj1.company();
        obj.company();
        // obj.supperCars();                  // allowed  
        obj.OnlyCars();
        
    }
} 