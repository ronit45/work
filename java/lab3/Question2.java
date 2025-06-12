
import java.util.*;
import java.util.Scanner;

public class Question2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char[] roll = new char[14];
        
        System.out.println("Enter 14 characters:");
        for (int i = 0; i < 14; i++) {
            roll[i] = sc.next().charAt(0);
        }
        
        char[] rollcheck = {'B', 'T', 'E', 'C', 'H', '/', '0', '0', '0', '0', '0', '/', '0', '0'};
        
        int flag = 0;
        
        for (int i=0;i<5;i++) {
            if (roll[i] != rollcheck[i]) {
                flag = 1;
                break;
            }
        }
        
        if (roll[11] != rollcheck[11]) {
            flag = 1;
        }
        
        if (flag == 1) {
            System.out.println("Not in correct order");
        } else {
            System.out.println("Correct");
        }
        
        sc.close();
    }
}
