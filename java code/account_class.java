class myAccount{
    int accountno;
    String name;
    float ammount;

    void insert(int accno , String nam , int money ){
        accountno = accno;
        name = nam;
        ammount = money;

        System.out.println("Account no is "+ accountno +" Account holder name "+ name + "opening account-- "+ ammount);
    }
    void deposit(int depos){
         ammount = ammount+ depos;
         System.out.println("Succesfull deposited "+ depos);
    }
    void withdraw(int wid){

        if(wid > 5000f)
        System.out.println("cant withdraw ");
        else{

            ammount = ammount - wid;
            System.out.println(wid + " Rupese successfuly withdrawed ---");
        }
    }
    void cheakBalance(){

        System.out.println("current Balance is " + ammount);
    }
}
public class account_class {
    public static void main(String[] args) {
        
        myAccount obj = new myAccount();

        obj.insert(65324590, "bishal ", 5000);
        obj.cheakBalance();

        obj.deposit(7000);
        obj.cheakBalance();

        obj.withdraw(3000);
        // obj.withdraw(3000);
        // obj.withdraw(3000);
        obj.cheakBalance();
    }
}
