// class FirstClass {
//     FirstClass() {
//         System.out.println("base class is called ");
//     }

//     FirstClass(int data) {
//         System.out.println("base class is called overloded" + data);
//     }

// }

// class SecondClass extends FirstClass {
//     int data;

//     SecondClass(int data) {
//         super(data);
//         this.data = data;
//         System.out.println("data is " + data);
//     }
// }

                                // 2nd example -->

class Person{
    int id;
    String name;
    Person(int id , String name ){
        this .id =id;
        this .name =name;
    }
}
class Emp extends Person{
    String occ;
    Emp(int id , String name , String occ ){
        super(id ,name );
        this.occ = occ;
    }
    void display(){
        System.out.println(name+" is a "+id + " " +" "+ occ);
    }
}
public class superK {

    public static void main(String[] args) {
        Emp n = new Emp(23,"bisxxal","developer");
        n.display();
    }
}
