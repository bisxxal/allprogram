public class varagus {

    static int sum (int...arr){
        int result = 0;
        for(var i : arr)
        result += i;

        return result;
    }

    static void display(String...names){
        for(var i : names)
        System.out.print(i+" ");
        System.out.println();
    }
    public static void main(String[] args) {
        
        System.out.println("the sum of var is : "+ sum());
        System.out.println("the sum of var is : "+ sum(2,3));
        System.out.println("the sum of var is : "+ sum(89,67,56));
        System.out.println("the sum of var is : "+ sum(56,78,2,3));
        System.out.println("");
        System.out.println("the sum of var is : "+ sum(45,78,12,67,89));

        display();
        display("this" ," is ","bisxxal ","hear !!!!!!!");
        display("biscv" , "vjyeJHB");
        display("biscv","AJMWEJ","AREBJ,BJK,");
        display("biscv","AJMWEJ","AREBJ,BJK,","wjhewf");
        display("biscv","AJMWEJ","AREBJ,BJK,","wjhewf","jeWVY<<JV");
        display("biscv","AJMWEJ","AREBJ,BJK,","wjhewf","jeWVY<<JV", "kwueyjf,WeK");
    }
}
