class demo{
    int id ;
    String name;

    demo(int i , String n){
        id = i;
        name = n;

        System.out.println(id+" "+name);
    }
    demo (demo d){
        name = d.name;
        id = d.id;

        System.out.println("coping value is:"+id+" "+name);
    }
}
public class coping_construstor {
    public static void main(String[] args) {
        demo d = new demo(23, "bisxxal");
        demo d2 = new demo(d);
    }
}
