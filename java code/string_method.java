public class string_method {
    public static void main(String[] args) {
        String name = "bisxxal is a 7 star codder";
        System.out.println(name);
        System.out.println(name.length());
        System.out.println(name.toLowerCase());
        System.out.println(name.toUpperCase());
        System.out.println(name.substring(2, 15));
        System.out.println(name.replace("bisxxal", "gudul"));
        System.out.println(name.startsWith("bisxxal" ));
        System.out.println(name.endsWith("er"));
        System.out.println(name.charAt(5));
        System.out.println(name.indexOf("xx"));
        System.out.println(name.lastIndexOf("is"));
        System.out.println(name.equals("bisxxal is a 7 star codder"));
        System.out.println(name.equalsIgnoreCase("Bisxxal iS a 7 star codder"));
        System.out.println(name.replace('x', 'h') + " replaced");

        String non = "                    bisxxal                     ";
        System.out.println((non.replace(" ", "_")));
        System.out.println(non.trim());

        // problem 1 cheak the string have double and triple space 

        String myString = "this string have double space and   triple space if space is not the return -1";

        System.out.println(myString.indexOf("  "));          // wecan use also if else
        int n = myString.indexOf("   ");
        if(n==-1)
        System.out.println("not avaliable");
        else
        System.out.println("avalible");

    }
}
