public class pratice_set {
    static int sum(int n){

        if(n==1 )
        return 1;
        return  n + sum(n-1) ;
        
    }
    static void printPatten( int n){
        for (int i=0; i<n ;i++){
            for(int j = 0 ;j < i+1 ;j++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    static void printPatten2( int n){
        for (int i=0; i<n ;i++){
            for(int j = i; j < n; j ++){
                System.out.print("* ");
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
       
       System.out.println(sum(10) );

       // problem 2
       printPatten (9);
       System.out.println();
       printPatten2 (9);
    }
}
