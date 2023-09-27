import java.util.*;
public class Something{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        System.out.println("Enter 1st number");
        int a =sc.nextInt();
        System.out.println("Enter 2nd number");
        int b =sc.nextInt();
        a = a + b;
        b = a - b;
        a = a - b;
        System.out.println("The 1st number now is :"+a);
        System.out.println("The 2nd number now is : "+b);

    }
}