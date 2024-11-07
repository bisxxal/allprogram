interface lam {
    void Msg(int data);
}

public class lambdaFunction {
    public static void main(String[] args) {

    lam obj = (a)->{
      System.out.println("helo world "+ a );
    } ;
    obj.Msg(89);
}}
