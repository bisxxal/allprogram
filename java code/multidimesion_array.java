public class multidimesion_array {
    public static void main(String[] args) {
        // p-1 
        float sum = 0;
        float arr[] = {23.34f,34.2f,67.98f,67.8f,56.9f};
        for(int i=0;i<arr.length;i++){
            sum = sum +arr[i];
        }
        System.out.println(sum);

        // p -2 
        int a[ ] = {1,43,4,2,8,5,6,4,0,9,88,7,6};
        int ele = 3;
        boolean isAnArray = false;
        for(var num : a){

            if(num == ele){
                isAnArray = true;
                break;
             }
        }
        if(isAnArray){
            System.out.println( "found ele ");
        }
        else
        System.out.println("not found ");

        // p - 3
//                                                           find the max value in the array 
       int max = 0 ;
    //    int max = Integer.MAX_VALUE;
       for(var e: a ){
        if(e<max)
        max = e;
       }
       System.out.println("the value of maximum element in this array " + max);


    }

}
