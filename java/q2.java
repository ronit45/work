import java.util.Scanner;
public class q2 {
    public static void main(String a[]){
        int even=1,odd=0;
        for(int i=0;i<a.length;i++){
            int b= Integer.parseInt(a[i]);
            if((b%2)==0){
                System.out.println(b+"- Even");
                even++;
            }
            else{
                System.out.println(b+"-Odd");
                odd++;
            }
        }
        System.out.println(even + " nums are even" + odd +" are odd");
    }
}
