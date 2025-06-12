import java.util.Scanner;  
public class A3Q4 {     public static void main(String[] 
args) {         int number, i = 0;  
       Scanner sc = new Scanner(System.in);
       int[] arr = new int[32];  
       for (int j = 0; j < arr.length; j++) {
              arr[i] = 0;  
       }  
 
       System.out.print("Enter a number : ");
       number = sc.nextInt();  
        while (number > 0) {  
            arr[i] = number & 1;
            i++;
            number = number >> 1;  
       }  
         
       for (int j = 0; j < arr.length/2; j++) {
              int temp = arr[j];
              arr[j] = arr[arr.length - j - 1];
              arr[arr.length - j - 1] = temp;  
       }  
 
       for (int j = 0; j < arr.length; j++) {  
           System.out.print(arr[j]);  
       } 
}  
} 