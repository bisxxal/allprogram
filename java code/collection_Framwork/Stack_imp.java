package collection_Framwork;

import java.util.Stack;
import java.util.ArrayList;

import java.util.Iterator;
 
public class Stack_imp {
//                               using array list implemention 
    static class stack{
        static ArrayList <Integer> l = new ArrayList<>();

        public void pushEle(int ele ){
          l.add(ele);
        }
        public static int popEle (){
            if(l.size() == 0)
            return -1;
            int top = l.get(l.size()-1);
            l.remove(l.size()-1);
            return top;
        }
        public static int peekEle(){
            if(l.size() == 0)
            return -1;
            
            int top = l.get(l.size()-1);
            return top;

        }
        public static boolean isEmptyEle(){
            return (l.size() == 0);

        }
    }

    public static void addTBottom(int data , Stack<Integer>s){
        if(s.empty()){
            s.push(data);
            return;
        }
        int top  = s.pop();
        addTBottom(data, s);

        s.push(top);
    }
    public static void Reverse(Stack<Integer>s){
        if(s.empty()){
            return;
        }
        int top = s.pop();
        Reverse(s);
        addTBottom(top, s);
    }
    public static void main(String[] args) {
        Stack<Integer> s = new Stack<>();
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(5);
        System.out.println(s);
        System.out.println("peek is "+s.peek());
        s.pop();
        System.out.println( "Searching ele "+s.search(1));;
        System.out.println( "size  ele "+s.size());;
    
        // addTBottom(1000, s);
        System.out.println(s);
        Reverse(s);
        System.out.println(s);
        System.out.println("element are ");
         while(!s.isEmpty()){
                System.out.print("  "+s.peek());
                s.pop();
         }
        // Iterator iterator = ((Collection<Integer>) stk).iterator();  
        // while(iterator.hasNext())  
        // {  
        // Object values = iterator.next();  
        // System.out.println(values);   
        //  }
        
        //  stk.forEach(n ->  {  
        // System.out.println(n);  });
        
        // Stack<String> stk = new Stack<>();
         stack stk = new stack();  
         //pushing elements into stack  
         stk.pushEle(2000);
         stk.pushEle(8000);
         stk.pushEle(1000);
         stk.pushEle(6000);
         stk.pushEle(9000);
         //iteration over the stack  
         
         stk.popEle();
          while(!stk.isEmptyEle()){
                 System.out.println(stk.peekEle());
                 stk.popEle();
          }
         
        // System.out.println(stk);  
    }
}
