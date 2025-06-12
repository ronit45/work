
import java.util.*;
public class q2 {
    public static void main(String args[]){
        System.out.println("enter size of array");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [] arr= new int[n];
        for(int i=0;i<n;i++){
            arr[i]= sc.nextInt();
        }
        int inversioncnt=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    inversioncnt++;
                }
            }
        }
        System.out.println("inversion count =");
        System.out.println(inversioncnt);
    }
}
