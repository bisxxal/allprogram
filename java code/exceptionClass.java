
// import java.util.Scanner;  
// class InvalidAgeException  extends Exception    
// {
//     public InvalidAgeException (String message)    
//     {    
//         // calling parent Exception class constructor    
//         super(message);
//     }
// }
// public class exceptionClass {
//      // create method checkEligibility() to check whether the given is valid for exam or not  
//     static void checkEligibility (int age)   throws InvalidAgeException
//     {   
//         if(age < 18){    
//             // we throw InvalidAgeException when the age is less than 18    
//             throw new InvalidAgeException("You are not eligible for the exam.");   
//         } else {     
//             System.out.println("You are eligible for the exam.");     
//         }       
//     }      

//     public static void main(String args[])    
//     {    

//         Scanner scan = new Scanner(System.in); 
//         System.out.println("Please enter your age:");  
//         int age = scan.nextInt();  
//         scan.close();  

//         try    
//         {
//             checkEligibility(age);    
//         }    
//         catch (InvalidAgeException exception)    
//         {    
//             System.out.println("We found an excaption:"+exception);    
//         }         
//     }       
// }

class myexp extends Exception {

    public myexp(String name) {
        super(name);
    }
}

public class exceptionClass {

    static void cheakage(int age) throws myexp {

        if (age > 19) {
            System.out.println("you can drive ");
        }
        else {         
            throw new myexp("You are not eligible for the exam.");
        } 

    }

    public static void main(String[] args) {
        
int age = 4;


try{
cheakage(age);
}
catch(myexp e){
    System.out.println("Exeption is "+ e);
}
    }
}